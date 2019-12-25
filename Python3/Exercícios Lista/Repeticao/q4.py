#Adicionar números e somá-los até que apareça o 0

numero = int(input("Número: "))
freio = 0
caixinha = 0
while numero != freio:    
    caixinha = numero + caixinha
    numero = int(input("Número: "))

print("Soma:",caixinha)