#------------------Bombermans Team---------------------------------# 
#Author  : B3mB4m
#Concat  : b3mb4m@protonmail.com
#Project : https://github.com/b3mb4m/Shellsploit
#LICENSE : https://github.com/b3mb4m/Shellsploit/blob/master/LICENSE
#------------------------------------------------------------------#

from generator import *

shellcode = generator( "windows", "messagebox", "qqwwwee")

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
