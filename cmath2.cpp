#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	long double f1,f2,ang;
	cout << "Input Force 1: ";  cin >> f1;
		cout << "Input Force 2: ";  cin >> f2;
			cout << "Input angle: ";  cin >> ang;
			
	ang = ang*(3.1416/180);
	
	long double Force = sqrt(pow(f1,2) + pow(f2,2) + 2*f1*f2*cos(ang));
	
	cout << "The force is "<< Force<< "N";
	
	return 0;
}
