def calculate_floor(string):
    floor = 0
    for i in string:
        if i == 'U':
            floor = floor + 1
        elif i == 'D':
            floor = floor - 1
    return floor