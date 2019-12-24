def isprimo(numero):
    if numero != 0 & numero != 1:
        if numero > 3:
            for i in range(2, numero):
                if numero % i == 0:
                    return False
        return True
    return False

num = input("Digite um numero: ")
num = int(num)

print("É primo" if isprimo(num) else "Não é primo")