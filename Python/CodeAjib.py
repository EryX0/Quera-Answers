class Foo:
    _x=0
    @property
    def x(self):
        return int(self._x)
    @x.setter
    def x(self,value):
        if(value >= 0):
            self._x = value%100
        elif(value < 0):
            self._x = -1
        else :
            self._x = 0
p = Foo()

print(p.x)
