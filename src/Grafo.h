//
//  Grafo.h
//  EjemploGrafos
//
//  Created by SAE Institute Mexico on 6/2/15.
//  Copyright (c) 2015 SAE Institute Mexico. All rights reserved.
//

#ifndef __EjemploGrafos__Grafo__
#define __EjemploGrafos__Grafo__

#include <stdio.h>
#include "Nodo.h"
#include "Arista.h"
#include <vector>
#include <list>
#define INDICE_INVALIDO = -1

class Grafo
{
public:
    Grafo();
    ~Grafo();
    
    std::vector<Nodo> Nodos;
    std::vector< std::list<Arista> > Aristas;
    
    int sigIndiceNodo;
    bool esDigrafo;
    
    int AgregarNodo();
    void AgregarArista(int desde, int hacia);
};




#endif /* defined(__EjemploGrafos__Grafo__) */
