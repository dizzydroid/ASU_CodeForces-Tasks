def next_letter(letter):
    if letter == 'z':
        return 'a'
    else:
        return chr(ord(letter) + 1)

# Read input character
letter = input()

# Check if the input is a lowercase English letter
if 'a' <= letter <= 'z':
    result = next_letter(letter)
    print(result)
else:
    print("The input must be a lowercase English letter.")
