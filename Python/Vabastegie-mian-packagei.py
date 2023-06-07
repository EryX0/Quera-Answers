def sort_dependencies(packages, package_name):
    package_dependencies = []
    temp=[]
    if(packages[package_name]!=[]):
        for i in range(len(packages[package_name])):
            temp.append(sort_dependencies(packages,packages[package_name][i]))
        package_dependencies = package_dependencies + packages[package_name]
        if(temp[i]!=[]):
            package_dependencies = package_dependencies + temp[i]
        package_dependencies.reverse()
    return package_dependencies