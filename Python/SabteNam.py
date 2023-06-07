def check_registration_rules(**kwargs):
    verifiedUsers = []
    for username,password in kwargs.items():
        if(username!='quera' and username!='codecup' and len(username)>=4 and len(password) >= 6 and password.isnumeric() == False):
            verifiedUsers.append(username)
    return verifiedUsers
print(check_registration_rules(username='password', sadegh='He3@lsa', quera='kLS45@l$'))