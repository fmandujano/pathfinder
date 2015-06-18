//
//  Arista.h
//  EjemploGrafos
//
//  Created by SAE Institute Mexico on 6/2/15.
//  Copyright (c) 2015 SAE Institute Mexico. All rights reserved.
//

#ifndef __EjemploGrafos__Arista__
#define __EjemploGrafos__Arista__

#include <stdio.h>
#include <iostream>

class Arista
{
public:
    
    Arista(int inicio, int fin);
    ~Arista(){}
    
    int NodoInicio;
    int NodoFin;
    float Costo;
    
    friend std::ostream& operator<<(std::ostream& os, const Arista& e)
    {
        os << "Arista desde " << e.NodoInicio << " a " << e.NodoFin
        << " Costo: " << e.Costo << std::endl;
        return os;
    }
    
};


#endif /* defined(__EjemploGrafos__Arista__) */
