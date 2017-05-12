#include "stdafx.h"
#include <iostream>
using namespace std;

class complex {
	double real;
	double comp;

public:
	complex(double real, double comp)
	{
		this->real = real;
		this->comp= comp;
	}


	complex() 
	{
		real = 0;
		comp = 0;
	}

	void sum(complex num1, complex num2 )
	{
		double real1=0.0, comp1=0.0;
		cout << "sum=";
		real1 = num1.real+ num2.real;
		comp1 += num1.comp + num2.comp;
		cout << real1 << " + i*(" << comp1 << ')' << endl;
	}
	
	void sub(complex num1, complex num2 )
	{
		double real1 = 0.0, comp1 = 0.0;
		cout << "sub=";
		real1 = num1.real- num2.real ;
		comp1 = num1.comp- num2.comp;
		cout << real1 << " + i*(" << comp1 << ')' << endl;
	}
	void mul(complex num1, int x)
	{
		double real1 = 0.0, comp1 = 0.0;
		cout << "mul=";
		
		real1 = num1.real*x;
		comp1 = num1.comp*x;
		cout << real1 << " + i*(" << comp1 << ')' << endl;
	}
	void div(complex num1, int x)
	{
		double real1 = 0.0, comp1 = 0.0;
		if (x) {
			real1 = num1.real/x;
			comp1 = num1.comp/x;
			cout << "div=";
		} else cout << "You can't divide by zero !" << endl;
		cout << real1 << " + i*(" << comp1 << ')' << endl;
	}
	
	void print()

	{
	cout << real << " + i*(" << comp << ')' << endl;
	}
};

int main()
{
	int real = 10, comp = 6;
	complex num1(real, comp); num1.print();
	real = 5, comp = 4; 
	complex num2(real, comp);  num2.print();
	cout << 4 << " " << 2 << endl;
	num1.sum(num1,num2); 	
	num1.sub(num1, num2);
	num1.mul(num1, 4);
	num1.div(num1, 2);
	system("pause");
}


