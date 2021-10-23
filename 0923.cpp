#include <iostream>
#include <string>
#include<sstream>
#include <bitset>
#include <vector>
//#include "0923.h"
#include <math.h>
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

void find_factor0()
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

void real_gcd_lcm() 
{
	int gcd = 0;
	int lcm = 0;
	int a = 0;
	int b = 0;

	cout << "input a and b : " << endl;
	if (cin >> a >> b)
	{
		if (a > b)
		{
			int temp = 0;
			temp = a;
			a = b;
			b = temp;
		}
		
		for (auto i = 2; i < a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				gcd = i;
				break;
			}
		}
		for (auto i = a; i < a*b; i++)
		{
			if (i % a == 0 && i % b == 0)
			{
				lcm = i;
				break;
			}
		}
		cout << "gcd = " << gcd << endl;
		cout << "lcm = " << lcm << endl;
	}

}

void analyse_string()
{
	string a;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "plz input ur string: " << endl;
	if (getline(cin,a))
	{
		int length = a.length();
		for (auto i = 0;i <length; i++)
		{
			
			if (a.at(i)==' ')
			{
				spaces++;
			
			}
			else if ((a.at(i)>='1'&&a.at(i)<='9')||a.at(i)=='0')
			{
				digits++;
				
			}
			else if ((a.at(i) >= 'a' && a.at(i) <= 'z') || (a.at(i) >'A' && a.at(i) < 'Z'))
			{
			letters++;
			
			}
			else 
			{
				others++;
		
			}
		}
		cout << "letters = " << letters << endl;
		cout << "spaces = " << spaces << endl;
		cout << "digits = " << digits << endl;
		cout << "others = " << others << endl;
	}

}

void sigma_peirodicnum()
{
	int lgth = 0, digit = 0, E=1,result=0;
	cout << "input ur length and digit: " << endl;
	cin >> lgth>>digit; 
	result = digit;
	for (auto i = 1; i < lgth; i++)
	{
		E = 10 * E;
		result = result + E * digit;
	}
	cout << "result is: " << result << endl;
}

void find_perfectnum()
{
	for (auto i = 0; i < 1001; i++)
	{
		int temp = 0;
		for (auto j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				temp = temp + j;
			}
		}

		if (i == temp||i==1)
		{
			cout << i << " is perfect " << endl;
		}
	}
	
}

void  falling_computing()
{
	float h = 100.0;
	float sum = 0;
	for (auto i = 0; i < 10; i++)
	{
		sum += h / 2;
		h = h / 2;
	}
	cout << sum << endl;
	cout << h << endl;
}

void count_peach()
{
	int n = 1;
	for (auto i = 0; i < 9; i++)
	{
		n = (1 + n) * 2;
	}
	cout << n  ;
}

void creat_racelist()
{
	char a=0, b=0, c=0;
	for (auto j = 'x'; j <= 'z'; j++)
	{
		if (j != c && j != a)
		{
			b = j;
		}
		for (auto i = 'x'; i <= 'z'; i++)
		{
			if (i != c &&i!='x')
			{
				a = i;
			}
			for (auto k = 'x'; k <= 'z'; k++)
			{
				if (i != 'x' && i != 'z')
				{
					c = k;
				}
			}
		}
	}
	cout << "c verses " << c << endl;
	cout << "a verses " << a << endl;
	cout << "b verses " << b << endl;
}

void prt_diamond()
{
	for (auto i = 0; i < 11; i++)
	{
		cout << endl;
		if (i < 5)
		{
			for (auto j = 0; j < 5 - i; j++)
			{
				cout << " ";
			}
			for (auto j = 0; j <= i; j++)
			{
				cout << "**";
			}
			for (auto j = 0; j < 5 - i; j++)
			{
				cout << " ";
			}
		}
		else if (i == 5)
		{
			for (auto j = 0; j < 6; j++)
			{
				cout << "**";
			}
		}
		else
		{
			for (auto j = 0; j < i - 5; j++)
			{
				cout << " ";
			}
			for (auto j = 0; j <= 10 - i; j++)
			{
				cout << "**";
			}
			for (auto j = 0; j < i - 5; j++)
			{
				cout << " ";
			}
		}

	}
}

