#include "ofApp.h"

void clicknodo()
{
    printf("nodo?");
}

//--------------------------------------------------------------
void ofApp::setup()
{
	
    miFuente.loadFont(OF_TTF_MONO, 24);
    estado = Editor;
	
	botonBFS = new Boton("BFS", 10,ofGetHeight() - 50 , 80,40);
	botonDFS = new Boton("DFS", 100,ofGetHeight() - 50 , 80,40);
	botonAstar = new Boton("A *", 190,ofGetHeight() - 50 , 80,40);
	botonNodo = new BotonNodo(5,5,50,50);
    botonArista = new BotonArista(5, 60, 50,50);
	
	botones.push_back(botonBFS);
	botones.push_back(botonDFS);
	botones.push_back(botonAstar);
	botones.push_back(botonNodo);
    botones.push_back(botonArista);
    
    botonNodo->OnClick = &
    
}



//--------------------------------------------------------------
void ofApp::update()
{
    if(estado == Editor)
    {
        updateEditor();
    }
    else if(estado == Simulacion)
    {
        updateSimulacion();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    if(estado == Editor)
    {
        drawEditor();
    }
    else if(estado == Simulacion)
    {
        drawSimulacion();
    }
}

void ofApp::drawEditor()
{
	ofDrawBitmapString("Editor de grafo de navegacion", ofGetWidth(), 10);
	for( std::vector<Boton*>::iterator it = botones.begin(); it!=botones.end(); it++)
	{
		(*it)->Draw();
	}

    
    
}

void ofApp::drawSimulacion()
{
    
}

void ofApp::updateEditor()
{
    for( std::vector<Boton*>::iterator it = botones.begin(); it!=botones.end(); it++)
    {
        (*it)->Update();
    }
}

void ofApp::updateSimulacion()
{
    
}






//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
    for( std::vector<Boton*>::iterator it = botones.begin(); it!=botones.end(); it++)
    {
        (*it)->mousePressed(x,y,button);
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
