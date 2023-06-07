from cmath import pi


def get_func(ls):
    def square(x):
        return x * x
    def circle(x):
        return x*x*pi
    def rectangle(x, y):
        return x*y
    def triangle(x, y):
        return x*y/2
    func_by_name = {
        'square': square,
        'circle': circle,
        'rectangle': rectangle,
        'triangle': triangle,
    }

    return [func_by_name[name] for name in ls]

ls = get_func(['square', 'circle', 'rectangle', 'triangle'])
print(ls[0](1))
print(ls[1](2))
print(ls[2](2, 4))
print(ls[3](4, 5))
