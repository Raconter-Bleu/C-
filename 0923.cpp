#include <iostream>
//#include "0923.h"
#include <math.h>

using namespace std;

int delta_2nd_eq(float a, float b, float c)
{
	if ((b * b - 4 * a * c) >= 1e-6)
	{
		return 2;
	}
	else if(abs(b * b - 4 * a * c) <= 1e-6)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void solution_2nd_eq(float a, float b, float c)
{
	if (abs(a) > 1e-6 || abs(b) > 1e-6 || abs(c) > 1e-6)
	{
		cout << "your paras are legal, they are "
			<< a
			<< " and "
			<< b
			<< " and "
			<< c
			<< endl
			<< endl;
		if (delta_2nd_eq( a,  b,  c)==2) {
			cout << "ur delta>0, u have 2 roots, they are >> "
				<< ((-b + sqrt(b * b - 4 * a * c)) / 2 * a)
				<< " << and >> "
				<< ((-b - sqrt(b * b - 4 * a * c)) / 2 * a)
				<< " <<"
				<< endl
				<< endl;
		}
		else if (delta_2nd_eq(a, b, c) == 1) {
			cout << "ur delta=0, u have 1 root, it is >> "
				<< (-b / (2 * a))
				<< " <<"
				<< endl
				<< endl;
		}
		else {
			cout << "ur delta<0, u have no roots, desole QAQ "
				<< endl
				<< endl;

		}
	}
	else {
		cout << " parameter shall not be zero, desole QAQ "
			<< endl
			<< endl;
	}
}
void ex10_2nd_eq() {
	float a = 0;
	float b = 0;
	float c = 0;
	while (1)
	{
	cout << "enter your para in order: a b c" 
		<< endl;
		if (cin >> a && cin >> b && cin >> c)
		{
			solution_2nd_eq(a, b, c);
		}
		else 
		{
			cout << "ilegal in put" 
				<< endl
				<< endl;
			break;
		}
	}
}

int getN0(float epsl)
{
	float u = 0;
	float  upp = 0;
	int n = 1;
	
	do
	{
		u = 1 + (1 / float(n));
		n++;
		upp = 1 + (1 / float(n));
	} while (abs(upp - u) >= epsl);
	return n;
}
	while 
	(abs(upp - u) >= epsl);
	return (n-1);
}
void ex11_series(void) {

	int n = 0;
	float epsl;
	while (1) {
		cout << "input ur sequence difference epsl >> ";
		if (cin >> epsl)
		{
			n=getN0(epsl);
			
			cout << "your demande n refers to the epsl is >> "
				<< n
				<< " <<"
				<< endl
				<< endl;
		}
		else
		{
			cout << "ilegel input" << endl << endl;
			break;
		}
	}
}



float sum(int n) 
{//数列求和，如果变量在分母，必须不能等于零！！！
	//搞清除从零开始还是从1开始
	//搞清楚函数的输入变量是什么，输入是什么形参就是什么，输出变量可以用return也可以传参
	float s = 0;
		for (int i = 1; i <n; i++)
		{
			s +=  (1 / float(i));
		}
		return s;
}
void ex12_forseries(void) 
{
	int n=0;
	float s = 0;
	cout << "enter your limit n>> ";
	cin >> n;
	if (cin >> n)
	{
		s = sum(n);
		cout << "ur sum is >> " << s << " <<" << endl << endl;
	}
	else { cout << "ilegel input!" << endl << endl; }
}

int main()
{
	//try { ex03(); }
	//catch (const char* msg) {
	//	cerr << msg << endl;
	//ex04();
	//ex05();
	//ex07();
	//ex08dowhile01();
	//ex09while();
	//ex10secondorderequation;
	//ex11_series();
	//ex11_forseries();
	//ex10_2nd_eq();
	//ex11_series();
	//ex12_forseries();
	
	ex12_forseries();

	return 0;
}
