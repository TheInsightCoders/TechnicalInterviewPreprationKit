class FibonacciSeries
{ 
	static void printFibonacciNumbers(int n) 
	{ 
		int num1 = 0, num2 = 1, i; 
	
		if (n < 1) 
			return; 
		
		System.out.print(num1+" "+num2+" "); 
		for (i = 3; i <= n; i++) 
		{ 			
			int sum= num1 + num2; 
			num1 = num2; 
			num2 = sum;
			System.out.print(num2+" ");  
		} 
	} 
	
	public static void main(String[] args) 
	{ 
		printFibonacciNumbers(7); 
	} 
} 
