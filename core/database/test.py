#------------------------------------------------------------------#
#Author  : roissy
#Greetz  : b3mb4m
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from generator import *

shellcode = generator( "windows", "messagebox", "dfgdfghdsfgdfgsdfdfgfdgfgddgfgdsfagseg666")



b = shellcode.split("\\")

x = 1

p = (len(b)/20)+1
loplop = 1
for i in range((len(b)/20)+1):
    j = b[x:x+20]
    line = ""
    for k in range(len(j)):
        line += "\\"+j[k]
    #print '"'+line+'"+'
    if p != loplop:
        print '"'+line+'"+'
    else:
        print '"'+line+'";'
    x += 20
    loplop += 1
