//
// Created by ccten on 21/03/2020.
//

#ifndef PROY2_EDD_REPORTS_H
#define PROY2_EDD_REPORTS_H

void imprime_matriz_gv() {

}


void preOrder(arbol *root) {
    if (root != NULL) {
        preOrder(root->izq);
        cout << root->nombre << " ";
        preOrder(root->def);
    }
}

void reporte_arbol() {

    preOrder(raiz);
}

#endif //PROY2_EDD_REPORTS_H
