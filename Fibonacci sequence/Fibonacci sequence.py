n = int(input("Enter n : "))

def fib(n):
    
    if(n <= 1):
        return n;
    else:
        return fib(n-1) + fib(n-2)

output = fib(n)

print(output)