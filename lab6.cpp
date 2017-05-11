#include "stdafx.h"
#include <iostream>
using namespace std;

class complex {
	double a;
	double b;

public:
	void add(double a, double b)
	{
		this->a = a;
		this->b = b;
	}


	complex() 
	{
		a = 0;
		b = 0;
	}

	void sum(complex num)
	{
		a += num.a;
		b += num.b;
	}
	
	void sub(complex num)
	{
		a -= num.a;
		b -= num.b;
	}
	void mul(int num)
	{
		a *= num;
		b *= num;
	}
	void div(int num)
	{
		if (num) {
			a /= num;
			b /= num;
		} else cout << "You can't divide by zero !" << endl;
	}
	
	void print()

	{
	cout << a << " + i*(" << b << ')' << endl;
	}
};

int main()
{
	complex num1, num2;
	
	num1.add(10, 2); num1.print();
	num2.add(4, 3);  num2.print();

	num1.sum(num2); 	num1.print();
	num1.sub(num2); 	num1.print();
	num1.mul(4); 	num1.print();
	num1.div(2); 	num1.print();
	system("pause");
}

