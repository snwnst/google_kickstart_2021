import math
print ("insertar ciclos")
ciclo=int(input())
i=1; f=1; retiros = []; a = []; b=[]; c=[]; d=[]; e=[]; j=[]; g=[]; h=[]; k=[];
l = []; m=[]; n=[]; ñ=[]; o=[]; p=[]; q=[]; r=[]; t=[]; lista=[];
while i <= ciclo:
    personas= int(input("personas \n")); cantidad = int(input("cantidad \n"))
    while f <= personas:
        s= int(input())
        s= math.ceil(s/cantidad)
        if s == 1:
            retiros.append(f)
        if s==2:
            a.append(f)
        if s == 3:
            b.append(f)
        if s==4:
            c.append(f)
        if s == 5:
            d.append(f)
        if s==6:
            e.append(f)
        if s == 7:
            g.append(f)
        if s==8:
            h.append(f)
        if s == 9:
            j.append(f)
        if s==10:
            k.append(f)
        if s == 11:
            l.append(f)
        if s==12:
            m.append(f)
        if s == 13:
            n.append(f)
        if s==14:
            o.append(f)
        if s == 15:
            p.append(f)
        if s==16:
            q.append(f)
        if s == 17:
            r.append(f)
        if s==18:
            t.append(f)
        f=f+1
    i=i+1; f=1
    lista= retiros + a + b + c + d + e + g + h + j + k + l + m + n + o + p + q + r + t
    print(lista)
    retiros.clear(); a.clear(); b.clear(); c.clear(); d.clear(); e.clear(); g.clear(); h.clear(); j.clear(); k.clear()
    l.clear(); m.clear(); n.clear(); o.clear(); p.clear(); q.clear(); r.clear(); t.clear()      
        

    
    