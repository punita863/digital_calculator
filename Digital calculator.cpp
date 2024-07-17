#include<iostream>
#include<cmath> //for advanced math functions
#include<limits> //for numeric limits

using namespace std;

void showMenu(){
	cout<<"Digital Calculator"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Square Root"<<endl;
	cout<<"6.Exponentiation"<<endl;
	cout<<"7.Trigonometry"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"Enter your choice: ";
}

double getNumber(){
	double num;
	while(true){
		cin>>num;
		if(cin.fail()){
			cin.clear();//clear the error flag
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"Invalid input. Please enter a number: ";
		}
		else
		{
		break;
		}
			
		}
		return num;
	}
	
	void addition(){
		cout<<"Enter first number: "<<endl;
		double a=getNumber();
		cout<<"Enter second number: "<<endl;
		double b=getNumber();
		cout<<"Result: "<<a+b<<endl;
	}
	void subtraction(){
		cout<<"Enter first number: "<<endl;
		double a=getNumber();
		cout<<"Enter second number: "<<endl;
		double b=getNumber();
		cout<<"Result: "<<a-b<<endl;
	}
	void multiplication(){
		cout<<"Enter first number: "<<endl;
		double a=getNumber();
		cout<<"Enter second number: "<<endl;
		double b=getNumber();
		cout<<"Result: "<<a*b<<endl;
	}
	void division(){
		cout<<"Enter first number: "<<endl;
		double a=getNumber();
		cout<<"Enter second number: "<<endl;
		double b;
		while(true){
			b=getNumber();
			if(b==0){
				cout<<"Division by zero is not allowed. Please enter a non-zero number: ";
			}else{
				break;
			}
		}
		cout<<"Result: "<<a/b<<endl;
	
}
void squareRoot(){
	cout<<"Enter a number: ";
	double a=getNumber();
	if(a<0){
		cout<<"Cannot calculate square root of a negative number."<<endl;
	}else{
		cout<<"Result: "<<sqrt(a)<<endl;
	}
}
void exponentiation(){
	cout<<"Enter the base: ";
	double base=getNumber();
	cout<<"Enter the exponent: ";
	double exp=getNumber();
	cout<<"Result: "<<pow(base,exp)<<endl;
}
void trigonometry(){
	cout<<"Trigonometry Functions"<<endl;
	cout<<"1.Sine"<<endl;
	cout<<"2.Cosine"<<endl;
	cout<<"3.Tangent"<<endl;
	cout<<"Enter your choice: ";
	int choice;
	cin>>choice;
	
	cout<<"Enter angle in degrees: ";
	double angle=getNumber();
	double radians=angle*M_PI/180.0;
	
	switch(choice){
		case 1:
			cout<<"Result: "<<sin(radians)<<endl;
			break;
		case 2:
			cout<<"Result: "<<cos(radians)<<endl;
			break;
		case 3:
			cout<<"Result: "<<tan(radians)<<endl;
			break;
		default:
			cout<<"Invalid choice."<<endl;
			break;
	}
	
	
}
int main(){
	while(true){
		showMenu();
		int choice;
		cin>>choice;
		
		switch(choice){
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5:
				squareRoot();
				break;
			case 6:
				exponentiation();
				break;
			case 7:
				trigonometry();
				break;
			case 0:
				cout<<"Exiting the calculator.Goodbye!"<<endl;
				return 0;
			default:
				cout<<"Invalid choice. Please try again."<<endl;
				break;
		}
		cout<<endl;
	}
}
