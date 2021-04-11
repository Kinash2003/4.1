//Mammals.h
#pragma once
#include <iostream>
using namespace std;
class Mammals {
	int a, b;
public:
	Mammals();
	Mammals(int a, int b);
	int getA() { return a; }
	int getB() { return b; }
	~Mammals();
	virtual double Years() = 0;
	virtual string Eyes() = 0;
	virtual string Kind() = 0;
	virtual string Íair() = 0;
	virtual double Growth() = 0;
	virtual ostream& Description(ostream& out) const = 0;
};


