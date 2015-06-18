//
//  Boton.h
//  Pathfinder
//
//  Created by Máquina Voladora on 17/06/15.
//
//

#ifndef __Pathfinder__Boton__
#define __Pathfinder__Boton__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__Pathfinder__Boton__) */

class Boton
{
public:
	ofRectangle rect;
	string texto;
	
	Boton(string exto, int x, int y, int w, int h);
	~Boton(){}
	
	virtual void Draw();
	virtual void Update();
    
    void (Boton::*OnClick)();
    virtual void mousePressed(int x, int y, int buttom);
};

class BotonNodo : public Boton
{
public:
	BotonNodo(int x, int y, int w, int h);
	~BotonNodo(){}
	void Draw();
	//void Update();
    //void OnClick(){}
};

class BotonArista : public Boton
{
public:
    BotonArista(int x, int y, int w, int h);
    ~BotonArista(){}
    void Draw();
    //void Update();
    //void OnClick(){}
};
