void iniciar_matriz(int dim){
    //segun las dimensiones asi se creara la matriz
    

    for (int i = 0; i < dim; i++)
    {
        fils* nuevo = new fils();
        cols* nuevo1 = new cols();
        nuevo->id=nuevo1->id=i;
        if(p_fil==nullptr){
            p_fil = u_fil = nuevo;
        }else{
            u_fil->siguiente=nuevo;
            u_fil=nuevo;
        }

        if(p_col==nullptr){
            p_col = u_col = nuevo1;
        }else{
            u_col->siguiente=nuevo1;
            u_col=nuevo1;
        }
    }
}

arbol* nuevo_arbol(string nombre){
    arbol* nuevo = new arbol();
    nuevo->nombre = nombre;
    return nuevo;
}


arbol* agregar_usuario(arbol* raiz_x,string nombre){

    if(raiz_x==nullptr){
        return (nuevo_arbol(nombre));
    }
    else if(strcmpi(nombre.c_str(),raiz_x->nombre.c_str())<0){
        raiz_x->izq=agregar_usuario(raiz_x->izq,nombre);
    }

    else if(strcmpi(nombre.c_str(),raiz_x->nombre.c_str())>0){
        raiz_x->def=agregar_usuario(raiz_x->def,nombre);
    }else{
        //no se aceptan dobles
        return raiz_x;
    }

}
