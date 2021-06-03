q = int(input())

d_ar = [10**i for i in range(17)]
p_ar = [0]
p_ar += [9*(10**(i-1))*i for i in range(1,18)]
for i in range(len(p_ar)-1):
    p_ar[i+1] += p_ar[i]


def fun():
    k = int(input())
    for i in range(len(p_ar)-1):
        if p_ar[i]<k and p_ar[i+1]>=k: 
            a = i+1
            break
    x1 = k - p_ar[a-1] - 1
    x2,x3 = x1%a, x1//a
    ink = str(d_ar[a-1]+x3)
    print(ink[x2])


while q>0:
    q-=1
    fun()

# fun()