def round_to_nearest_whole_number(x):
    return round(x)

# Read input number
x = float(input())

# Check if the input is within the specified range
if 0 < x <= 500:
    result = round_to_nearest_whole_number(x)
    print(result)
else:
    print("The input must be a positive real number greater than 0 and less than or equal to 500.")
