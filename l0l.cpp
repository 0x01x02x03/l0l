/* //////////////////////////////////////////////////////////////////////////
-----------------------------------------------------------------------------  
 _  ___  _    __                                             _    
| |/ _ \| |  / _|                                           | |   
| | | | | | | |_ _ __ __ _ _ __ ___   _____      _____  _ __| | __
| | | | | | |  _| '__/ _` | '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ /
| | |_| | | | | | | | (_| | | | | | |  __/\ V  V / (_) | |  |   < 
|_|\___/|_| |_| |_|  \__,_|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\
                                                                   

[#] Authors : m3pt0r, Hamit Abis
[#] Greetz  : b3mb4m
[#] Thanks  : Oguz Bektas (xorond)
[*] Version : BETA
[*] License : MIT LICENSE
[-] Contact : m3pt0r@protonmail.com

-----------------------------------------------------------------------------

The MIT License (MIT)

Copyright (c) 2016 m3pt0r

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-----------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////// */

/* Headers */

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>

using namespace std;

/* nt or *nix detect */

#ifdef __unix__
#elif defined(_WIN32) || defined(WIN32)
#define nt
#endif

/* lib */

#include "core/lib/rlutil.h"

/* Core */

#include "core/banner/banner.cpp"

/* Functions*/


void noModule()
{

    cout << "\n\t There's no module. (:\n\n";

}

void encoderlist()
{

    cout <<
            "\n\tName\t\tRank\t\tDescription\n"
            "\t----\t\t----\t\t-----------\n\n"
            "\tkaka\t\t\t\tTest Module\n\n";

}

void injectorList()
{

    cout <<
            "\n\tArchitecture\t\t\tVersion\n"
            "\t------------\t\t\t-------\n\n"
            "\tpatpat\t\t\t\tTest Module\n\n";

}

void shellcodeList()
{

    cout <<
            "\n\tLinux x86\n"
            "\t===========\n\n"
            "\t\tlinux86/exec\n"
            "\t\tlinux86/download&execute\n"
            "\t\tlinux86/binsh\n"
            "\t\tlinux86/read\n"
            "\t\tlinux86/chmod\n"
            "\t\tlinux86/tcp_bind\n"
            "\t\tlinux86/reverse_tcp\n"
            "\t\tlinux86/cd_eject\n\n";


    cout <<
            "\n\tLinux x64\n"
            "\t===========\n\n"
            "\t\tlinux64/binsh\n"
            "\t\tlinux64/read\n"
            "\t\tlinux64/tcp_bind\n"
            "\t\tlinux64/reverse_tcp\n\n";


    cout <<
            "\n\tLinux x86/x64 [Works on both]\n"
            "\t===========\n\n"
            "\t\tlinux/binsh\n"
            "\t\tlinux/read\n"
            "\t\tlinux/tcp_bind\n"
            "\t\tlinux/reverse_tcp\n\n";


    cout <<
            "\n\tLinux ARM\n"
            "\t===========\n\n"
            "\t\tlinux_arm/exec\n"
            "\t\tlinux_arm/binsh\n"
            "\t\tlinux_arm/chmod\n"
            "\t\tlinux_arm/reverse_tcp\n\n";


    cout <<
            "\n\tLinux MIPS\n"
            "\t===========\n\n"
            "\t\tlinux_mips/binsh\n"
            "\t\tlinux_mips/chmod\n"
            "\t\tlinux_mips/tcp_bind\n\n";


    cout <<
            "\n\tSolaris x86\n"
            "\t===========\n\n"
            "\t\tsolarisx86/binsh\n"
            "\t\tsolarisx86/read\n"
            "\t\tsolarisx86/reverse_tcp\n"
            "\t\tsolarisx86/tcp_bind\n\n";


    cout <<
            "\n\tWindows\n"
            "\t===========\n\n"
            "\t\twindows/exec\n"
            "\t\twindows/download&execute\n"
            "\t\twindows/messagebox\n"
            "\t\twindows/tcp_bind\n"
            "\t\twindows/reverse_tcp\n\n";


    cout <<
            "\n\tOSX x86\n"
            "\t===========\n\n"
            "\t\tosx86/binsh\n"
            "\t\tosx86/tcp_bind\n"
            "\t\tosx86/reverse_tcp\n\n";


    cout <<
            "\n\tOSX x64\n"
            "\t===========\n\n"
            "\t\tosx64/binsh\n"
            "\t\tosx64/tcp_bind\n"
            "\t\tosx64/reverse_tcp\n\n";


    cout <<
            "\n\tFreeBSD x86\n"
            "\t===========\n\n"
            "\t\tFreeBSDx86/binsh\n"
            "\t\tFreeBSDx86/read\n"
            "\t\tFreeBSDx86/tcp_bind\n"
            "\t\tFreeBSDx86/reverse_tcp\n"
            "\t\tFreeBSDx86/reverse_tcp2 (through /bin/sh)\n"
            "\t\tFreeBSDx86/exec\n\n";


    cout <<
            "\n\tFreeBSD x64\n"
            "\t===========\n\n"
            "\t\tFreeBSDx64/binsh\n"
            "\t\tFreeBSDx64/tcp_bind\n"
            "\t\tFreeBSDx64/reverse_tcp\n"
            "\t\tFreeBSDx64/exec\n\n";


}

