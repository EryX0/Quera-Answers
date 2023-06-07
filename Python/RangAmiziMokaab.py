def coloring(ls):
    for i in range(len(ls)):
        for j in range(len(ls[i])):
            for k in range(len(ls[i][j])):
                if(i == len(ls)-1 or j == len(ls[i])-1 or k == len(ls[i][j])-1 or i == 0 or j ==0 or k==0):
                    ls[i][j][k]=1
                else: ls[i][j][k]=0
