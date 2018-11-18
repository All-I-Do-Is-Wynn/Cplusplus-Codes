#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <cstring>
using namespace std;



template <typename T> 
	T addition(T x, T y){
	T sum;
	cin>> x;
	cin>> y;	
	T z=x+y;
	return sum;
	}

//Prototypes
void display();
// "1"
void help();
// "2"
void fundamental();
void displayFund();
void Aaddition();
void Baddition();
void Caddition();
void Asubtraction();
void Bsubtraction();
void Csubtraction();
void Amultiplication();
void Bmultiplication();
void Cmultiplication();
void Adivision();
void Bdivision();
void Cdivision();
void Exponential();
// "3"
void integrate();
void displayIntegrate();
void indefinite();
void definite();
void singleTermIndef();
void singleTermDef();


//Main
int main(){
	int sCase;
	do{
		system("cls");
		display();
		cout << "\nPick an option" << endl;
		cin>> sCase;
		switch (sCase){
			case 0:
				cout << "Exiting Program" << endl;
				break;
			case 1:
				help();
				system("pause");
				break;
			case 2:
				fundamental();
				break;
			case 3:
				integrate();
				break;
			case 4:
				cout << "4" << endl;
				break;
			case 5:
				cout << "5" << endl;
				break;
			case 6:
				cout << "6" << endl;
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(sCase!=0);
	
	return 0;
}

//called from "main"
void display(){
	cout << "Calculator\n---------------" << endl;
	cout << "Select your problem type" << endl;
	cout << "(1) Full List of Operations" << endl;
	cout << "(2) Fundamental " << endl;
	cout << "(3) Integration" << endl;
	cout << "(4) Derivation" << endl;
	cout << "(5) Probability/Statistics" << endl;
	cout << "(6) Linear Algebra" << endl;
	cout << "(0) Exit" << endl;
	}

//called from "display"
void help(){
	system("cls");
	cout << "Calculator\n---------------" << endl;
	cout << "Full List of Operations" << endl;
	cout << "(1) Full List of Operations" << endl;
	cout << "\n(2) Fundamental" << endl;
	cout << "   -Addition\n   -Subtraction\n   -Multiplication\n   -Division\n   -Degree" << endl;
	cout << "\n(3) Integration" << endl;
	cout << "   -General Powers (single term)\n   -Logarithms\n   -Exponential (e)\n   -Trigonometry\n   -Inverse Trigonometry\n   -Integration by Parts" << endl;
	cout << "\n(4) Derivation   " << endl;
	cout << "\n(5) Probability/Statistics" << endl;
	cout << "   -Events\n   -Probability Mass\n   -Permutations\n   -Combinations\n   -Probability of Intersection\n   -Total Probability\n   -Bayes Theorem" << endl;
	cout << "   -Cumulative Distribution\n   -Mean\n   -Variance\n   -Standard Deviation\n   -Discrete Uniform Distribution\n   -Bernoulli Trials\n   -Poisson Distribution" << endl;
	cout << "   -Probability Density\n   -Normal Distribution\n   -Exponential Distribution\n   -Cumulative Distribution" << endl;
	cout << "\n(6) Linear Algebra\n   -Matrices" << endl;
	cout << "\n(0) Exit\n   -Leave the program" << endl;
	cout << "\nThe list will stay up as long as you need. ";
}

//FUNDAMENTAL START
void fundamental(){
	int fund;
	do{
		system("cls");
		displayFund();
		cout << "\nPick an option" << endl;
		cin>> fund;
		switch (fund){
			case 0:
				cout << "Returning to home screen." << endl;
				Sleep(3000);
				break;
			case 1:
				Aaddition();
				break;
			case 2:
				Asubtraction();
				break;
			case 3:
				Amultiplication();
				break;
			case 4:
				cout << "Not ready yet, select a different option."<< endl;//Adivision();
				Sleep(4000);
				fundamental();
				break;
			case 5:
				Exponential();
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(fund!=0);				
}	

//called from "fundamental"
void displayFund(){
	cout << "Fundamentals\n---------------" << endl;
	cout << "Select your problem type" << endl;
	cout << "(1) Addition" << endl;
	cout << "(2) Subtraction " << endl;
	cout << "(3) Multiplication" << endl;
	cout << "(4) Division (Working on it)" << endl;
	cout << "(5) Exponential " << endl;
	cout << "(0) Back to home screen\n" << endl;
}

//called from "fundamental"
void Aaddition(){
	int addCase;
	do{
		system("cls");
		cout << "Pick an option" << endl;
		cout << "(1) Integers" << endl;
		cout << "(2) Double" << endl;
		cout << "(0) Back to Fundamentals\n" << endl;
		
		cin>> addCase;
		switch (addCase){
			case 0:
				break;
			case 1:
				Baddition();
				system("pause");
				break;
			case 2:
				Caddition();
				system("pause");
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(addCase!=0);
}	

//called from Aaddition (1)
void Baddition(){
	int size,total=0;
	cout << "How many inputs do you have. ";
	cin >> size;
	int *array = new int[size];
	for(int i=0;i<size;i++){
		cout << "Enter an input." << endl;
		cin >> array[i];
	}
	cout << "The sum of ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
	int *p = array;
	for (int i=0;i<size;i++,p++){
		total+= *p;
	}
	cout << " is " << total << endl;
	delete [] array;
	cout << "\nTo go back. ";
}	

//called from Aaddition (2)
void Caddition(){
	int size;
	double total=0;
	cout << "How many inputs do you have. ";
	cin >> size;
	double *array = new double[size];
	for(int i=0;i<size;i++){
		cout << "Enter an input." << endl;
		cin >> array[i];
	}
	cout << "The sum of ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
	double *p = array;
	for (int i=0;i<size;i++,p++){
		total+= *p;
	}
	cout << " is " << total << endl;
	delete [] array;
	cout << "\nTo go back. ";
}	
	
//called from "fundamental"
void Asubtraction(){
	int addCase;
	do{
		system("cls");
		cout << "Pick an option" << endl;
		cout << "(1) Integers" << endl;
		cout << "(2) Double" << endl;
		cout << "(0) Back to Fundamentals\n" << endl;
		
		cin>> addCase;
		switch (addCase){
			case 0:
				break;
			case 1:
				Bsubtraction();
				system("pause");
				break;
			case 2:
				Csubtraction();
				system("pause");
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(addCase!=0);
}	

//called from Asubtraction (1)
void Bsubtraction(){
	int size,start,end;
	cout << "How many inputs do you have. ";
	cin >> size;
	int *array = new int[size];
	cout << "Enter the starting number: ";
	cin >> array[0];
	for(int i=1;i<size;i++){
		cout << "Enter an number to subtract." << endl;
		cin >> array[i];
	}
	cout << "The difference of ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
		int *p = array;
		start = array[0];
		for(int i=0;i<size;i++,p++){
		start-=*p;
		}
	cout << " is " << array[0]+start << endl;
	delete [] array;
	cout << "\nTo go back. ";
}	

//called from ASubtraction (2)
void Csubtraction(){
	int size;
	double start=0;
	cout << "How many inputs do you have. ";
	cin >> size;
	double *array = new double[size];
	cout << "Enter the starting number: ";
	cin >> array[0];
	for(int i=1;i<size;i++){
		cout << "Enter an number to subtract." << endl;
		cin >> array[i];
	}
	cout << "The difference of ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
		double *p = array;
		start = array[0];
		for(int i=0;i<size;i++,p++){
		start-=*p;
		}
	cout << " is " << array[0]+start << endl;
	delete [] array;
	cout << "\nTo go back. ";
}	
	
//called from "fundamental"
void Amultiplication(){
	int addCase;
	do{
		system("cls");
		cout << "Pick an option" << endl;
		cout << "(1) Integers" << endl;
		cout << "(2) Double" << endl;
		cout << "(0) Back to Fundamentals\n" << endl;
		
		cin>> addCase;
		switch (addCase){
			case 0:
				break;
			case 1:
				Bmultiplication();
				system("pause");
				break;
			case 2:
				Cmultiplication();
				system("pause");
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(addCase!=0);
}	

//called from Amultiplication (1)
void Bmultiplication(){
	int size,total=1;
	cout << "How many inputs do you have. ";
	cin >> size;
	int *array = new int[size];
	for(int i=0;i<size;i++){
		cout << "Enter an input." << endl;
		cin >> array[i];
	}
	cout << "The answer is ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
	int *p = array;
	for (int i=0;i<size;i++,p++){
		total*= *p;
	}
	cout << " is " << total << endl;
	delete [] array;
	cout << "\nTo go back. ";
}	

//called from Amultiplication (2)
void Cmultiplication(){
	int size;
	double total=1;
	cout << "How many inputs do you have. ";
	cin >> size;
	double *array = new double[size];
	for(int i=0;i<size;i++){
		cout << "Enter an input." << endl;
		cin >> array[i];
	}
	cout << "The answer is ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
	double *p = array;
	for (int i=0;i<size;i++,p++){
		total*= *p;
	}
	cout << " is " << total << endl;
	delete [] array;
	cout << "\nTo go back. ";
}

/*
//called from "fundamental"
void Adivision(){
	int addCase;
	do{
		system("cls");
		cout << "Pick an option" << endl;
		cout << "(1) Integers" << endl;
		cout << "(2) Double" << endl;
		cout << "(0) Back to Fundamentals\n" << endl;
		
		cin>> addCase;
		switch (addCase){
			case 0:
				break;
			case 1:
				Bdivision();
				system("pause");
				break;
			case 2:
				Cdivision();
				system("pause");
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(addCase!=0);
}	

//called from Adivision (1)
void Bdivision(){
	int size,total=1;
	cout << "How many inputs do you have. ";
	cin >> size;
	int *array = new int[size];
	for(int i=0;i<size;i++){
		cout << "Enter an input." << endl;
		cin >> array[i];
	}
	cout << "The answer is ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
	int *p = array;
	for (int i=0;i<size;i++,p++){
		total%= *p;
	}
	cout << " is " << total << endl;
	delete [] array;
	cout << "\nTo go back. ";
}	

//called from Adivision (2)
void Cdivision(){
	int size;
	double total=1;
	cout << "How many inputs do you have. ";
	cin >> size;
	double *array = new double[size];
	for(int i=0;i<size;i++){
		cout << "Enter an input." << endl;
		cin >> array[i];
	}
	cout << "The answer is ";
	for (int i=0;i<size;i++){
		cout << "|" << array[i] << "|"; 
	}
	double *p = array;
	for (int i=0;i<size;i++,p++){
		total%= *p;
	}
	cout << " is " << total << endl;
	delete [] array;
	cout << "\nTo go back. ";
}
*/

void Exponential(){
	system("cls");
	double base, exp, ans;
	cout << "Enter the base number: ";
	cin >> base;
	cout << "Enter the exponent." << endl;
	cin >> exp;
	ans= pow(base,exp);
	cout << "The answer is " << ans << endl << "\nTo go back. ";
	system("pause");
}
//FUNDAMENTAL END

//INTEGRATION START
void integrate(){
	int fund;
	do{
		system("cls");
		displayIntegrate();
		cout << "\nPick an option" << endl;
		cin>> fund;
		switch (fund){
			case 0:
				cout << "Returning to home screen." << endl;
				Sleep(3000);
				break;
			case 1:
				indefinite();
				break;
			case 2:
				//definite();
				break;
			case 3:
				Amultiplication();
				break;
			case 4:
				cout << "Not ready yet, select a different option."<< endl;//Adivision();
				Sleep(4000);
				fundamental();
				break;
			case 5:
				Exponential();
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(fund!=0);
}

void displayIntegrate(){
	cout << "Integration\n---------------" << endl;
	cout << "Select your problem type" << endl;
	cout << "(1) Indefinite Integral" << endl;
	cout << "(2) Definite Integral " << endl;
	cout << "(3) Area" << endl;
	cout << "(4) (Nothing Yet)" << endl;
	cout << "(5) (Nothing Yet)" << endl;
	cout << "(0) Back to home screen\n" << endl;
}

void indefinite(){
	cout << "Indefinite\n---------------" << endl;
	cout << "(1) Single Term" << endl;
	cout << "(2) Multiple Terms " << endl;
	cout << "(3) Area" << endl;
	cout << "(4) (Nothing Yet)" << endl;
	cout << "(5) (Nothing Yet)" << endl;
	cout << "(0) Back to home screen\n" << endl;
}

//called from "integrate"
void Aaddition(){
	int addCase;
	do{
		system("cls");
		cout << "Pick an option" << endl;
		cout << "(1) Integers" << endl;
		cout << "(2) Double" << endl;
		cout << "(0) Back to Fundamentals\n" << endl;
		
		cin>> addCase;
		switch (addCase){
			case 0:
				break;
			case 1:
				singleTermIndef();
				system("pause");
				break;
			case 2:
				multiTermIndef();
				system("pause");
				break;
			default:
				cout << "That was not an option. Returning to home screen.";
				Sleep(3000);				
	}}while(addCase!=0);
}	
	
void singleTermIndef(){
	system("cls");
	double base,nBase,exp,nExp;
	cout << "Enter the number preceding the variable: ";
	cin >> base;
	cout << "Enter the exponent: ";cin >> exp;
	nExp = exp +1;
	nBase = base/nExp;
	cout << "The integral of " << base << "x" << exp << " is (" << nBase <<")x^" << nExp << "\n\nTo go back. ";
	system("pause");
}
	
void singleTermDef(){
	system("cls");
	//bounds
	double lowB,upB,base,nBase,exp,nExp;
	cout << "Enter the lower bound: ";cin >> lowB; 
	cout << "Enter the upper bound: ";cin >> upB;
	cout << "Enter the number preceding the variable: ";
	cin >> base;
	cout << "Enter the exponent: ";cin >> exp;
	nExp = exp +1;
	nBase = base/nExp;
	
	cout << "The integral of " << base << "x" << exp << " is (" << nBase <<")x^" << nExp << "\n\nTo go back. ";
	system("pause");
}
	
	
	
	
	
	
	
	
	
	
	
	
	











































