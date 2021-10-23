#include <iostream>
//#include "0923.h"
//#include <math.h>
//#include <algorithm>
using namespace std;

int delta_2nd_eq(float a, float b, float c)
{
	if ((b * b - 4 * a * c) >= 1e-6)
	{
		return 2;
	}
	else if (abs(b * b - 4 * a * c) <= 1e-6)
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
	if (abs(a) != 1e-6 || abs(b) != 1e-6 || abs(c) != 1e-6)
	{
		cout << "your paras are legal, they are "
			<< a
			<< " and "
			<< b
			<< " and "
			<< c
			<< endl
			<< endl;
		if (delta_2nd_eq(a, b, c) == 2) {
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
	}

	while
		(abs(upp - u) >= epsl);
	return (n - 1);
}

void ex11_series(void) {

	int n = 0;
	float epsl;
	while (1) {
		cout << "input ur sequence difference epsl >> ";
		if (cin >> epsl)
		{
			n = getN0(epsl);

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
	for (int i = 1; i < n; i++)
	{
		s += (1 / float(i));
	}
	return s;
}

void ex12_forseries(void)
{
	int n = 0;
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

void ex02doubxle_array_1007()
{
	int a[4][4];
	for (auto i = 0; i < 4; i++)
		for (auto j = 0; j < 4; j++)
		{
			a[i][j] = 2 + rand() % 10;
			cout << a[i][j] << endl;
		}

	auto av = 0;
	for (auto i = 0; i < 4; i++)
		for (auto j = 0; j < 4; j++)
		{
			av += a[i][j] = 2 + rand() % 10;
		}
	av = av / (4.0 * 4 * 4);
	cout << "average= " << av << endl;
	int n = sizeof(a) / sizeof(a[0][0]);

	auto imax = a[0][0];
	for (auto i = 0; i < 4; i++)
		for (auto j = 0; j < 4; j++)
		{
			if (imax <= a[i][j])
				imax = a[i][j];
		}
	cout << imax << endl;

}

void sort_bubo(int arr[])
{
	int i, j;
	int temp;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (auto i = 0; i < len - 1; i++)
	{
		for (auto j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	for (auto k = 0; k < len; k++)
	{
		cout << arr[k] << endl;
	}

}

void ex03_1007()
{
	int a[6] = { 2,3,4,0,-1,2 };
	sort_bubo(a);
	//sort(a, a + 6);

}

void ex04_1007()
{
	int i1[3][3], i2[3][3], o[3][3];
	for (auto& a : i1)
		for (auto& b : a)
		{
			b = 2 + rand() % 15;
		}
	for (auto& a : i2)
		for (auto& b : a)
		{
			b = -2 + rand() % 15;
		}
	for (auto i = 0; i < 3; i++)
		for (auto j = 0; j < 3; j++)
		{
			o[i][j] = i1[i][j] + i2[i][j];

			cout << o[i][j] << " " << endl;
		}

}

float dotproduct(float a1[], float a2[], int n)
{
	const int L = sizeof a1;
	float a3[L];
	if (cin >> n)
	{
		for (auto i = 0; i < n; i++)
		{
			a1[i]=2.11+ ( rand() % 15)*1.11;
			a2[i] = (rand() % 10) * 1.21;
			a3[i] = a1[i] + a2[i];
		}
		return 0;

	}
}

void quare_find()
{
	int i, j, k;
	for (int i = 0; i < 10000; i++)
		for (int j = 0; j <= 100; j++)
			for (int k = 0; k <= 100; k++)
				if (i - 100 == j * j && i - 168 == k * k)
				{
					cout << i << endl;
				}
}

void times_table()
{
	int i = 0;
	int j = 0;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)

			cout << i << "X" << j << "=" << i * j;
		cout << endl;

	}


}

void chess()
{
	int i = 0;
	int j = 0;
	for (j = 0; j < 8; j++)
	{
		if (j % 2 == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << "□■";

			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				cout << "■□";
			}
			cout << endl;
		}

	}
}

void stair_prt()
{
	int i;
	int j;
	for (auto i = 0; i < 10; i++)
	{
		for (auto j = 0; j < 10 - i; j++)
		{
			cout << "  ";
		}
		for (auto j = 0; j < i; j++)
		{
			cout << "■";
		}

		cout << endl;
	}
}

int fib(int n)  //斐波那契数列
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}

void fib_lapin()
{
	int n = 0;
	cout << "input your month" << endl;
	if (cin >> n)
	{
		cout << 2 * fib(n + 1) << endl;
	}
}

void judge_prime_method01(int l1, int l2)
{
	//int arr[100] = {};
	//int k = 0;
	int count = 0;
	int j=2;
	int i=l1;
	for (int i = l1; i <=l2; i++)
	{
		bool flag = true;
		for (int j = 2; j*j <= i; j++)  // i 可能被比自己大的一个数整除吗？？显然不可能。。。。
		{
			if (i% j ==0)
			{
				//cout << "one of them is " <<i<< endl;
				flag = false;
				break;
			}
		}
	if(flag)
	   {
		count++;
		cout << " " << i << " ";
		if(count%5==0)
		  {
			cout << endl;
		  }
		}
	}
}

void judge_prime()
{
	int l1 = 0; 
	int  l2 = 0;
	cout << "input lower lim l1 and upper lim l2 " << endl;
	cin >> l1 >> l2;
	judge_prime_method01(l1, l2);

}

int get_hundred(int i)
{
	int a = (i % 100) % 10;
	return a;
}

int get_tens(int i)
{
	int a =i/10-10*(i/100);
	return a;
}

int get_sgl(int i)
{
	int a = i/100;
	return a;
}

void narcissus(int l1,int l2)
{ 
	int count = 0;
	for (int i = l1; i < l2; i++)
	{
		if (get_hundred(i) * get_hundred(i) * get_hundred(i) + get_sgl(i) * get_sgl(i) * get_sgl(i) + get_tens(i) * get_tens(i) * get_tens(i) == i)
		{
			count++;
			cout << " " << i << " ";
			if (count % 5 == 0)
			{
				cout << endl;
			}
		}
	}
}

void prt_narcissus()
{
	int l1 = 0;
	int l2 = 0;
	cout << "plz input l1 l2" << endl;
	if (cin >> l1 >> l2)
	{
		if (l1 > l2)
		{
			int temp = 0;
			temp=l1;
			l1 = l2;
			l2 = temp;
		}
		narcissus(l1, l2);
	
	}
}

void gcd0()
{
	int x = 0;
	cout << "plz input n : ";
	if (cin >> x)
	{
		int i = 1;
		cout << x << '=';
		for (int i = 1; i <x; i++)
		{
			if (x % i == 0 )
			{
				cout << i << '*';
			}
			
		}
		if (i = x)
		{
			cout << x << " END" << endl;
		}

	}


}

void evalue_grades()
{
	int grade = 0;
	
	cout << "plz input grades: " << endl;
	if (cin >> grade)
	{
		switch (grade / 10)
		{
		case 10:
			case 9:
			 cout<<"A";
			break;
		case 8:
		case 7:
		case 6:
			cout << "B";
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
			cout << "D";
			break;
		default: 
			cout << "wrong!" << endl;
		}
	}

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
	//ex12_forseries();
	//ex01_1007();
	//ex02double_array_1007();
	//ex03_1007();
	//ex04_1007();
	//quare_find();
   //stair_prt();
	//fib_lapin();
  //judge_prime();
//prt_narcissus();
	 //gcd0();
	evalue_grades();
}
