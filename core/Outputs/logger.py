#------------------------------------------------------------------#
#Author  : roissy
#Greetz  : b3mb4m
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from random import randint
import os

def logs(  data=None, extension=None, kakaos=None):
    while True:
        if extension == None:
            name = "{0}".format(str(randint(0, 999999999)))
            if kakaos == "windows":
                name+=".exe"
        else:
            name = "{0}.{1}".format(str(randint(0, 999999999)),extension)

        if not os.path.isfile(name):
            break

    if extension == None:
        logs = open(name, "wb")
    else:
        logs = open(name, "w")

    logs.write(data)
    logs.close()
    
    if extension != None:
        print ("\n\t[+] Script file : {0} saved !\n".format(os.getcwd()+os.sep+name))
    else:
        print ("\n\t[+] Executable file : {0} saved !\n".format(os.getcwd()+os.sep+name))

