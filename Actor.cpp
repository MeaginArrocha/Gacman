#include "Actor.h"

Actor::Actor(int x, int y, Maze * m, CConsole * c){
	X = x; 
	Y = y;
	maze = m;
	console = c;
}

Actor::~Actor(){

}

void Actor::resetDirection(){}
void Actor::move(){}
char Actor::getDisplayChar(){return 'a';}

int Actor::getX() const{
	return X;
}

int Actor::getY() const{
	return Y;
}

void Actor::setX(int newX){
	X = newX;
}

void Actor::setY(int newY){
	Y = newY;
}

Color Actor::getForeColor(){

	return blue;
}

Color Actor::getBackColor(){
	return blue;
}