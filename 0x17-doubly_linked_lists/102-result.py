#!/usr/bin/python3

# Function to check if a number is a palindrome
def is_palindrome(n):
    return str(n) == str(n)[::-1]

# Initialize variables to keep track of the largest palindrome and the corresponding factors
largest_palindrome = 0
factors = (0, 0)

# Iterate through all 3-digit numbers
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
            factors = (i, j)

# Print the largest palindrome and its factors
print("Largest palindrome:", largest_palindrome)
print("Factors:", factors)

# Save the result in the file 102-result
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
