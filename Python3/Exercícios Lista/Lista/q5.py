numero = int(input("Número: "))
freio = 0
l = []

while numero != freio:
    l.append(numero)
    numero = int(input("Número: "))

for x in l:
    while l.count(x) != 1:
        print("O Número ", x, "aparece", l.count(x), "vezes.")
    else:
        print("O Número", x, "aparece", l.count(x), "vez")