void sequence_divid()
{
	float sum = 0.5;
	int F01 = 3;
	int F02 = 2;
	
	for (auto i = 0; i < 19; i++)
	{
		int temp = 0;
		sum = sum + F01 / F02;
		temp = F02;
		F02 = F01;
		F01 = F01 + temp;
	}
	cout << sum;
}

void sequence_factorial()
{
	int sum = 0;
	for (auto i = 1; i <= 3; i++)
	{
		int temp = 1;
		for (auto j = 1; j <=i; j++)
		{
			temp = temp * j;
		}
		sum = sum + temp;
	}
	cout << sum;
}

void factorial_reverse_string()
{
	string s = "hello,world!"; ;
	cout << s << endl;
	int count = 0;
     count = s.length();
		for (auto i = 0; i < count/2; i++)
		{
			char c = s.at(i);
			s.at(i) = s[count - i - 1];
			s[count - i - 1] = c;
		}

		cout << s;
}

void compute_age()
{
	int a=10;
	for (auto i = 0; i < 5; i++)
	{
		a += 2;
	}
	cout << a;
}

string into_str( int i)
{
	std::ostringstream stream;
	stream << i;
	return stream.str();
}

void count_int_and_reverse()
{
	int a = 0;
	int count = 0;
	cout << "input : " << endl;
	cin >> a;
	string s;
	//s=to_string(a);
	s = into_str(a);

	count = s.length();
	for (auto i = 0; i < count/2; i++)
	{
		char c = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = c;
	}
	cout << count << endl << s;
}

void judge_returnnum()
{
	int a = 0;
	string s;
	int count = 0;
	cout << "input: " << endl;
	cin >>a;
	s = to_string(a);
	count = s.length();
	bool flag = 0;
	for (auto i = 0; i < count/2; i++)
	{   
		if(s[i]==s[count-i-1])
			{
			 flag =1;
				cout << "ooo" << endl;
			}
	}
	if (flag == 1)
	{
		cout << "yes";
	}
}

void judge_weekday()
{
	string d;
	
	cout << "input weekday : " << endl;
	
	if (getline(cin, d))
	{
		if (d.at(0) == 'S' || d.at(0) == 's')
		{
			if (d.at(1) == 'a')
			{
				cout <<"6" << endl;
			}
			else if (d.at(1) == 'u')
			{
				cout << "7" << endl;
			}
		}
		else if (d.at(0) == 'T' || d.at(0) == 't')
		{
			if (d.at(1) == 'u')
			{
				cout << "2" << endl;
			}
			else if (d.at(1) == 'h')
			{
				cout << "4" << endl;
			}
		}
		else
		{
		switch (d.at(0))
		{
		case 'm':
		case 'M':
			cout << "1" << endl;
			break;
		case 'w':
		case 'W':
			cout << "3" << endl;
			break;
		case 'F':
		case 'f':
			cout << "5" << endl;
			break;
		}
		}
	}
}

void delete_char()
{
	string s;
	char a;
	cout << "input string and the char u want to delete : " << endl;
	getline(cin, s);
	if (cin >> a)
	{
		for (auto i = 0; i < s.length(); i++)
		{
			if (s[i] == a)
			{
				for (auto j = i; j < s.length() - 1; j++)
				{
					s[j] = s[j + 1];
					s[s.length() - 1] = ' ';
				}
			}
		}
		cout << "result is " << s;
	}

}

void reorder_string()
{
	string s("www.baidu.com");
	int n = 3;
	string temp("      ");//临时变量太关键了，一定要初始化到跟输入的string一个长度！！！

	for (auto i = 0; i < n; i++)
	{
		temp[i] = s[i];
		s[i] = s[s.size() - (n - i)];
		s[s.size() - (n - i)] = temp[i];
	}
	cout << s;

}

void judge_prime_100()
{
	int count = 0;
	for (auto i = 1; i < 101; i++)
	{
		bool flag = 1;
		for (auto j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			cout << i << " ";
			count++;
		}
		if (count % 5 == 0)
		{
			cout << endl;
		}
	}
}