void backdoorList()
{

    cout <<
            "\n\tBinaries\n"
            "\t==========\n";

    noModule();

    cout <<
            "\n\tScripting Payloads\n"
            "\t===================\n\n"
            "\t backdoors/unix/python/reverse_tcp\n"
            "\t backdoors/unix/perl/reverse_tcp\n"
            "\t backdoors/unix/bash/reverse_tcp\n"
            "\t backdoors/unix/ruby/reverse_tcp\n"
            "\t backdoors/windows/asm/reverse_tcp\n"
            "\t backdoors/windows/ps/reverse_tcp\n\n\n";

}

void green()
{
    rlutil::setColor(2);
}

void white()
{ 
    rlutil::setColor(7);
}

void blue()
{
    rlutil::setColor(9);
}

void red()
{
    rlutil::setColor(12);
}

void gray()
{
    rlutil::setColor(8);
}


void clear()
{
    #ifdef nt
        system("cls");
    #else
        system("clear");
    #endif
}

void closeApp()
{
    white(); 
    printf("\nThanks for using l0l. See you. (:\n\n");
    
    exit(0);
}

void ctrlcCatch(int x) 
{
    signal(SIGINT, ctrlcCatch);
    white(); printf("\nCtrl + C Detected. Trying to exit..\n");
    exit(0);
}

char *shorter(char *str, int p)
{ 
    str+=p; 
    return str; 
}

void help()
{
    green(); cout <<
            "\nUsage Commands\n"
            "===============\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    help    \t\tHelp Menu\n"
            "\t    os      \t\tCommand directly ur computer\n"
            "\t    banner  \t\tShow Banner\n"
            "\t    clear   \t\tClear the menu\n"
            "\t    show shellcodes\tShow Shellcodes of Current Database\n"
            "\t    show backdoors\tShow Backdoors of Current Database\n"
            "\t    show injectors\tShow Injectors(Shellcode,dll,so etc..\n"
            "\t    show encoders\tShow Encoders(Py,Ruby,PHP,Shellcode etc..\n"
            "\t    use     \t\tExecute the specified module.\n"
            "\t    back    \t\tA back goes into operation.\n"
            "\t    exit    \t\tClose Application\n\n";
}

void injectorHelp()
{
    green(); cout <<
            "\nInjector Commands\n"
            "=================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    help    \t\tHelp Menu\n"
            "\t    os      \t\tCommand directly ur computer\n"
            "\t    back    \t\tA back goes into operation.\n"
            "\t    exit    \t\tClose Application\n\n";
}

void encoderHelp()
{
    green(); cout <<
            "\nEncoder Commands\n"
            "================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    help    \t\tHelp Menu\n"
            "\t    os      \t\tCommand directly ur computer\n"
            "\t    back    \t\tA back goes into operation.\n"
            "\t    exit    \t\tClose Application\n\n";
}

void shellcodeHelp()
{
    green(); cout <<
            "\nShellcode Commands\n"
            "==================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    exit     \t\tClose Application\n"
            "\t    set      \t\tSet Value Of Options To Modules\n"
            "\t    unset    \t\tUnset Value Of Options To Modules\n"
            "\t    help     \t\tHelp menu\n"
            "\t    back     \t\tA back goes into operation.\n"
            "\t    os       \t\tCommand directly ur computer\n"
            "\t    clear    \t\tClear the menu\n"
            "\t    generate \t\tGenerate shellcode\n"
            "\t    output   \t\tShellcode Output Type\n"
            "\t    show options\tShow current options of selected module\n\n";
}

void backdoorHelp()
{
    green(); cout <<
            "\nBackdoor Commands\n"
            "=================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    exit     \t\tClose Application\n"
            "\t    set      \t\tSet Value Of Options To Modules\n"
            "\t    unset    \t\tUnset Value Of Options To Modules\n"
            "\t    help     \t\tHelp menu\n"
            "\t    back     \t\tA back goes into operation.\n"
            "\t    os       \t\tCommand directly ur computer\n"
            "\t    clear    \t\tClear the menu\n"
            "\t    generate \t\tGenerate backdoor\n"
            "\t    show options\tShow current options of selected module\n\n";
}

