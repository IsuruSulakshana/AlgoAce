def lcm(num1, num2):
    # Find the maximum value between num1 and num2
    max_num = max(num1, num2)

    # Find the LCM
    while True:
        if max_num % num1 == 0 and max_num % num2 == 0:
            lcm = max_num
            break
        max_num += 1
    return lcm

# Example usage
num1 = 12
num2 = 30
result = lcm(num1, num2)
print(f"LCM of {num1} and {num2} is {result}")
