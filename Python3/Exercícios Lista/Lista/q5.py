numero = int(input("Número: "))
freio = 0
l = []

while numero != freio:
    l.append(numero)
    numero = int(input("Número: "))

l.sort()

for x in l:
    if l.count(x) == 1:
        print("O Número ", x, "aparece", l.count(x), "vez.")
    else:        
        print("O Número ", x, "aparece", l.count(x), "vezes.")        
        
    
