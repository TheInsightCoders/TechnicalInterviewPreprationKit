#include <stdio.h> 

void printFibonacciNumbers(int n) 
{ 
	int num1 = 0, num2 = 1, i; 

	if (n < 1) 
		return; 
	
	printf("%d %d ", num1, num2);
	
	for (i = 3; i <= n; i++) 
	{ 
		int sum = num1 + num2; 
		num1 = num2; 
		num2 = sum; 
		printf("%d ", num2); 
	} 
} 

int main() 
{   
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printFibonacciNumbers(num); 
	return 0; 
} 

