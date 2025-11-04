#include<iostream>
using namespace std;

int main(){
	
	float ball;
	char condition[] = "Condition: ";
	char placement[] = "Placement: ";
	
	cout << "Ball position on the pitch: ";
	cin >> ball;
	
	if(ball <= 50){
		cout<< condition << "Ball in Short Length"<<endl;
		if(ball <= 30){
			cout << placement << "Ball is dead";
		}
		else{
			cout << placement << "Balled";
		}
	} 
	else if(ball <= 80){
		cout <<condition<< "Ball in Good Length"<<endl;
		if(ball <=70){
			cout << placement << "Playable";
		}
		else{
			cout << placement << "Not Playable";
		}
	}
	else{
		cout<<condition << "Yorker"<<endl;
		if(ball <= 90){
			cout << placement << "Full Yorker";
		}
		else{
			cout << placement << "Full Toss";
		}
	}
	
	cout << "\n\nClose for new input.";
			
	return 0;
}
