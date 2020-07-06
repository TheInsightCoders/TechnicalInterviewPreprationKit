#include <stdio.h> 

int fact(int n) 
{ 
	if (n == 0) 
		return 1; 
	return n * fact(n - 1); 
} 

int main() 
{ 
	int num;
	printf("Enter the number: ");
	scanf("%d",&num); 
	printf("Factorial of %d is %d", num, fact(num)); 
	return 0; 
} 

