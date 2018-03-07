#include <iostream>
using namespace std;

int Ones(int n);

int main(){
int n;
	cout << "Enter any number." << endl;
	cin>> n;
	cout << "There are " << Ones(n) <<" 1's in its binary form.";
	return 0;
}

int Ones(int n){

	if (n==0)
		return (0);
	else if (n==1)
		return (1);
	else
		return Ones(n/2)+Ones(n%2);
}
