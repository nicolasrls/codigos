#Remover numero repetido.

numero = int(input("Número: "))
freio = 0
l = []

while numero != freio:
    l.append(numero)
    numero = int(input("Número: "))
    l.count(numero)
    if numero in l:
        l.remove(numero)

print(l)
