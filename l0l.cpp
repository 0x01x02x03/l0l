/*

 ___       _   _   _       ___
| _ ) __ _| |_| |_| |___  | _ \_ _ ___  __ _ _ _ __ _ _ __  _ __  ___ _ _ ___
| _ \/ _` |  _|  _| / -_) |  _/ '_/ _ \/ _` | '_/ _` | '  \| '  \/ -_) '_(_-<
|___/\__,_|\__|\__|_\___| |_| |_| \___/\__, |_| \__,_|_|_|_|_|_|_\___|_| /__/
                                        |__/
                                                    Software Development Team


       -- The Exploit Development Toolkit - Laughing Zero Loud (l0l) --

[#] Leader  : m3pt0r
[#] Greetz  : b3mb4m <3
[#] Thanks  : Oguz Bektas (xorond)
[*] Version : BETA
[*] License : MIT LICENSE
[-] Contact : m3pt0r@protonmail.com
[~] Who are we?
[~] We are ~anonymity insane humans. no other information, haha.

*/

#include "core/core.h"

int main(){

    banner(); signal(SIGINT, ctrlcCatch); // Ctrl+C Catch

    do {
        mainConsole:
        char *str;
        string cmd;
        rlutil::setColor(9); // Blue Color
        printf("l0l > ");
        rlutil::setColor(7); // White Color
        getline( cin, cmd );
        char* command = strdup(cmd.c_str());
        strtok(command, " ");

        if      (cin.eof()) closeApp();
        else if (strlen(command) == 0 || command[0] == '\r' || command[0] == '\n');
        else if (strcmp(command,"help") == 0) help();
        else if (strcmp(command,"banner") == 0) banner();
        else if (strcmp(command,"clear") == 0) clear();
        else if (strcmp(command,"exit") == 0) closeApp();
        else if (strcmp(command, "use") == 0){
            #include "core/mecanism.cpp"
        }
        else if (strcmp(command,"os") == 0){
            rlutil::setColor(7); // White Color
            str =  shorter(command,3);
            if(command[3] == '\0') osCommand();
            else
                putchar('\n');
                system(str);
                putchar('\n');
        }
        else if (strcmp(command,"show") == 0){
            str = shorter(command,5);
            if (command[6] == '\0')  showCommand();
            else {

                rlutil::setColor(2); // Green Color

                if      (strcmp(str, "encoders") == 0) encoderlist();
                else if (strcmp(str, "injectors") == 0) injectorList();
                else if (strcmp(str, "shellcodes") == 0) shellcodeList();
                else if (strcmp(str, "backdoors") == 0) backdoorList();
                else {
                        rlutil::setColor(12); // Red Color
                        printf("[-] Unknown type: %s\n", str);
                }
            }
        }
        else {
            rlutil::setColor(12); // Red Color
            printf("[-] Unknown command: %s\n", command);
        }

    } while(1);

    return 0;
}
