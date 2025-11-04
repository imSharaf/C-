#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long double a,b;
	cout << "Input a: ";  cin >> a;
	cout << "Input b: ";  cin >> b;                 
	
	long double solve = sqrt(pow(a,2) + pow(b,2)) + log(abs(a-b)+1) + sin(a);
	
	cout << solve;
	
	
	return 0;
}
