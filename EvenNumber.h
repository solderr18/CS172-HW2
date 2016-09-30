#pragma once
class EvenNumber {
private:
	int value;
public:
	EvenNumber(); //no-arg constructor
	EvenNumber(int num); //arg constructor
	int getValue();
	int setValue(int newValue);
	int getNext();
	int getPrevious();
	void display();
};
/*
UML DIAGRAM
EvenNumber
----------------------------
- int value
----------------------------
+ EvenNumber()
+ EvenNumber(int num)
+ int getValue()
+ int setValue(int newValue)
+ int getNext()
+ int getPrevious()
+ void display()
*/