lista = [10,2,40,50,20]
maior = 0
menor = 10000
media = 0
i = 0

while i < len(lista):
    if(lista[i] > maior ):
        maior = lista[i]
    if(lista[i] < menor ):
        menor = lista[i]
    media = lista[i]+ media
    i+=1
media = (media/len(lista))
saida = 'O valor maior é {}, o menor valor é {} e a média é {}'
print(saida.format(maior,menor,media))
        
    