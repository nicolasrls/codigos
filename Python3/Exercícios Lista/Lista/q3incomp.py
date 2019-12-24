def maiormenor(lar):
    maior = 0
    menor = 0
    for x in range(lar):
        if x == 0:
            maior = menor = lar[x]
    else:
        if lar[x] > maior:
            maior = lar[x]
        if lar[x] < menor:
            menor = lar[x]
    print("Maior valor: {maior}, Menor valor: {menor}")            
                        
numero = int(input("Número: "))
freio = 0
maior = 0
menor = 0
l = []

while numero != freio:    
    l.append(numero)
    numero = int(input("Número: "))

list(l)
print(maiormenor(l))

    


