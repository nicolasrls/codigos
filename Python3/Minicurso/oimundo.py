
a = "nicolas"
print("oi", a)
b = input("Tudo bem? ")
if b == "sim" :
     print(":)")
if b == "nao" : 
    print(":(")
if b == "nao sei":
    print("Se decida seu mizera")


# para inserir algo crie uma variavel + input("sua pergunta") ex: a = input("Digite sua idade: ")
# e para printar só print()
# lembrar de não usar ";" e não usar chaves, usar ":"
# não existe i++, só i+=1
# print automaticamente quebra linha, então se não quiser: print(algo, end=" ")
# for no python --> for v in i: para i sendo um vetor i=[0,1,2,3,4,5,6]
#                       print(v)

i = [0,1,2,3,4,5,6]

for v in i:
    print(v, end=" ")

# usando  o range para criar numeros em ordem num determinado intervalo de 0 a 20

for v in range(0,21):
    print(v, end=" ")

# Função em python3 usa o "def" não necessita definir tipo de variável e não usa chaves

def multiplica(a):
    return a*2

res = multiplica(2)
print (res)

