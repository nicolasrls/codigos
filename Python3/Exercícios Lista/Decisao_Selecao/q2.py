#Questão do ano bissexto

ano = int(input("Digite o ano: "))
if ano%4==0 and ano%100!=0 or ano%400==0:
    print("Ano Bissexto")
else:
    print("Não é um ano Bissexto!")