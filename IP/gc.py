n = int(input())
arr = ['0','1']
while n>1:
    ak = list()
    ak = ['0'+x for x in arr]
    ak += ['1'+x for x in arr[::-1]]
    arr = ak
    n -= 1

for xx in arr:
    print(xx)