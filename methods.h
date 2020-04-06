//
// Created by ccten on 21/03/2020.
//

#ifndef PROY2_EDD_METHODS_H
#define PROY2_EDD_METHODS_H

#include <time.h>

using namespace std;

void iniciar_matriz(int dim) {
    //segun las dimensiones asi se creara la matriz


    for (int i = 0; i < dim; i++) {
        fils *nuevo = new fils();
        cols *nuevo1 = new cols();
        nuevo->id = nuevo1->id = i;
        if (p_fil == nullptr) {
            p_fil = u_fil = nuevo;
        } else {
            u_fil->siguiente = nuevo;
            u_fil = nuevo;
        }

        if (p_col == nullptr) {
            p_col = u_col = nuevo1;
        } else {
            u_col->siguiente = nuevo1;
            u_col = nuevo1;
        }
    }
}


void agregar_usuario(string nombre) {
    arbol *nuevo = new arbol();
    nuevo->nombre = nombre;
    arbol *aux = raiz;
    if (raiz == nullptr) {
        raiz = nuevo;
    } else {
        while (true) {
            if (strcmpi(nombre.c_str(), aux->nombre.c_str()) < 0) {
                if (aux->izq == nullptr) {
                    aux->izq = nuevo;
                    break;
                } else {
                    aux = aux->izq;
                }
            } else if (strcmpi(nombre.c_str(), aux->nombre.c_str()) > 0) {
                if (aux->def == nullptr) {
                    aux->def = nuevo;
                    break;
                } else {
                    aux = aux->def;
                }
            } else {
                cout << "El usuario ya existe" << endl;
                break;
            }
        }
    }
}

void diccionario_agregar(string palabra) {
    palabras *nuevo = new palabras();
    nuevo->palabra = palabra;
    if (primero_pal == nullptr) {
        primero_pal = ultimo_pal = nuevo;
        primero_pal->sig = ultimo_pal;
        primero_pal->ant = ultimo_pal;
    } else {
        ultimo_pal->sig = nuevo;
        nuevo->ant = ultimo_pal;
        nuevo->sig = primero_pal;
        primero_pal->ant = nuevo;
        ultimo_pal = nuevo;
    }
}

void truncar_diccionario() {
    primero_pal = ultimo_pal = nullptr;
}

palabras *busca_palabra(string palabra) {
    palabras *aux = nullptr;
    palabras *actual = primero_pal;
    int n = 0;
    while (n == 0) {
        if (actual == ultimo_pal) {
            n = 1;
        }
        if (actual->palabra == palabra) {
            n = 1;
            aux = actual;
        } else {
            actual = actual->sig;
        }
    }

    return aux;
}

void cola_ficha(string c, int v) {
    fichas *nuevo = new fichas();
    nuevo->letra = c;
    nuevo->valor = v;
    if (primero_fich == nullptr) {
        primero_fich = ultimo_fich = nuevo;
    } else {
        ultimo_fich->sig = nuevo;
        ultimo_fich = nuevo;
    }
}

void ficha_aux(int p, string f, int val, int cant) {
    f_aux *nuevo = new f_aux();
    nuevo->letra = f;
    nuevo->valor = val;
    nuevo->cantidad = cant;
    nuevo->pos = p;
    if (pf == nullptr) {
        pf = uf = nuevo;
    } else {
        uf->sig = nuevo;
        uf = nuevo;
    }
}

void iniciar_fichas() {
    ficha_aux(0, "a", 1, 12);
    ficha_aux(1, "e", 1, 12);
    ficha_aux(2, "o", 1, 9);
    ficha_aux(3, "i", 1, 6);
    ficha_aux(4, "s", 1, 6);
    ficha_aux(5, "n", 1, 5);
    ficha_aux(6, "l", 1, 4);
    ficha_aux(7, "r", 1, 5);
    ficha_aux(8, "u", 1, 5);
    ficha_aux(9, "t", 1, 4);
    ficha_aux(10, "a", 2, 5);
    ficha_aux(11, "a", 2, 2);
    ficha_aux(12, "c", 3, 4);
    ficha_aux(13, "b", 3, 2);
    ficha_aux(14, "m", 3, 2);
    ficha_aux(15, "p", 3, 2);
    ficha_aux(16, "h", 4, 2);
    ficha_aux(17, "f", 4, 1);
    ficha_aux(18, "v", 4, 1);
    ficha_aux(19, "y", 4, 1);
    ficha_aux(20, "q", 5, 1);
    ficha_aux(21, "j", 8, 1);
    ficha_aux(22, "ñ", 8, 1);
    ficha_aux(23, "z", 10, 1);
}

f_aux *at_ficha_aux(int e) {
    f_aux *v = pf;

    while (v != nullptr) {
        if (v->pos == e) {

            break;
        } else {
            v = v->sig;
        }
    }
    return v;
}

void print_aux() {
    f_aux *v = pf;

    while (v != nullptr) {
        cout << v->pos << endl;
        v = v->sig;
    }
}


void poner_en_cola() {
    srand((unsigned) time(NULL));
    f_aux *s = nullptr;
    int x = 0;
    for (int i = 0; i < 120; i++) {
        x = rand() % 24;
        s = at_ficha_aux(x);
        //cout<<x<<endl;
        if (s->cantidad != 0) {
            cola_ficha(s->letra, s->valor);
            s->cantidad = s->cantidad - 1;
        }


    }
    //luego las que sobraron jaja
    int o = 0;
    for (int j = 0; j < 24; ++j) {
        s = at_ficha_aux(j);
        o = s->cantidad;
        for (int i = 0; i < o; ++i) {
            cola_ficha(s->letra, s->valor);
            s->cantidad = s->cantidad - 1;
        }
    }

}

#endif //PROY2_EDD_METHODS_H
