n = int(input())
list = list(map(int,input().strip().split()))[:n]
max = list[0]
i=0
while(i!=len(list)):
    if(max < list[i]):
        max=list[i]
    i=i+1
print(max)