# Exercício do IMC(Peso e altura)

imcmn = 18.5
imcma = 25
imcma = float(imcma)
imcmn = float(imcmn)

print("Digite sua massa e em seguida sua altura")
peso = input("Massa em KG: ")
altura = input("Altura em m: ")
altura = float(altura)
peso = float(peso)

imc = (peso/(altura*altura))
imc = float(imc)

if (imc<imcmn):
    print("Abaixo do peso." , " seu imc: ", imc)
elif (imc>imcma):
    print("Acima do peso" , " seu imc: ", imc)
else:
    print("Peso normal." , " seu imc: ", imc)