void set_method_shell()
{
	int a[10] = { 1,7,2,8,3,9,4,6,5,0 };
	int n = sizeof(a) /sizeof( a[0]);
	for(int gap = n/2;gap>0;gap=gap/2)
	{
		for (int i = gap; i < n; ++i)
		{
			int j = i;
			while (j-gap>=0&& a[j - gap] > a[j])//使用while循环的一个特点
			{//gap等于1的时候，每发现一次逆序，就会从逆序整顿后的前一个数开始重新跑一遍，相当于重新查到赃物，就再过一次安检
				//swap variable
				a[j - gap] = a[j - gap] + a[j];
				a[j] = a[j - gap] - a[j];
				a[j - gap] = a[j - gap] - a[j];
				j = j - gap;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

}

void matrix_calcule()
{
	int sum = 0;
	int a[3][3] = {};
cout << "input matrix member :" << endl;
for (auto i=0; i < 3; i++)
	for (auto j = 0; j < 3; j++)
{
		cin >> a[i][j];
}
for (auto i = 0; i < 3; i++)
	{
	sum += a[i][i];
	}
cout << sum;




	

}

void arr_cutin_num()
{
	int a[6] = {1,2,3,4,5};
   int n = sizeof(a) / sizeof(a[0]);
   int n2 = 0;
   int c = 0;
   cout << "input ur num and position u want tu insert: " << endl;
   cin >> c>>n2;
   for (auto i =n-1; i >n2-1; i--)
   {
	   a[i ] = a[i-1];
   }
   a[n2-1] = c;
   for (auto i = 0; i < n; i++)
   {
	   cout <<a[i];
   }
}

void reverse_arr()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto i = 0; i < 5; i++)
	{
		int temp = a[i];
		a[i] = a[9 - i];
		a[9 - i] = temp;
	}
	for (auto i = 0; i < 10; i++)
	{
		cout << a[i];
	}
}

void learn_static()
{
	int i = 0;
	static int static_j = 0;
	cout << i << endl;
	cout << static_j << endl;
	cout << "++i=" << ++i << endl;
	cout << "++sj" << ++static_j << endl;
	cout << "i++" << i++ << endl;
	cout <<  "j++" << static_j++ << endl;
	for (auto i = 0; i < 3; static_j++,i++)
	{
		cout << "i=" << i << endl;
		cout << "static_j=" << static_j << endl;
		cout << "j++" << static_j++ << endl;
		cout << "++sj" << ++static_j << endl;
	}
	
}

void another_staticuse()
{
	int num = 2;
	for (auto  i = 0; i < 3; ++i)
	{
		cout << "outer num=" << num << endl;
		num++;
		{
			static int num = 1;
			cout << "inner num: " << num << endl;
			num++;
		}
	}
	cout << "inner num: " << num << endl;
	

}

void bitwise_and()
{
	int a = 077;
	int b = a & 3;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b &= 7;
	cout << "after b=" << b << endl;
}

void bitwise_or()
{
	int a = 077;
	int b = a | 3;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b |= 7;
	cout << "after b=" << b << endl;
}
 
void bitwise_exclusive_or()
{
	int a = 77;
	int b = a ^ 3;
	cout << "a=" << a << endl;
cout << "bin:a=" << bitset<sizeof(unsigned int) * 8>(a) << endl;
cout << "bin:3=" << bitset<sizeof(unsigned int) * 8>(3) << endl;
	cout << "b=" << b << endl;
	cout << "bin:b=" << bitset<sizeof(unsigned int) * 8>(b) << endl;\
		cout << "bin:3=" << bitset<sizeof(unsigned int) * 8>(7) << endl;
	b ^= 7;
	cout << "after b=" << b << endl;
	cout << "after bin:b=" << bitset<sizeof(unsigned int) * 8>(b) << endl;
}

void bitwise_shift()
{
	unsigned a, b, c, d;
	a = 0b1;
	b = a <<4;
	c = ~(~0 << 4);
	d = b & c;
	cout << "b=" << b << endl;
	cout << "c=" <<c << endl;
	cout << "d=" <<d << endl;




}

void draw_a_circle()
{
	int r = 10, px = 11, py = 11;
	
	for (int y = r; y >=(-r); y--)
	{
		for (int x = -r; x <= (-r); x++)
		{
			if ((long)(x * x + y * y) == (long)r * r)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}

void draw_a_circle02()
{
	int x, y, r;
	r = 20;
	int para1 = 2;
	int para2 = 5;
	for (y = 0; y < r; y++) 
{
		x = -(int)sqrt(2 * y * r - y * y) + r;
		for (int i = 0; i < para1 * x; i++)
		{
			cout << " ";
		}

	    for (int i = ((int)sqrt(2 * y * r - y * y) + r - x) * para1+7; i >= 0; i--) //para2
	   {
		cout << "*" ;
	    }
cout <<  endl;
}

	for (; y >= 0; y--)
	{
		x = -(int)sqrt(2 * y * r - y * y) + r;
		for (int i = 0; i < para1 * x; i++)
		{
			cout << " ";
		}
		cout << "*";
		for (int i = ((int)sqrt(2 * y * r - y * y) + r - x) * para1 + para2; i >= 0; i--)
			cout << (i % 2 == 0 ? "*" : i % 3 == 0 ? "*" : "*");
		cout << "*" << endl;
	}
}

void Yanghui_triangle()
{
	int a[10][10] = { 0 };

	for (auto i = 0; i < 10; i++)
	{
		a[i][0] = 1;
	}

	for (auto i = 1; i < 10; i++)
	for (auto j = 1; j <= i; j++)
	{
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}

	for (auto i = 0; i < 10; i++)
	{
		for (auto j = 0; j < 10; j++)
		{
			cout << " " << a[i][j];
		}
		cout << endl;
	}
}

void draw_oval()
{
	{
		int x, y, r;
		r = 20;
		float para1 =2.5;
		int para2 = 5;
		for (y = 0; y < r; y++)
		{
			x = -(int)sqrt(2 * y * r - y * y) + r;
			for (int i = 0; i < para1 * x; i++)
			{
				cout << " ";
			}

			for (int i = ((int)sqrt(2 * y * r - y * y) + r - x) * para1 + 7; i >= 0; i--) //para2
			{
				cout << "*";
			}
			cout << endl;
		}

		for (; y >= 0; y--)
		{
			x = -(int)sqrt(2 * y * r - y * y) + r;
			for (int i = 0; i < para1 * x; i++)
			{
				cout << " ";
			}

			for (int i = ((int)sqrt(2 * y * r - y * y) + r - x) * para1 + 7; i >= 0; i--) //para2
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}

void conpare_01()
{
	int a, b, c;
	cout << "input ur a b c :" << endl;
	cin >> a >> b >> c;
	for (auto i = 0; i < 3; i++)
	{
		if (a < b)
		{
			a = a + b;
			b = a - b;
			a = a - b;
		}
		if (b < c)
		{
			b = b + c;
			c = b - c;
			b = b - c;
		}
		if (a < c)
		{
			a = a + c;
			c = a - c;
			a = a - c;
		}
	}
	
	cout << a << " "
		<< b << " "
		<< c << " ";
}

void change_arrmembers()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto i = 0; i < 10; i++)
	{
		cout << " " << a[i];
	}
	cout << endl;
	for (auto i = 0; i < 10; i++)
	{
		for (auto j = 0; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
		
	}
	for (auto i = 0; i < 10; i++)
	{
		cout << " " << a[i];
	}
}

void ex_multi_dimension_arr(float a1[100][100], float a2[100][100], float a3[100][100], int n1, int p1, int n2, int p2)
{ //a3=matrix: n X k
	cout << "input n1  p1=n2  p2 :   (n,p<100)" << endl;
	cin >> n1 >> p1 >> p2;
	n2 = p1;
	for (auto i = 0; i < n1; i++)
	{
		for (auto j = 0; j < p1; j++)
		{
			a1[i][j] = 3*(rand() / double(RAND_MAX));
			cout << " a" << i << "" << j << " = " << a1[i][j];
		}
		cout << endl;
	}
	for (auto i = 0; i < n2; i++)
	{
		for (auto j = 0; j < p2; j++)
		{
			a2[i][j] = 3 * (rand() / double(RAND_MAX));
			cout << " b" << i << "" << j << " = " << a2[i][j];
		}
		cout << endl;
	}
	
	//caculus
	for (auto i = 0; i < n1; i++)
	{
		for (auto j = 0; j < p2; j++)
		{
			//for matrix a1
			float sum = 0;
			for (auto k = 0; k < p1; k++)
			{
				sum += a1[i][k] * a2[k][j];
			}
			a3[i][j] = sum;
			cout << " c" << i << "" << j << " = " << a3[i][j];
		}
		cout << endl;
	}
}

void ex_matrix_001()
{
	float A[100][100] = {0};
	float B[100][100] = {0};
	float C[100][100] = { 0 }; 
	int n1=0;
	int p1=0;
	int n2=0;
	int p2=0;
	ex_multi_dimension_arr(A, B, C, n1, p1, n2, p2);
}

void shift_num()
{
	vector<int> v1;
	vector<int> v2;
	int n=0;
	int m=0;
	cout << "input n  m  " << endl;
	cin >> n>>m;


	for (int i = 0; i < n; i++)  
	{ 
		
		v1.push_back(i+1);
		cout << v1.at(i)<<" ";
	}
	cout << endl;

	for (int i = 0; i < m; i++)
	{
		v2.push_back (v1.at(n - m + i ));
	}
	v1.insert(v1.begin(), v2.begin(), v2.end());
	v1.erase(v1.begin() + n, v1.end());

	vector<int>::iterator ii;
	for ( ii = v1.begin(); ii !=v1.end(); ii++)
	{
		cout << *ii << " ";
	}

	

}

void circle_num_wrong_understanding()
{
	int n = 0;
	
	vector<int> v;
	vector<bool> count;
	cout << "input n : " << endl;
	cin >> n;
	int m = n;
	for (int i = 0; i <n ; ++i)
	{
		v.push_back(i + 1);
		count.push_back(1);
	}
	do 
	{
		int cc = 0;
		for (int i = 0; i < m; i++)
		{
			if (v[i] % 3 == 0)
			{
				v.erase(v.begin() + i);
				cc++;
			}
		}
		m-=cc;
	} 
	while (m > 1);



	
}

void  circle_correction()
{
	int n = 0;
	vector<int> v;
	vector<bool> bin;
	cout << "input n : " << endl;
	cin >> n;
	int m = 0;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		v.push_back(i + 1);
		bin.push_back(1);
	}

	do
	{
		for (auto i = 0; i < n; i++)
		{
			if (bin[i] != 0)
			{
				k++;
			}
			if (k == 3)
			{
				k = 0;
				bin[i] = 0;
				m++;
			}
		}
	} while (m < (n - 1));

		for (auto i = 0; i < n; i++)
		{
			if (bin[i] != 0)
			{
				cout << v[i] << " ";
			}
		}
}

typedef struct
{
	string name;
	bool sex;
	int age;
}Student;
void input(Student* stu);
void output(Student* stu);
void input(Student* stu)
{
	for (auto i = 0; i < 2; i++)
	{
	   getline(cin, stu[i].name);
		cin >> stu[i].sex>> stu[i].age;
	}
	cout << "input complete" << endl;
}
void output(Student* stu)
{
	cout << endl;
	for (auto i = 0; i < 2; i++)
	{
		cout <<stu[i].name << stu[i].sex << stu[i].age;
		cout << endl;
	}
	cout << "output complete" << endl;
}

void ex_struct_01()
{
	Student  stu[2];
	cout << "input info:" << endl;
	input(stu);
	cout << "their info: " << endl;
	output(stu);
	
}

void weight_load()
{
	int num = 0;
	vector<int> load1 = { 1,2,3,5,10,20 };
	vector<int> num_load = { 2,1,2,1,1,1 };
	vector<int> series_load ;
	
	for (int i = 0; i < load1.size(); i++)
	{
		for (int m = 0; m < num_load[i]; m++)
		{
			series_load.push_back(load1[i]);
		}
	}
	cout << "series_load = " << " ";
	for (int i = 0; i < series_load.size(); i++)
	{
		cout << series_load.at(i) << " ";
	}
	cout << endl;
	cout << "series_size = " << series_load.size()<<endl;
	vector<vector <int> >V;
	vector<int>tmp(4);
	V.resize(5, tmp);
		for (int j = 0; j < 1001; j++)
		{
			tmp.push_back(0);
		}
		for (auto i = 0; i < series_load.size(); i++)
		{
			V.push_back(tmp);
		}
		
		//V.resize(series_load.size(),tmp);
	
	for (int i = 0; i < series_load.size(); i++)V[i][0] = 1;
	for (int i = 0; i < series_load.size(); i++)
	{
		for (int j = 1; j < 1001; j++)
		{
			if (j - series_load[i] > 0)
			{
				V[i][j] = V[i - 1][j] || V[i - 1][j - series_load[i]];
			}
			else
			{
				V[i][j] = V[i - 1][j];
			}
		}
	}
	
	int count1 = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (V[series_load.size()][i] == 1)
		{
			count1++;
		}
	}
	cout << "result = " << count1;
}

void ex_point01()
{
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	// 16 sizeof(数组名)，数组名表示整个数组，大小为4*4=16个字节
	printf("%d\n", sizeof(a + 0));
	//4/8 此时数组名表示首元素地址，a+0首元素地址+0仍表示首元素地址，地址大小为4/8个字节
	printf("%d\n", sizeof(*a));
	// 4  此时数组名表示首元素地址,*a表示首元素，为int类型，大小为4个字节
	printf("%d\n", sizeof(a + 1));
	//4/8 此时数组名表示首元素地址，a+1 首元素地址+1表示第二个元素地址，地址大小为4/8个字节
	printf("%d\n", sizeof(a[1]));
	//4 此时数组名表示首元素地址 a[1]表示第二个元素，为int类型，大小为4个字节
	printf("%d\n", sizeof(&a));
	//4/8 &数组名表示取出数组的地址，地址大小为4/8个字节
	printf("%d\n", sizeof(*&a));
	//16 &a是取出数组地址，*&a是对数组地址解引用，得到是数组，sizeof(数组)计算数组大小--16
	printf("%d\n", sizeof(&a + 1));
	//4/8 &a是取出数组地址,&a+1表示跳过整个数组，指向整个数组后面的地址，地址大小为4/8个字节
	printf("%d\n", sizeof(&a[0]));
	//4/8 &a[0]表示取出第一个元素的地址，地址大小为4/8个字节
	printf("%d\n", sizeof(&a[0] + 1));
	//4/8 &a[0]表示取出第一个元素的地址，&a[0] + 1表示第二个元素的地址，地址大小为4/8个字节
}

void ex_point02()
{
	const char* p = "abcdef";
	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;
	cout << &p[0] << endl;
   cout << &p[1] << endl;
}

	int main(void)
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
		//evalue_grades();
	//real_gcd_lcm();
		//analyse_string();
		//sigma_peirodicnum();
		//find_perfectnum();
		//falling_computing();
		//count_peach();
		//prt_diamond();
		//test1();
		//sequence_divid();
		//sequence_factorial();
	//factorial_reverse_string();
		//compute_age();
		//count_int_and_reverse();
		//judge_returnnum();
		//judge_weekday();
		//delete_char();
		//reorder_string();
		//judge_prime_100();
		//set_method_shell();
		//matrix_calcule();
		//arr_cutin_num();
		//reverse_arr();
		//learn_static();
		//another_staticuse();
		//bitwise_exclusive_or();
		//bitwise_shift();
		//draw_a_circle02();
		//Yanghui_triangle();
		//draw_oval();
		//conpare_01();
		//change_arrmembers();
		//ex_matrix_001();
		//shift_num();
		//circle_correction();
		//ex_struct_01();
		//weight_load();
		ex_point02();
	}



