//
// Created by ccten on 21/03/2020.
//

#ifndef PROY2_EDD_CLASSES_H
#define PROY2_EDD_CLASSES_H
using namespace std;


class palabras {
public:
    string palabra;
    palabras *sig;
    palabras *ant;
} *primero_pal, *ultimo_pal;

class fichas {
public:
    string letra;
    int valor;
    fichas *sig;
} *primero_fich, *ultimo_fich;

class f_aux {
public:
    int pos;
    string letra;
    int valor;
    int cantidad;
    f_aux *sig;
} *pf, *uf;


class t_general {
public:
    string nombre;
    int punteo;
    t_general *sig;
} *pri_tege, *ult_tege;

class nodo {
public:
    nodo *siguiente;
    nodo *anterior;
    nodo *arriba;
    nodo *abajo;
    int x;
    int y;
    char c;
    int val;
};


class cols {
public:
    int id;
    cols *siguiente;

    class nodo *abajo;
} *p_col, *u_col;

class fils {
public:
    int id;
    fils *siguiente;

    class nodo *derecha;
} *p_fil, *u_fil;

class self_puntos {
    int puntos;
    self_puntos *siguiente;
};

class arbol {
public:
    string nombre;
    arbol *def;
    arbol *izq;

    //def de punteros a otras clases
    class self_puntos *p_puntos;

    class self_puntos *u_puntos;
} *raiz;

#endif //PROY2_EDD_CLASSES_H
