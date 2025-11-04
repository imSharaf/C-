#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x;
	cout << "Enter value of x: ";
	cin >> x;
	long double out = x*(3.1416/180);
	long double y = exp(out) + sin(out) + cos(out);
	cout << "Result (y) = " << y << endl;
	
	return 0;
	
}
