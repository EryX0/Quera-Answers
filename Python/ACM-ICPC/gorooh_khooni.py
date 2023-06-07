t = int(input())
d = []
m = []
c = []
for i in range(t):
    temp1,temp2,temp3 = input().split()
    d.append(temp1)
    m.append(temp2)
    c.append(temp3)
result = []
for i in range(t):
    foundResult = False
    if(c[i][0]=='O' and c[i][1]=='-'):
        result.append("valid")
    else:
        for j in range(len(c[i])):
            if(c[i][j] not in d[i] and c[i][j] not in m[i] and c[i][j] != '-' and c[i][j] != 'O'):
                foundResult = True
                result.append("invalid")
                break
        if(foundResult == False):
            result.append("valid")
for i in range(len(result)):
    print(result[i])