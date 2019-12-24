# Questão do fatorial

numero = int(input("Numero para fatorial: "))
fat = 1
             
for x in range(numero,0,-1):
    fat = x*fat

print(numero,"!  = ",fat)
