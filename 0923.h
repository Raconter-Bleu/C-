#include <iostream>

using namespace std;
//void ex01()
//{
//
//	int n1;
//	int n2;
//	cout << "plz enter number n1:";
//	cin >> n1;
//	cout << "plz enter number n2:";
//	cin >> n2;
//	cout << uppercase
//		<< "octal \t decimal\t hexadex-digits\n"
//		<< oct << n1 << "        \t"
//		<< dec << n1 << "        \t"
//		<< hex << n1 << endl;
//	cout << uppercase
//		<< "octal \t decimal\t hexadex-digits\n"
//		<< oct << n2 << "        \t"
//		<< dec << n2 << "        \t"
//		<< hex << n2 << endl;
//}
//void ex02()
//{
//	int n1;
//	int n2;
//	int s;
//	std::cout << "plz enter number n1:";
//	cin >> n1;
//	cout << "plz enter number n2:";
//	cin >> n2;
//	s = n1 + n2;
//	cout << "n1+n2=" << s << endl;
//
//}
//void ex03()
//{
//	
//	double n1;
//	double s;
//	double c;
//	
//		cout << "plz enter number n1:";
//		cin >> n1;
//		if (!(n1 >= 0 && n1 <= 9)) {
//			throw"not a number!";
//		}
//		else {
//
//			s = n1 * n1 * pi;
//			c = 2 * n1 * pi;
//			cout << "square=" << s << endl
//				<< "perimeter=" << c << endl;
//		}
//	
//}
//void ex04() {
//	const double KM_per_MILE = 1.609;
//	double miles,
//		kms;
//	cout << "enter how many miles:";
//	cin >> miles;
//
//
//	if(!(cin >> miles)) { //cin输入错误时执行下边语句
//		cin.clear(); //清除流标记
//		cin.sync();  //清空流
//		cout << "not a number!" << endl; //打印错误提示
//	}
//	//if (isdigit(miles)) {
//	else {
//		kms = KM_per_MILE * miles;
//		cout << "the distance in km is " << kms << endl;
//	}
////	}
////	else {
////cout << "not a number!" << endl;
////}
//}
//void ex05()
//{
//	int a = 5;
//	int b = 9;
//	float s = 0;
//	
//	
// s = (float)b /(float)a;
//	
//	cout << "resualt is:" << s << endl
//		<< "pi is " << (int)pi << endl;
//
//}
//void ex06() {
//	auto a = 1;
//	bool b = 0;
//	int c = 3;
//	if (a > b&&c>a) {
//		cout << "Oh a>b" << endl
//			;
//	}
//	else if(a<b && c>b){ cout << "Oh b<a" << endl; }
//	else {  }
//
//		
//
//}
//void ex07() {
//	int n =0
//		,s = 0;
//	cout << "enter calcule limit:";
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		s += i;
//	}
//	cout << "resualt is:" << s;
//}
//
//void ex08dowhile01() {
//	int i=0, n,s=0;
//	
//	cout << "\nenter your limit";
//	cin >> n;
//		do
//		{
//			s += i;
//			i++;
//		} while (i < (n + 1));
//		cout << "\nresult is >> "<<s<<" <<" << endl;
//}
//
//void ex09while() {
//	int x, count = 0;
//	float sum = 0.0;
//	
//	cout << "enter num >> ";
//	while (cin >> x) {
//		sum += x;
//		count++;
//	
//	}
//	cout << "average is >> " << sum / float (count) << " <<" << endl;
//
//}
//
//void ex10secondorderequation() {
//	float a = 0; 
//	float b = 0; 
//	float c = 0;
//	
//
//	while (1) 
//	{
//		cout << "enter your para in order: a b c" << endl;
//	
//		if (cin >> a && cin >> b && cin >> c)
//		{
//			
//			if (abs(a) > 1e-6 || abs(b) > 1e-6 || abs(c) > 1e-6)
//			{
//				cout << "your paras are legal, they are "
//					<< a
//					<< " and "
//					<< b
//					<< " and "
//					<< c
//					<< endl
//					<< endl;
//				if (abs(b * b - 4 * a * c) >= 1e-6) {
//					cout << "ur delta>0, u have 2 roots, they are >> "
//						<< ((-b + sqrt(b * b - 4 * a * c)) / 2 * a)
//						<< " << and >> "
//						<< ((-b - sqrt(b * b - 4 * a * c)) / 2 * a)
//						<< " <<"
//						<< endl
//						<< endl;
//				}
//				else if (abs(b * b - 4 * a * c) <= 1e-6) {
//
//					cout << "ur delta=0, u have 1 root, it is >> "
//						<< (-b / (2 * a))
//						<< " <<"
//						<< endl
//						<< endl;
//				}
//				else {
//					cout << "ur delta<0, u have no roots, desole QAQ "
//						<< endl
//						<< endl;
//
//				}
//			}
//			else {
//				cout << "ur entered zero parameter, desole QAQ " 
//					<< endl
//					<< endl;
//			      }
//		}
//		else {
//			cout << "ilegal in put" << endl
//				<< endl;
//			break;
//		}
//		
//
//
//	}
//}
void ex07() {
	int n =0
		,s = 0;
	cout << "enter calcule limit:";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	cout << "resualt is:" << s;
}

void ex08dowhile01() {
	int i=0, n,s=0;
	
	cout << "\nenter your limit";
	cin >> n;
		do
		{
			s += i;
			i++;
		} while (i < (n + 1));
		cout << "\nresult is >> "<<s<<" <<" << endl;
}

void ex09while() {
	int x, count = 0;
	float sum = 0.0;
	
	cout << "enter num >> ";
	while (cin >> x) {
		sum += x;
		count++;
	
	}
	cout << "average is >> " << sum / float (count) << " <<" << endl;

}

void ex10secondorderequation() {
	float a = 0; 
	float b = 0; 
	float c = 0;
	

	while (1) 
	{
		cout << "enter your para in order: a b c" << endl;
	
		if (cin >> a && cin >> b && cin >> c)
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
				if (abs(b * b - 4 * a * c) >= 1e-6) {
					cout << "ur delta>0, u have 2 roots, they are >> "
						<< ((-b + sqrt(b * b - 4 * a * c)) / 2 * a)
						<< " << and >> "
						<< ((-b - sqrt(b * b - 4 * a * c)) / 2 * a)
						<< " <<"
						<< endl
						<< endl;
				}
				else if (abs(b * b - 4 * a * c) <= 1e-6) {

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
				cout << "ur entered zero parameter, desole QAQ " 
					<< endl
					<< endl;
			      }
		}
		else {
			cout << "ilegal in put" << endl
				<< endl;
			break;
		}
		


	}
}

