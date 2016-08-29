/**
    l0l - The Exploit Development Kit
    Authors:roissy
    Greetz:B3mB4m
*/

do{
    string scmd;
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
    rlutil::setColor(15);

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
        // Include show options command .assets...
        #include "options.cpp"
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
        // Include generate command .assets...
        #include "generate.cpp"
    }
    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
