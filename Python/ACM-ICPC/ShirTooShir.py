n = int(input())
list = list(map(int, input().split()))
for i in range(n-1, -1, -1):
    if(i!=0):
        ezafe = list[i]/i
        
    list[i] += ezafe
for i in range(n):
    print("%.5f" % list[i], end=" ")