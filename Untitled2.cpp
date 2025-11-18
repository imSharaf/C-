#include<iostream>
using namespace std;

int main(){
	
	for (int i=1; i<=5; i++){
		
		int input;
		cout << "Give Input Number " << i <<": ";
		cin >> input;
		
		int result = input%2;
		if (result == 0){
			cout << input << " is even number" << endl;
		}
		else{
			cout << input << " is odd number" << endl;
		}
	}
	
	return 0;
}
