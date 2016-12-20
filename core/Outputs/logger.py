from random import randint
import os

def logs(  data=None, extension=None, kakaos=None):
    while True:
        if extension == None:
            name = "{0}".format(str(randint(0, 999999999)))
            if kakaos == "windows":
                name+=".exe"
	    if kakaos == "linux":
        	name+=".elf"
            if kakaos == "linux_x86":
		name+=".elf"
	    if kakaos == "linux_x64":
		name+=".elf"
	    if kakaos == "linux_arm":
                name+=".elf"
	    if kakaos == "linux_mips":
                name+=".elf"

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

