#pragma once
class Fan {
private:
	int speed; //speed of fan, can be 1, 2, or 3
	bool on; //specifies if fan is on or off
	double radius; //of fan
public:
	Fan(); //no-arg constructor
	//accessor functions
	int getSpeed();
	bool getOn();
	double getRadius();
	//mutator functions
	void setSpeed(int newSpeed);
	void setOn(bool newOn);
	void setRadius(double newRadius);
	void output();
};
/*
UML DIAGRAM
Fan
-------------------------
- int speed
- bool on
- double radius
--------------------------
+ Fan()
+ int getSpeed()
+ int getOn()
+ int getRadius()
+ int setSpeed( int newSpeed )
+ int setOn( int newOn )
+ int setRadius( int newRadius )
+ void output()
--------------------------
*/