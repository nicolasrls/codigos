import os
os.system('cls') or None
import forca
import adivinhacao

def escolher_jogos():
    print("Forca (1) ou advinhação (2)")
    jogos = int(input("Qual jogo você deseja? "))

    if jogos == 1:
        print("Abrindo Forca")
        forca.jogar()    
    if jogos == 2:
        print("Abrindo adivinhação")
        adivinhacao.jogar()    
    
if( __name__ == '__main__'):
    escolher_jogos()

#print("Fim de jogo")