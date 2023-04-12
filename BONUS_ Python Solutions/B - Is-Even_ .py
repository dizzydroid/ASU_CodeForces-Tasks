def is_even(n):
    if n % 2 == 0:
        return 1
    else:
        return 0

# Read input number
n = int(input())

# Ensure the input number is within the specified range
if -1000 <= n <= 1000:
    result = is_even(n)
    print(result)
else:
    print("The input number must be within the range -1000 to 1000.")
