def compare(string1, string2):
    if (len(string1) == 0 and len(string2) == 0):
        return "Both strings are empty!"
    elif (len(string1) == 0):
        return string2[-1::-1]
    elif (len(string2) == 0):
        return string1[-1::-1]
    else:
        if(ord(string1[0]) < ord(string2[0])):
            string1 = string1[1:]
        elif(ord(string1[0]) > ord(string2[0])):
            string2 = string2[1:]
        else:
            string1 = string1[1:]
            string2 = string2[1:]

        return compare(string1[-1::-1] , string2[-1::-1])

