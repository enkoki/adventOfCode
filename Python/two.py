word = input("Enter your word:\n").upper()
n = len(word)
count = 0
for i in range(n - 1):
    if word[i] != word[i + 1]:
        count += 1
print(f"The number of change in letters is: {count} times.")
