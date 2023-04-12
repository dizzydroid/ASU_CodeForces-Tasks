def is_divisible(n, m):
    if n % m == 0:
        return 1
    else:
        return 0

# Read input numbers
n, m = map(int, input().split())

# Ensure the input numbers are within the specified range and m is not equal to 0
if -1000 <= n <= 1000 and -1000 <= m <= 1000 and m != 0:
    result = is_divisible(n, m)
    print(result)
else:
    print("The input numbers must be within the range -1000 to 1000 and m must not be 0.")
