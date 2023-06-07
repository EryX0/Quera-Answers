def separator(ls):
    zoj = []
    fard = []
    for i in range(len(ls)):
        if(ls[i]%2==0 or ls[i]==0):
            zoj.append(ls[i])
        else:
            fard.append(ls[i])
    tuple = (zoj,fard)
    return tuple