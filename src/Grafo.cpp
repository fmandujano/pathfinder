//
//  Grafo.cpp
//  EjemploGrafos
//
//  Created by SAE Institute Mexico on 6/2/15.
//  Copyright (c) 2015 SAE Institute Mexico. All rights reserved.
//

#include "Grafo.h"

Grafo::Grafo()
{
    sigIndiceNodo = 0;
}



int Grafo::AgregarNodo()
{
    Nodo *n = new Nodo(sigIndiceNodo);
    
    Nodos.push_back(*n);
    Aristas.resize( n->index );
    sigIndiceNodo++;
    return n->index;
}

void Grafo::AgregarArista(int desde, int hacia)
{
    if(desde < 0 || desde >= sigIndiceNodo ||
       hacia < 0 || hacia >= sigIndiceNodo)
    {
        return;
    }
    
    Arista *a = new Arista(desde, hacia);
    Aristas[desde].push_back(*a);
}



