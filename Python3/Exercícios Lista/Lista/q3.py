#Verificar maior e menor da lista

numero = int(input("Número: "))
freio = 0
maior = 1
maior = int(maior)
menor = 1000000000000000000000000000000000000
menor = int(menor)
l = []

while numero != freio:
    if numero < menor:
        menor = numero
    if numero > maior:
        maior = numero    
    l.append(numero)
    numero = int(input("Número: "))
    
print("O maior:",maior, "o menor:",menor)
