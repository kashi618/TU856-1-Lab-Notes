def gcdd(a,b):
    a = num1
    b = num2
    r = 1

    while True:
        r = num1 % num2
        q = (num1-r) / num2
        
        if r == 0:
            return gcdd
        
        gcdd = q
        
        a = b
        b = r


num1 = 20
num2 = 10
print(gcdd(num1,num2))