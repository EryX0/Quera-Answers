def words_check(text):
    text = text.lower()
    text = text.split()
    badWordsIndex=[]
    for i in range(len(text)):
        badChar = 0
        goodChar = 0
        word = text[i]
        for j in range(len(word)):
            if(word[j].isalpha() == False):
                badChar+=1
            else:
                goodChar+=1

        if(badChar > goodChar or badChar == goodChar):
            badWordsIndex.append(i)

        elif(goodChar > badChar and len(word) != 1 and badChar != 0):
            tempWord = ""
            for j in range(len(word)):
                if(word[j].isalpha() == True):
                    tempWord+=word[j]
            text[i] = tempWord
    
    for i in range(len(badWordsIndex)-1,-1,-1):
        text.pop(badWordsIndex[i])
    for i in range(len(text)):
        text[i] = text[i].capitalize()
    dict = {}
    for i in range(len(text)):
        dict[text[i]] = text.count(text[i])
    return(dict)