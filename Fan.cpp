#include "Fan.h"
#include <iostream>
#include <string>
using namespace std;

Fan::Fan() { //no-arg constructor
	speed = 1;
	on = false;
	radius = 5;
}
//accessor functions
int Fan::getSpeed() { return speed; }
bool Fan::getOn() { return on; }
double Fan::getRadius() { return radius; }
//mutator functions
void Fan::setSpeed(int newSpeed) {
	//check speed is allowed
	if (newSpeed == 1 || newSpeed == 2 || newSpeed == 3)
		speed = newSpeed;}
void Fan::setOn(bool newOn) {
	on = newOn;
}
void Fan::setRadius(double newRadius) {
	radius = newRadius;
}
void Fan::output(){
	cout << "Fan has a speed " << getSpeed() << " with a radius " << getRadius() << " and is ";
	if (getOn() == true)
		cout << "on.\n";
	else
		cout << "off.\n";
}