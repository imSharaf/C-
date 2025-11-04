#include<iostream>
using namespace std;

int main(){
	
	int marks;
	cout << "Enter your marks: ";
	cin >> marks;
	
	if(marks >= 80){
		cout << "Ha ha Golden Golden." << endl;
	}
	else if(marks >= 70){
		cout << "Paser barir chele o vat khai tui o vat khas." << endl;
	}
	else if(marks >= 60){
		if(marks <=65){
			cout << "Tui amar sathe saradin dokane bosbi." << endl;
		}
		else{
			cout << "Tui amar sathe sokale dokane bosbi." << endl;
		}
	}
	else if(marks >= 50){
		cout << "Tore ekta rickshaw kinna dei. Income kor. Ami ar tore khawamo na." << endl;
	}
	else{
		cout << "Tui baicha thakis na. Chad theke laaf dei moira za. " << endl;
	}
	
	cout << "\nLaora Parenting...";		
	return 0;
}
