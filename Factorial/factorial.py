def fact(n): 
	if n == 0: 
		return 1

	return n * fact(n-1) 

num = int(input("Enter the number: ")); 
print("Factorial of", num, "is ", fact(num)) 

