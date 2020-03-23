//
// Created by ccten on 21/03/2020.
//

#ifndef PROY2_EDD_CLASSES_H
#define PROY2_EDD_CLASSES_H
using namespace std;
class arbol{
public:
    string nombre;
    arbol* def;
    arbol* izq;
}*raiz;

class palabras{
public:
    string palabra;
    palabras* sig;
    palabras* ant;
}*primero_pal, *ultimo_pal;

class fichas{
public:
    string letra;
    int valor;
    fichas* sig;
}*primero_fich, *ultimo_fich;

class f_aux{
public:
    int pos;
    string letra;
    int valor;
    int cantidad;
    f_aux* sig;
}*pf, *uf;



class t_general{
public:
    string nombre;
    int punteo;
    t_general* sig;
}*pri_tege,*ult_tege;

class nodo{
public:
    nodo* siguiente;
    nodo* anterior;
    nodo* arriba;
    nodo* abajo;
    int x;
    int y;
    char c;
    int val;
};



class cols{
public:
    int id;
    cols* siguiente;
    class nodo* abajo;
}*p_col, *u_col;

class fils{
public:
    int id;
    fils* siguiente;
    class nodo* derecha;
}*p_fil,*u_fil;

#endif //PROY2_EDD_CLASSES_H
