do{
    string icmd;
    char *str2;

    rlutil::setColor(9);    // Blue Color
    cout << "l0l";
    rlutil::setColor(8);    // Gray Color
    cout << ":";
    rlutil::setColor(7);    // White Color
    cout << "encoder(";
    rlutil::setColor(12);   // Red Color
    cout << usetxt;
    rlutil::setColor(7);    // White Color
    cout << ")";
    rlutil::setColor(9);    // Blue Color
    cout << " > ";
    rlutil::setColor(7);    // White Color

    getline(cin, icmd); 
    char* usecmd = strdup(icmd.c_str());

    if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');
    
    else if (cin.eof()){
        closeApp();
    }
    else if (!strcmp(usecmd, "back")){
        goto mainConsole;
    }
    else if (!strcmp(usecmd, "help")){
        injectorHelp();
    }
    else if (!strcmp(usecmd,"banner")){
        banner();
    }
    else if (!strcmp(usecmd,"exit")){
        closeApp();
    }
    else if (!strcmp(usecmd, "clear")){
        clear();
    }
    else if (!strcmp(usecmd,"os")){
        rlutil::setColor(15); // White Color
        str2 =  shorter(usecmd,3);
        if (usecmd[3] == '\0'){
            osCommand();
        } else {
            system(str2);
        }
        putchar('\n');
    }
    else {
        rlutil::setColor(12); // Red Color
        printf("[-] Unknown command: %s\n", usecmd);
    }
}while(1);
