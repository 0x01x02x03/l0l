/**
    l0l - The Exploit Development Kit
    Authors:roissy
    Greetz:B3mB4m
*/

do{
    string scmd, controller;
    char *str2, *str3, *str4, *p;

    rlutil::setColor(9);
    cout << "l0l";
    rlutil::setColor(8);
    cout << ":";
    // Set White Color
    rlutil::setColor(15);
    cout << "shellcode(";
    // Set Red Color
    rlutil::setColor(12);
    cout << usetxt;
    // Set White Color
    rlutil::setColor(15);
    cout << ")";
    rlutil::setColor(9);
    printf(" > ");
    // Set White Color
    rlutil::setColor(7);

    getline( cin, scmd );
    //char *usecmd = &scmd[0u];
    //char *usecmd2 = &scmd[0u];
    //char *usecmd3 = &scmd[0u];

    char* usecmd = strdup(scmd.c_str());
    char* usecmd2 = strdup(scmd.c_str());
    char* usecmd3 = strdup(scmd.c_str());


    strcpy(usecmd2,usecmd);

    strtok(usecmd2, " ");

    string modulen = str;

    if (cin.eof()) {
        closeApp();
    }

    if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');

    // Shellcode Commands

    else if(strcmp(usecmd, "back") == 0){
        goto mainConsole;
    }
    else if(strcmp(usecmd, "help") == 0){
        shellcodeHelp();
    }
    else if (strcmp(usecmd,"exit") == 0){
        closeApp();
    }
    else if(strcmp(usecmd2,"os") == 0){

        // Set White Color
        rlutil::setColor(15);

        str2 =  shorter(usecmd,3);

        if(usecmd[3] == '\0'){
            osCommand();
        }else{
            printf("\n");
            system(str2);
        }
        printf("\n");

    }
    else if(strcmp(usecmd, "clear") == 0){
        clear();
    }
    else if(strcmp(usecmd, "show options") == 0){

        rlutil::setColor(2);
        cout <<
                "\n\tModule options (" << modulen << "):\n\n"
                "\t\tName\t" << "\tDescription" << "\t\tCurrent Setting\n"
                "\t\t----\t" "\t-----------\t" << "\t---------------\n";

       if(opti == "exec"){
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";
       }
       else if(opti == "download&exec" || opti == "downloadandexecute"){
            cout <<
                    "\t\tlink\t" <<  "\tSource to download exe\t" << args1 << "\n\n";
       }
       else if(opti == "read" || opti == "chmod"){
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
       }
       else if(opti == "tcp_bind"){
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
       }
       else if(opti == "reverse_tcp" || opti == "reverse_tcp2"){
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
       }
       else if(opti == "messagebox"){
            cout <<
                    "\t\tmessage\t" <<  "\tMessage Box Text\t" << args1 << "\n\n";
       }
       else{
            cout <<
                    "\n\t\tNo option. Just use generate.\n\n";

       }

    }
    else if(strcmp(usecmd2, "set") == 0){
        // Include set command .assets...
        #include "set.cpp"
    }
    else if(strcmp(usecmd2, "unset") == 0){
        // Include unset command .assets...
        #include "unset.cpp"
    }
    else if(strcmp(usecmd, "generate") == 0){

        if(sjsj == 1){
            if(args1 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(sjsj, oskaka, opti, args1, args2); }
        }
        else if(sjsj == 2){
            if(args1 == "None" || args2 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(sjsj, oskaka, opti, args1, args2); }
        }
        else if(sjsj == 3){
            if(args1 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(sjsj, oskaka, opti, args1, args2); }
        }
        else if(sjsj == 4){ genshellcode(sjsj, oskaka, opti, args1, args2); }
        else if(sjsj == 5){
            if(args1 == "None" || args2 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(2, oskaka, opti, args2, args1); }
        }

    }
    else if(strcmp(usecmd2, "output") == 0){
        // Shellcode output ..
        #include "output.cpp"
    }

    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
