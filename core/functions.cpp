
///////////////////////////// Colors ////////////////////////////////
void green(){
    rlutil::setColor(2);
}
void white(){ 
    rlutil::setColor(7);
}
void blue(){
    rlutil::setColor(9);
}
void red(){
    rlutil::setColor(12);
}
void gray(){
    rlutil::setColor(8);
}
/////////////////////////////////////////////////////////////////////

void clear(){
    #ifdef nt
        system("cls");
    #else
        system("clear");
    #endif
}

void closeApp(){
    white(); printf("\nThanks for using l0l. See you. (:\n\n");
    exit(0);
}

void ctrlcCatch(int qwe) {
    signal(SIGINT, ctrlcCatch);
    white(); printf("\nCtrl + C Detected. Trying to exit..\n");
    exit(0);
}

char *shorter(char *str, int p){ 
    str+=p; 
    return str; 
}

void help(){
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
void injectorHelp(){
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
void encoderHelp(){
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

void shellcodeHelp(){
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

void backdoorHelp(){
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

void osCommand(){
    green(); cout <<
            "\nos Command\n"
            "============\n"
            "\tDescription: Command directly ur computer\n"
            "\tUsage: os (command)\n"
            "\tExp: os ver\n";
}

void showCommand(){
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


void useCommand(){
    green(); cout <<
            "\nuse Command\n"
            "===========\n"
            "\tDescription: Execute the specified module.\n"
            "\tUsage: use (Module)\n"
            "\tExp: use test\n\n"
            "To see the modules, use the show command.\n\n";

}

void outputCommand(){
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

