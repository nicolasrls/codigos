import os
os.system('cls') or None
print('***************************Bem-vindo ao jogo da adivinhação!*******************')
print("\n")
n_scrt = 42
tentativas = 3

while (tentativas > 0): 
    print("Tentativa: ", tentativas-1)
    chute = input("Digite um número: ")
    chute = int(chute)

    igual = chute == n_scrt
    menorq = chute < n_scrt
    maiorq = chute > n_scrt

    if igual :
        print("\n")
        print('***************************Parabens, vc venceu***************************', "\n")
        break
    elif menorq :
        print("\n")        
        print("***Erraste, menor que o número***", "\n")
        
    elif maiorq :
        print("\n")        
        print("***Erraste, maior que o número***", "\n")
    tentativas-=1

print("Fim de jogo!")