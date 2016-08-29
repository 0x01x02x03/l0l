#------------------------------------------------------------------#
#Author  : roissy
#Greetz  : b3mb4m
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from header import *


def RawFile( shellcode):
    shellcode = unhexlify(shellcode.replace("\\x", ""))
    logs( shellcode, None)
