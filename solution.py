from math import sqrt

def divisors(n):
    divs = {1,n}
    for i in range(2,int(sqrt(n))+1):
        if n%i == 0:
            divs.update((i,n//i))
    return divs

def triangular():
    i=1
    while(True):
        yield (i*(i+1)//2)
        i+=1
genTriangNum = triangular()
num=0
while True:
    num = next(genTriangNum)
    div = divisors(num)
    if len(div) > 500:
        break
print(num)
