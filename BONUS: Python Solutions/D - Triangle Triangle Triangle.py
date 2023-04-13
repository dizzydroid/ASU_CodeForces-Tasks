import math

def triangle_sides_angles(side1, angle2, angle3):
    # Calculate the third angle
    angle1 = 180 - angle2 - angle3

    # Convert angles to radians
    angle1_rad = math.radians(angle1)
    angle2_rad = math.radians(angle2)
    angle3_rad = math.radians(angle3)

    # Calculate the other two sides using the sine law
    side2 = side1 * math.sin(angle2_rad) / math.sin(angle1_rad)
    side3 = side1 * math.sin(angle3_rad) / math.sin(angle1_rad)

    return angle1, side2, side3

# Read input values
side1 = float(input("Enter the length of side1: "))
angle2 = float(input("Enter the size of Angle2 (in degrees): "))
angle3 = float(input("Enter the size of Angle3 (in degrees): "))

# Check if the input is valid
if 0 < side1 <= 500 and 0 < angle2 < 180 and 0 < angle3 < 180 and angle2 + angle3 < 180:
    angle1, side2, side3 = triangle_sides_angles(side1, angle2, angle3)
    print("Angle1:", angle1)
    print("Side2:", side2)
    print("Side3:", side3)
else:
    print("Invalid input. Please check the constraints.")
