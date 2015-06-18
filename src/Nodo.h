//
//  Nodo.h
//  EjemploGrafos
//
//  Created by SAE Institute Mexico on 6/2/15.
//  Copyright (c) 2015 SAE Institute Mexico. All rights reserved.
//

#ifndef __EjemploGrafos__Nodo__
#define __EjemploGrafos__Nodo__

#include <stdio.h>
#include <iostream>
#include "ofMain.h"

enum ETipoNodo
{
    Trampa,
    Salud,
    Mana
};

class Nodo
{
public:
    Nodo(int index);
    virtual ~Nodo(){}
    int index;
    
    ofVec2f posicion;
    
    ETipoNodo tipo;
    
    friend std::ostream& operator<<(std::ostream& os, const Nodo& n)
    {
        os << "Nodo: " << n.index << std::endl;
        return os;
    }
};



#endif /* defined(__EjemploGrafos__Nodo__) */
