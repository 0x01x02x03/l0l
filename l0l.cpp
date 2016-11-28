/* //////////////////////////////////////////////////////////////////////////
-----------------------------------------------------------------------------
 ___       _   _   _       ___
| _ ) __ _| |_| |_| |___  | _ \_ _ ___  __ _ _ _ __ _ _ __  _ __  ___ _ _ ___
| _ \/ _` |  _|  _| / -_) |  _/ '_/ _ \/ _` | '_/ _` | '  \| '  \/ -_) '_(_-<
|___/\__,_|\__|\__|_\___| |_| |_| \___/\__, |_| \__,_|_|_|_|_|_|_\___|_| /__/
                                        |__/
[#] Leader  : m3pt0r                                Software Development Team
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

#include "core/core.h"

int main(void){

    signal(SIGINT, ctrlcCatch); // Ctrl+C Catch
    
    banner(); 
    
    do{

        mainConsole:
        char *str;
        string cmd="";
        blue(); printf("l0l > ");
        white(); getline( cin, cmd );
        char* command = strdup(cmd.c_str());
        strtok(command, " ");
        
        if (strlen(command) == 0 || command[0] == '\r' || command[0] == '\n');
        
        else if (!strcmp(command,"help")){
            help();
        }
        else if (!strcmp(command,"banner")){
            banner();
        }
        else if (!strcmp(command,"clear")){
            clear();
        }
        else if (!strcmp(command,"exit") || cin.eof()){
            closeApp();
        }
        else if (!strcmp(command, "use")){
            int sjsj; string usetxt, type, oskaka, opti;
            str =  shorter(command,4);
            if(command[4] == '\0'){
                useCommand();
            } else{

                // Test Area (:
                if(!strcmp(str, "test"));

                // Injectors
                else if(!strcmp(str, "patpat")){ usetxt=str; type = "injector"; }

                // Encoders
                else if(!strcmp(str, "kaka")){ usetxt=str; type = "encoder"; }

                // Shellcodes
                #include "core/shellcodes/s_modules.cpp"

                // Backdoors
                #include "core/backdoors/b_modules.cpp"
                else{
                    red(); printf("[-] Unknown module: %s\n", str);
                    goto mainConsole;
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
        else if (!strcmp(command, "os")){
            white();
            str =  shorter(command,3);
            if(command[3] == '\0'){
                osCommand();
            } else {
                system(str);
            }
            putchar('\n');
        }
        else if (!strcmp(command,"show")){
            str = shorter(command,5);
            if (command[6] == '\0') {
                showCommand();
            }
            else {

                green();

                if (!strcmp(str, "encoders")){
                    encoderlist();
                }
                else if (!strcmp(str, "injectors")){
                    injectorList();
                }
                else if (!strcmp(str, "shellcodes")){
                    shellcodeList();
                }
                else if (!strcmp(str, "backdoors")){
                    backdoorList();
                }
                else {
                    red(); printf("[-] Unknown type: %s\n", str);
                }
            }
        }
        else {
            red(); printf("[-] Unknown command: %s\n", command);
        }

    }while(1);

    return 0;
}
