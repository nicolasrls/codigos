#Ordenar lista sem usar o sort()

numero = 1 
l = []
freio = 0
flag = False

while numero != freio:
    tamanho = len(l)
    n = int(input("Digite um número inteiro: "))
    numero = n
    if tamanho > 0 and n!= 0 :
        for y in range(tamanho):
            if ( n <= l[y] and n!= 0 ):
                l.insert( y, n )
                flag = True
                break
    if flag == False and  n!= 0 :
        l.append(numero)
    else:
        flag = False
    
print(l)