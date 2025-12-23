num = int(input("Enter any number: "))

while num >= 10:
    sum = 0
    while num != 0:
        sum += num % 10
        num = num // 10
    num = sum
print(f"Output: {num}")