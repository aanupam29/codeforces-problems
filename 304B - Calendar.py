import datetime
t1 = datetime.datetime.strptime(input(),"%Y:%m:%d")
t2 = datetime.datetime.strptime(input(),"%Y:%m:%d")
print(abs((t2-t1).days))
