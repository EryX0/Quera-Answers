from bs4 import BeautifulSoup

def process(path):
    file = open(path)
    soup = BeautifulSoup(file,'html.parser')
    for links in range(len(soup.find_all('a'))):
        links+=1
    return links