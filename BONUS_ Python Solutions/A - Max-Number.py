def find_maximum(a, b):
    if a > b:
        return a
    else:
        return b

# Read input numbers
a, b = map(int, input().split())

# Ensure the input numbers are within the specified range
if -1000 <= a <= 1000 and -1000 <= b <= 1000:
    maximum = find_maximum(a, b)
    print(maximum)
else:
    raise ValueError("The input numbers must be within the range -1000 to 1000.")
