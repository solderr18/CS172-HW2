#pragma once
class MyInteger {
private:
	int value;
public:
	MyInteger(); //no-arg constructor
	const int getValue();
	int setValue(int newValue);
	const bool isEven();
	const bool isOdd();
	const bool isPrime();
	static bool isEven(int num);
	static bool isOdd(int num);
	static bool isPrime(int num);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	const bool equals(int num);
	const bool equals(const MyInteger&);
	static int parseInt(const string&);
};