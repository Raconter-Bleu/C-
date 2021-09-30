#include <iostream>
#include "0923.h"
#include <math.h>

using namespace std;

int getN0(float epsl)
{
	float u = 0;
	float  upp = 0;
	int n = 0;
	do {
		u = 1 + (1 / float(n));
		n++;
		upp = 1 + (1 / float(n));
	} while (abs(upp - u) >= epsl);
	return n;
}

void ex11_series(void) {
	float u = 0;
	float  upp = 0;
	int n = 0;
	float epsl;
	while (1) {
		cout << "input ur sequence difference epsl >> ";
		if (cin >> epsl)
		{
			getN0(n);
			cout << "your demande n refers to the epsl is >> "
				<< n
				<< " <<"
				<< endl
				<< endl;
		}
		else
		{
			cout << "ilegel input" << endl << endl;
		}
	}
}



float sum(int n) 
{
	float s = 0;
		for (auto i = 0; i <=n; i++)
		{
			s +=  (1 / float(n));
		}
		return s;
}

void ex11_forseries(void) 
{
	int n;
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
	ex11_forseries();

	return 0;
}
