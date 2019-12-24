a = int(input("Numero A: "))
b = int(input("Numero B: "))
c = int(input("Numero C: "))

cumbuca = 0

if c < a:
    cumbuca = a
    a = c
    c = cumbuca

if b > c:
    cumbuca = b
    b = c
    c = cumbuca
if  a > b:
    cumbuca = a
    a = b
    b = cumbuca

print (a, "<", b, "<", c )
    
    
