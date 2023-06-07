class ExceptionProxy(Exception):
    def __init__(self,msg,function):
        self.msg = msg
        self.function = function
        
    
def transform_exceptions(func_ls):
    tr_ls = []
    for i in range(len(func_ls)):
        try:
            func_ls[i]()
        except Exception as err:
            tr_ls.append(ExceptionProxy(str(err),func_ls[i]))
        else : 
            tr_ls.append(ExceptionProxy("ok!",func_ls[i]))
    return tr_ls