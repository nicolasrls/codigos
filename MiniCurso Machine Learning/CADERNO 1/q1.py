i = 0
x = [1,2,3,4,5,6,7,8,9,10] 

print("[", end=' ')
while i < len(x):
    if(x[i] %2 == 0 ):
        print(x[i], end=' ')
    i+=1
print("]")
