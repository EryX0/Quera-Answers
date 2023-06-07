num1 = input()
num2 = input()
num1_inv = "".join(reversed(num1))
num2_inv = "".join(reversed(num2))
if(num1_inv < num2_inv):
    print(num1," < ", num2)
elif(num1_inv > num2_inv):
    print(num2, " < ", num1)
elif(num1==num2):
    print(num1, " = ", num2)
