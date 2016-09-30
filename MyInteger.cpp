#include "MyInteger.h"
#include <iostream>
#include <string>
using namespace std;

MyInteger::MyInteger(); //no-arg constructor
const int MyInteger::getValue() { return value; }
int MyInteger::setValue(int newValue)
{
	value = newValue;
}
const bool MyInteger::isEven()
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}
const bool MyInteger::isOdd()
{
	if (value % 2 == 1)
		return true;
	else
		return false;
}
const bool MyInteger::isPrime();
static bool MyInteger::isEven(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}
static bool MyInteger::isOdd(int num)
{
	if (num % 2 == 1)
		return true;
	else
		return false;
}
static bool MyInteger::isPrime(int num);
static bool MyInteger::isEven(const MyInteger&)
{
	MyInteger a;
	if (a.getValue()% 2 == 0)
		return true;
	else
		return false;
}
static bool MyInteger::isOdd(const MyInteger&)
{
	MyInteger a;
	if (a.getValue() % 2 == 1)
		return true;
	else
		return false;
}
const bool MyInteger::equals(int num);
const bool MyInteger::equals(const MyInteger&);
static int MyInteger::parseInt(const string&);