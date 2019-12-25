#Digitar números até que o número 0 seja digitado. Criar lista com os números digitados e em seguida mostrar os elementos.

numero = int(input("Número: "))
freio = 0
l = []
while numero != freio:    
    l.append(numero)
    numero = int(input("Número: "))

print(l)