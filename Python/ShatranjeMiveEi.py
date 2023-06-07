def fruits(tuple_of_fruits):
    good_fruits = []
    for fruit in tuple_of_fruits:
        if fruit['shape'] == 'sphere' and fruit['mass'] >= 300 and fruit['mass'] <= 600 and fruit['volume'] >= 100 and fruit['volume'] <= 500:
            good_fruits.append(fruit['name'])
    dict = {}
    for fruit in good_fruits:
        if fruit in dict:
            dict[fruit] += 1
        else:
            dict[fruit] = 1
    return dict
output = fruits ((
    {'name':'apple', 'shape': 'sphere', 'mass': 350, 'volume': 120},
    {'name':'mango', 'shape': 'square', 'mass': 150, 'volume': 120}, 
    {'name':'lemon', 'shape': 'sphere', 'mass': 300, 'volume': 100},
    {'name':'apple', 'shape': 'sphere', 'mass': 500, 'volume': 250}))
print(output)