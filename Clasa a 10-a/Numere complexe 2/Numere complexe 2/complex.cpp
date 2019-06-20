#include "stdafx.h"
#include "complex.h"

complex::complex(float a, float b)
{
	x = a; y = b;
}
complex::complex(float a)
{
	x = a; y = 0;
}
complex::complex() {}

double complex::modul()
{
	return  sqrt(x * x + y * y);
}

complex complex::operator+(complex z)
{
	complex t;
	t.x = x + z.x;
	t.y = y + z.y;
	return t;
}
complex operator+(complex z, float a)
{
	z.x = z.x + a;
	return z;
}
complex operator+(float a, complex z)
{
	z.x = z.x + a;
	return z;
}

complex complex::operator-(complex z)
{
	complex t;
	t.x = x - z.x;
	t.y = y - z.y;
	return t;
}
complex operator-(complex z, float a)
{
	z.x = z.x - a;
	return z;
}
complex operator-(float a, complex z)
{
	z.x = a - z.x;
	z.y = -1 * z.y;
	return z;
}

complex complex::operator*(complex z)
{
	complex t;
	t.x = x * z.x - y * z.y;
	t.y = x * z.y + z.x*y;
	return t;
}
complex operator*(complex z, float a)
{
	z.x = z.x * a;
	z.y = z.y * a;
	return z;
}
complex operator*(float a, complex z)
{
	z.x = z.x * a;
	z.y = z.y * a;
	return z;
}

complex complex::operator/(complex z)
{
	complex t;
	t.x = (x * z.x + y * z.y) / (z.x * z.x + z.y * z.y);
	t.y = (z.x * y - x * z.y) / (z.x * z.x + z.y * z.y);
	return t;
}
complex operator/(complex z, float a)
{
	z.x = z.x / 4;
	z.y = z.y / 4;
	return z;
}
complex operator/(float a, complex z)
{
	z.x = (a * z.x) / (z.x * z.x + z.y * z.y);
	z.y = (0 - a * z.y) / (z.x * z.x + z.y * z.y);
	return z;
}

complex complex::operator^(int n)
{
	complex z(x, y);
	complex h = z;
	for (int i = 1; i < n; i++)
	{
		h = h * z;
	}
	if (n > 0) return h;
	else if (n < 0) {
		complex a(1, 0);
		return a / h;
	}
	else return 1;
}

void complex::afis()
{
	std::cout << x << " * i + " << y;
}

