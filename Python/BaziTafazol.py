def game(number):
    if(number%10 > number/10):
        return number%10 - number//10
    else:
        return number//10 - number%10