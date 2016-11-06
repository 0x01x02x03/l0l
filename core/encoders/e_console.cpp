do {
    string ecmd;
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

    getline(cin, ecmd); char* usecmd = strdup(ecmd.c_str());

    if      (cin.eof()) closeApp();
    else if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');
    else if (strcmp(usecmd, "back") == 0) goto mainConsole;
    else if (strcmp(usecmd, "help") == 0) encoderHelp();
    else if (strcmp(usecmd,"banner") == 0) banner();
    else if (strcmp(usecmd,"exit") == 0) closeApp();
    else if (strcmp(usecmd, "clear") == 0) clear();
    else if (strcmp(usecmd,"os") == 0){
        rlutil::setColor(15); // White Color
        str2 =  shorter(usecmd,3);
        if (usecmd[3] == '\0') osCommand();
        else system(str2);
        putchar('\n');
    }
    else {
        rlutil::setColor(12); // Red Color
        printf("[-] Unknown command: %s\n", usecmd);
    }
} while(1);
