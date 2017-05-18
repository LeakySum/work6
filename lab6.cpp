#include "stdafx.h"
#include <conio.h>
#include <iostream>
using namespace std;

class complex {
	double real;
	double comp;

public:
	complex(double real, double comp)
	{
		this->real = real;
		this->comp = comp;
	}


	complex()
	{
		real = 0;
		comp = 0;
	}

	void print(ostream&)
	{
		cout << real << " + i*(" << comp << ')' << endl;
	}

	friend ostream& operator << (ostream&, const complex&);

	complex sum(complex num1, complex num2)
	{
		complex res(0.0, 0.0);
		cout << "sum  " ;
		res.real = num1.real + num2.real;
		res.comp = num1.comp + num2.comp;
		return res;
	}

	complex sub(complex num1, complex num2)
	{
		complex res(0.0, 0.0);
		cout << "sub  ";
		res.real = num1.real - num2.real;
		res.comp = num1.comp - num2.comp;
		return res;
	}
	complex mul(complex num, int x)
	{
		complex res(0.0, 0.0);
		cout << "mul  ";
		res.real = num.real*x;
		res.comp = num.comp*x;
		return res;
	}
	complex div(complex num, int x)
	{
		complex res(0.0, 0.0);
		if (x) {
			res.real = num.real / x;
			res.comp = num.comp / x;
			cout << "div  ";
		}
		else cout << "You can't divide by zero !" << endl;
		return res;
	}
};

ostream & operator<<(ostream & out, complex &numb)

{
	numb.print(out);
	return out;
}

int main()
{
	complex res(0.0, 0.0);
	complex num1(10, 3); cout << num1;
	complex num2(5, 4);  cout << num2;
	cout << 4 << " " << 2 << endl;

	res = num1.sum(num1, num2); cout << res;
	res = num1.sub(num1, num2); cout << res;
	res = num1.mul(num1, 4); cout << res;
	res = num1.div(num1, 2); cout << res;
	system("pause");
}


