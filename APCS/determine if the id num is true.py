def verify_id(id_number):
    if len(id_number) != 10 or not id_number[0].isalpha() or not id_number[1:].isdigit():
        return False

    city_codes = {'A': 10, 'B': 11, 'C': 12, 'D': 13, 'E': 14, 'F': 15, 'G': 16, 'H': 17,
                  'I': 34, 'J': 18, 'K': 19, 'L': 20, 'M': 21, 'N': 22, 'O': 35, 'P': 23,
                  'Q': 24, 'R': 25, 'S': 26, 'T': 27, 'U': 28, 'V': 29, 'W': 32, 'X': 30,
                  'Y': 31, 'Z': 33}

    letter = id_number[0].upper()
    letter_sum = city_codes.get(letter, 0)
    letter_sum = letter_sum // 10 + (letter_sum % 10) * 9

    weights = [8, 7, 6, 5, 4, 3, 2, 1]
    digit_sum = sum(int(id_number[i+1]) * weights[i] for i in range(8))

    total = letter_sum + digit_sum
    check_digit = (10 - total % 10) % 10

    return check_digit == int(id_number[-1])

# 測試 
test_ids = [
    "#放要測的身分字號"
]

for test_id in test_ids:
    print(f"{test_id}: {verify_id(test_id)}")
