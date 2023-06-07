from datetime import datetime
class Factor:
    def __init__(self,time_format,time,value):
        self.time = time
        self.time_format =  time_format
        self.value = value
def dateNormalizer(time_format,time):
    for i in range(len(time_format)):
        if(time_format[i:i+4] == "yyyy"):
                time_format = time_format[:i] + "%Y" + time_format[i+4:]
        if(time_format[i:i+2] == "mm"):
                time_format = time_format[:i] + "%m" + time_format[i+2:]
        if(time_format[i:i+2] == "dd"):
                time_format = time_format[:i] + "%d" + time_format[i+2:]
    time = datetime.strptime(time, time_format)
    return time
class FactorHandler:
    factors = []
    def __init__(self):
        pass
    def add_factor(self, time_format, time, value):
        self.time_format = time_format
        self.time = time
        self.value = value
        inputFactor =  Factor(self.time_format,self.time,self.value)
        self.factors.append(inputFactor)

    def remove_all_factors(self, time_format, time):
        self.removeIndexes = []
        for i in range(len(self.factors)):
            if dateNormalizer(self.factors[i].time_format,self.factors[i].time) == dateNormalizer(time_format,time):
                self.removeIndexes.append(i)
        self.removeIndexes = self.removeIndexes[::-1]
        for i in range(len(self.removeIndexes)):
            self.factors.pop(self.removeIndexes[i])


    def get_sum(self, time_format, start_time, finish_time):
        sum = 0
        for i in range(len(self.factors)):
            if(dateNormalizer(time_format,start_time).year <=  dateNormalizer(self.factors[i].time_format,self.factors[i].time).year and dateNormalizer(time_format,finish_time).year >=  dateNormalizer(self.factors[i].time_format,self.factors[i].time).year):
                if(dateNormalizer(time_format,start_time).month <=  dateNormalizer(self.factors[i].time_format,self.factors[i].time).month and dateNormalizer(time_format,finish_time).month >=  dateNormalizer(self.factors[i].time_format,self.factors[i].time).month):
                    if(dateNormalizer(time_format,start_time).day <=  dateNormalizer(self.factors[i].time_format,self.factors[i].time).day and dateNormalizer(time_format,finish_time).day >=  dateNormalizer(self.factors[i].time_format,self.factors[i].time).day):
                        sum += self.factors[i].value
        return sum