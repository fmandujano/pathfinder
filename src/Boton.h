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
};

class BotonNodo : public Boton
{
public:
	BotonNodo(int x, int y, int w, int h);
	~BotonNodo(){}
	void Draw();
	void Update();
};
