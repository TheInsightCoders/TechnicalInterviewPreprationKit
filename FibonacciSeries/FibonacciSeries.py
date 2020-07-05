def Fibonacci(n):
    num1 = 0
    num2 = 1

    if (n < 1):
        return

    print(num1, num2, end=' ')

    for i in range(2, n):
        sum = num1 + num2
        num1 = num2
        num2 = sum
        print(num2, end=' ')

num = int(input("Enter the number: "))
Fibonacci(num)
