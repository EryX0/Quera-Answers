def calculator(n, m, li):
    listoflist = []
    k=0
    i=0
    while(i<=n):
        if(i%m==0 and i!=0):
            listoflist.append(li[k:i])
            k=i
        elif(i==n):
            listoflist.append(li[k:i+1])
        i=i+1
    sumoflist=[]
    i=0
    for i in range(0,len(listoflist)):
        sumoflist.append(listoflist[i][0])
        for j in range(1,len(listoflist[i])):
            sumoflist[i]=sumoflist[i]+listoflist[i][j]
    i=0
    answer=0
    for i in range(len(sumoflist)):
        if(i%2==0 or i==0):
            answer = answer + sumoflist[i]
        else:
            answer = answer - sumoflist[i]
    return answer