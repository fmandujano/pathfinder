//
//  Boton.cpp
//  Pathfinder
//
//  Created by Máquina Voladora on 17/06/15.
//
//

#include "Boton.h"

Boton::Boton(string exto, int x, int y, int w, int h)
{
	rect = ofRectangle(x,y,w,h);
	texto = exto;
}

void Boton::Draw()
{
	ofSetColor(ofColor::cornflowerBlue);
	ofRect(rect.x,rect.y, rect.width, rect.height);
	ofSetColor(ofColor::blueViolet);
	//miFuente.drawString(texto, 210, ofGetHeight() - 10);
	ofDrawBitmapString(texto, rect.x + rect.width/2, rect.y+rect.height/2);
}

void Boton::Update()
{
	printf("boton\n");
}

BotonNodo::BotonNodo(int x, int y, int w, int h):Boton("",x,y,w,h)
{
	rect = ofRectangle(x,y,w,h);
}

void BotonNodo::Draw()
{
	ofSetColor(ofColor::cornflowerBlue);
	ofFill();
	ofRect(rect.x,rect.y, rect.width, rect.height);
	ofSetColor(ofColor::green);
	ofCircle(rect.x+rect.width/2,rect.y+rect.height/2, rect.height/3);
}

void BotonNodo::Update()
{
	printf("dato\n");
}