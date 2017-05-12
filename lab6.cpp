#include "stdafx.h"
#include <iostream>
using namespace std;

class complex {
	double a;
	double b;

public:
	complex(double a, double b)
	{
		this->a = a;
		this->b = b;
	}


	complex() 
	{
		a = 0;
		b = 0;
	}

	void sum(complex num1, complex num2 )
	{
		double a1=0.0, b1=0.0;
		cout << "sum=";
		a1 = num1.a+ num2.a;
		b1 += num1.b + num2.b;
		cout << a1 << " + i*(" << b1 << ')' << endl;
	}
	
	void sub(complex num1, complex num2 )
	{
		double a1 = 0.0, b1 = 0.0;
		cout << "sub=";
		a1 = num1.a- num2.a ;
		b1 = num1.b- num2.b;
		cout << a1 << " + i*(" << b1 << ')' << endl;
	}
	void mul(complex num1, int x)
	{
		double a1 = 0.0, b1 = 0.0;
		cout << "mul=";
		
		a1 = num1.a*x;
		b1 = num1.b*x;
		cout << a1 << " + i*(" << b1 << ')' << endl;
	}
	void div(complex num1, int x)
	{
		double a1 = 0.0, b1 = 0.0;
		if (x) {
			a1 = num1.a/x;
			b1 = num1.b/x;
			cout << "div=";
		} else cout << "You can't divide by zero !" << endl;
		cout << a1 << " + i*(" << b1 << ')' << endl;
	}
	
	void print()

	{
	cout << a << " + i*(" << b << ')' << endl;
	}
};

int main()
{
	int a = 10, b = 6;
	complex num1(a, b); num1.print();
	a = 5, b = 4; 
	complex num2(a, b);  num2.print();
	cout << 4 << " " << 2 << endl;
	num1.sum(num1,num2); 	
	num1.sub(num1, num2);
	num1.mul(num1, 4);
	num1.div(num1, 2);
	system("pause");
}


