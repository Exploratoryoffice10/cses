s=input()
di=dict()
a=0
ch='0'
for x in s:
	di[x]=di.get(x,0)+1;
#print(di)
nl=list(di.items())
for x,y in nl:
	if y%2==1: 
		a+=1
		ch=x

#print("a is",a)

if a>1:
	print("NO SOLUTION")
else:
	for x,y in nl:
		if x!=ch: print(x*(y//2),end="")
	print(ch*di.get(ch,0),end="")
	nl.reverse()
	for x,y in nl:
		if x!=ch: print(x*(y//2),end="")
	print("")