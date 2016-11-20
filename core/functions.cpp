
void clear(){
    #ifdef nt
        system("cls");
    #else
        system("clear");
    #endif
}

void closeApp(){
    rlutil::setColor(7); // White Color
    printf("\nThanks for using l0l.\n");
    exit(0);
}

void ctrlcCatch(int qwe) {
    signal(SIGINT, ctrlcCatch);
    rlutil::setColor(7); // White Color
    printf("\nCtrl + C Detected. Trying to exit..\n");
    exit(0);
}

char* shorter(char *bilik, int p){ bilik+=p; return bilik; }

void help(){
    rlutil::setColor(2); // Green Color
   	cout <<
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
    rlutil::setColor(2); // Green Color
    cout <<
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
    rlutil::setColor(2); // Green Color
    cout <<
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
    rlutil::setColor(2); // Green Color
    cout <<
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
    rlutil::setColor(2); // Green Color
    cout <<
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
    rlutil::setColor(2); // Green Color
    cout <<
            "\nos Command\n"
            "============\n"
            "\tDescription: Command directly ur computer\n"
            "\tUsage: os (command)\n"
            "\tExp: os ver\n";
}

void showCommand(){
	rlutil::setColor(2); // Green Color
    cout <<
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
    rlutil::setColor(2); // Green Color
    cout <<
            "\nuse Command\n"
            "===========\n"
            "\tDescription: Execute the specified module.\n"
            "\tUsage: use (Module)\n"
            "\tExp: use test\n\n"
            "To see the modules, use the show command.\n\n";

}

void outputCommand(){
    rlutil::setColor(2); // Green Color
    cout <<
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