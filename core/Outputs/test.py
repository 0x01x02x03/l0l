# Test

from .generator import *

from raw import *

shellcode = generator( "windows", "messagebox", "aadsfasd")

#ExeFile(shellcode, "windows")



RawFile(shellcode)
