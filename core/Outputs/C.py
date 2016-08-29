#------------------------------------------------------------------#
#Author  : roissy
#Greetz  : b3mb4m
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from header import *

def CFile( shellcode):
    db = """//Project : https://github.com/roissy/l0l
//This file created with l0l ..
//%s - %s
//Compile : gcc -fno-stack-protector -z execstack shell.c -o shell

unsigned char shellcode[] = "%s";

int main(void){
	(*(void(*)()) shellcode)();
}

  
""" % (strftime("%d/%m/%Y"), strftime("%H:%M:%S"), shellcode)

    logs( db, "c")
