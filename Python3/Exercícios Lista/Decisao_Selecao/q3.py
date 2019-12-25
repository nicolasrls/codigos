#Questão de retorno de dias em mês desejado

mes =int(input("Digite o mes em inteiro: "))

if mes == 2:
    print("28 dias ou 29 se bissexto")
elif(mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12):
    print("31 dias")
else:
    print("30 dias")