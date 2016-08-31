# Test

from core.database.generator import *

from core.Outputs.exe import *


shellcode = generator( "windows", "messagebox", "asdasdyrkrykrk")

ExeFile(shellcode, "windows")



#RawFile(shellcode)
