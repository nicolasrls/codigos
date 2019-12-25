numero = int(input("Número: "))
freio = 0
l = []

while numero != freio:
    l.append(numero)
    numero = int(input("Número: "))

desejado = int(input("Número que deseja consultar: "))
if l.count(desejado) == 1:
    print("O Número",desejado, "aparece", l.count(desejado), "vez.")
else:
    print("O Número",desejado, "aparece", l.count(desejado), "vezes.")
        
        
    
