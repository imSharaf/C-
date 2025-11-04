#include<iostream>
using namespace std;
int main(){
	
	int m = 57;
	const float n = 9.7758;  // structure --> specifier(const)+type(float)+name(n)+initializer(=9.7758)
	
	float out = m+n;
	
	cout<<"Output = "<<out;
	
	return 0;
}

/*
variable --> represents a storage location in RAM
information in variable --> value of variable
= --> assignment operator --> specify the value of variable
the type of variable must be declared
*/

