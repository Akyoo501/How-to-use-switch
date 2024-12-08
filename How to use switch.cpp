#include <iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter Your Marks: ";
	cin>>marks;
	
	switch(marks){
		case 75 ... 100:
		cout<<"You got Grade 'A' ";
		break;
		
		case 65 ... 74:
		cout<<"You got Grade 'B' ";
		break;
		
		case 45 ... 64:
		cout<<"You got Grade 'C' ";
		break;
		
		case 30 ... 44:
		cout<<"You got Grade 'D' ";
		break;
		
		default:
		cout<<"You got Grade 'F' ";
			
			
	}
	return 0;
}
