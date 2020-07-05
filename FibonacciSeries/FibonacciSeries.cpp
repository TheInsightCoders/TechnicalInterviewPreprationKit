#include <bits/stdc++.h> 
using namespace std; 

void printFibonacciNumbers(int n) 
{ 
	int num1 = 0, num2 = 1, i; 

	if (n < 1) 
		return; 
	
	cout<<num1<<" "<<num2<<" "; 
	
	for (i = 3; i <= n; i++) 
	{ 
		int sum = num1 + num2; 
		num1 = num2; 
		num2 = sum; 
		cout<<num2<<" "; 
	} 
} 

int main() 
{ 
	int num;
	cout<< "Enter the number: ";
	cin>> num;	
	printFibonacciNumbers(num); 
	return 0; 
} 


