a = int(input("Escreva o primeiro inteiro:"))
b = int(input("Escreva o segundo inteiro:"))
divisao = int(a/b)
resto = float(a%b)
tupla = (divisao,resto)
saida = 'Divisao de {} / {} resulta e tem resto {} '
print(saida.format(a,b,tupla))