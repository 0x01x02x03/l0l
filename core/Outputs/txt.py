#------------------------------------------------------------------#
#Author  : roissy
#Greetz  : b3mb4m
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

import time
from header import *

def TxtFile( shellcode):
    db = '''#Project : https://github.com/roissy/l0l
#This file created with l0l ..
#{0} - {1}


{2}
 
'''.format(strftime("%d/%m/%Y"), strftime("%H:%M:%S"), shellcode)

    logs( db, "txt")
