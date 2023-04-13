import math

def quadratic_formula(a, b, c):
    discriminant = b**2 - 4 * a * c
    if discriminant >= 0:
        x1 = (-b + math.sqrt(discriminant)) / (2 * a)
        x2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return x1, x2
    else:
        return None

# Read input coefficients
a, b, c = map(int, input().split())

# Ensure the input coefficients are within the specified range
if -1000 <= a <= 1000 and -1000 <= b <= 1000 and -1000 <= c <= 1000:
    roots = quadratic_formula(a, b, c)
    if roots:
        print(roots[0])
        print(roots[1])
    else:
        print("There are no real roots for the given coefficients.")
else:
    print("The input coefficients must be within the range -1000 to 1000.")