void osCommand()
{
    green(); cout <<
            "\nos Command\n"
            "============\n"
            "\tDescription: Command directly ur computer\n"
            "\tUsage: os (command)\n"
            "\tExp: os ver\n";
}

void showCommand()
{
    green(); cout <<
            "\nshow Command\n"
            "============\n"
            "\tDescription: The specified module type list.\n"
            "\tUsage: show (Module Type)\n"
            "\tExp: show injectors\n\n"
            "Module Types\n"
            "============\n"
            "\tshellcodes\n"
            "\tencoders\n"
            "\tinjentors\n"
            "\tbackdoors\n\n";

}


void useCommand()
{
    green(); cout <<
            "\nuse Command\n"
            "===========\n"
            "\tDescription: Execute the specified module.\n"
            "\tUsage: use (Module)\n"
            "\tExp: use test\n\n"
            "To see the modules, use the show command.\n\n";

}

void outputCommand()
{
    green(); cout <<
            "\noutput Command\n"
            "============\n"
            "\tDescription: Shellcode Output Type.\n"
            "\tUsage: output (Type)\n"
            "\tExp: output cpp\n\n"
            "Output Types\n"
            "============\n"
            "\texe\t: Executable File\n"
            "\tc\t: C File\n"
            "\tcpp\t: C++ File\n"
            "\ttxt\t: Text File\n"
            "\traw\t: Raw File\n"
            "\tpy\t: Python File\n"
            "\tdll\t: Dll Source (Windows)\n\n";
            
}

/* Shellcodes */

#include "core/shellcodes/shellcodes.cpp"

/* Backdoors */

#include "core/backdoors/scripting_payloads.cpp"

int main(void)
{

    signal(SIGINT, ctrlcCatch); // Ctrl+C Catch
    
    banner(); 
    
    do
    {
        x:
        char *str;
        string cmd="";
        
        blue();
        printf("l0l > ");

        white(); 
        getline( cin, cmd );

        char* command = strdup(cmd.c_str());
        strtok(command, " ");
        
        if (strlen(command) == 0 || command[0] == '\r' || command[0] == '\n');
        
        else if (!strcmp(command,"help")) {
            help();
        }

        else if (!strcmp(command,"banner")) {
            banner();
        }

        else if (!strcmp(command,"clear")) {
            clear();
        }

        else if (!strcmp(command,"exit") || cin.eof()) {
            closeApp();
        }

        else if (!strcmp(command, "use")) {
            
            int sjsj; 
            string usetxt, type, oskaka, opti;
            str =  shorter(command,4);
            
            if(command[4] == '\0') {

                useCommand();

            } else {

                // Injectors
                if(!strcmp(str, "inj")) {

                    usetxt=str; 
                    type = "injector";

                }

                // Encoders
                else if(!strcmp(str, "encd")) { 
                    usetxt=str; 
                    type = "encoder"; 
                }

                // Shellcodes
                #include "core/shellcodes/s_modules.cpp"

                // Backdoors
                #include "core/backdoors/b_modules.cpp"

                else {

                    red(); 
                    printf("[-] Unknown module: %s\n", str);
                    
                    goto x;
                }
                //  By type of console launch.

                if (type == "injector") {
                
                    #include "core/injectors/i_console.cpp"
                
                }

                else if (type == "encoder") {
                
                    #include "core/encoders/e_console.cpp"
                
                }

                else if (type == "shellcode") {
                
                    string args1 = "None", args2 = "None";
                    #include "core/shellcodes/s_console.cpp"
                
                }

                else if (type == "backdoor") {
                    string parsermodule = usetxt;
                    char* parsmodule = strdup(parsermodule.c_str());
                    parsermodule=shorter(parsmodule,10);

                    string lhost = "None", lport = "None";
                    #include "core/backdoors/b_console.cpp"
                
                }
            }
        }

        else if (!strcmp(command, "os")) {
        
            white();
            str =  shorter(command,3);
            if(command[3] == '\0') {
                osCommand();
            } else {
                system(str);
            }
            putchar('\n');
        
        }

        else if (!strcmp(command,"show")) {
            
            str = shorter(command,5);
            
            if (command[6] == '\0') {

                showCommand();
            
            } else {

                green();

                if (!strcmp(str, "encoders")) {
                    encoderlist();
                }

                else if (!strcmp(str, "injectors")) {
                    injectorList();
                }

                else if (!strcmp(str, "shellcodes")) {
                    shellcodeList();
                }

                else if (!strcmp(str, "backdoors")) {
                    backdoorList();
                }

                else {
                    
                    red(); 
                    printf("[-] Unknown type: %s\n", str);
                
                }
            }
        }
        
        else {
            
            red(); 
            printf("[-] Unknown command: %s\n", command);
        
        }

    } while(1);

    return 0;
}
