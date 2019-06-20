#pragma once
#include <math.h>
#include <iostream>
class complex
{
public:
	float x, y;
	complex(float a, float b);
	complex(float a);
	complex();
	double modul();
	complex operator+(complex z);
	friend complex operator+(float a, complex z);
	friend complex operator+(complex z, float a);
	complex operator-(complex z);
	friend complex operator-(complex z, float a);
	friend complex operator-(float a, complex z);
	complex operator*(complex z);
	friend complex operator*(complex z, float a);
	friend complex operator*(float a, complex z);
	complex operator/(complex z);
	friend complex operator/(complex z, float a);
	friend complex operator/(float a, complex z);
	complex operator^(int n);
	void afis();
};
