#Colocar em lista números impares de 0 até numero escolhido

l = []
for x in range(1,int(input("Ate: "))):
    if(x %2 == 1):
        l.append(x)
print(l)