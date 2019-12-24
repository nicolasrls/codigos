# com random

import random

def jogar():
    import os
    os.system('cls') or None
    print('***************************Bem-vindo ao jogo da adivinhação!*******************')
    print("\n")
    n_scrt = random.randint(0,100)
    tentativastotal = 10
    tentativas = tentativastotal
    for rodada in range(1,10):
        tentativas-=1    
        print("Tentativa: {} de {}".format(tentativas,tentativastotal))
        chute = input("Digite um número: ")
        chute = int(chute)

        igual = chute == n_scrt
        menorq = chute < n_scrt
        maiorq = chute > n_scrt
        if chute < 1 or chute > 100:
            continue
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
        

    print("Fim de jogo! O número era: ", n_scrt)
        