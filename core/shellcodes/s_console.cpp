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
    else if(strcmp(usecmd2, "output") == 0){
        // Shellcode output command ..

        str2 = shorter(usecmd2,7);
        controller = str2;

        if(str2[0] == '\0'){
            outputCommand();
        }else{

        if(controller == "exe" || controller == "c" || controller == "cpp" || controller == "txt" || controller == "raw" || controller == "py" ){


        if( oskaka == "linux_x86" ){

            // Linux x86

            if(modulen == "linux86/exec")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_x86", "exec", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_x86", "exec", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_x86", "exec", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_x86", "exec", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_x86", "exec", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_x86", "exec", args1, args2);

                }

            }

            else if(modulen == "linux86/download&execute")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(3, "exe", "linux_x86", "download&exec", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(3, "c", "linux_x86", "download&exec", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(3, "cpp", "linux_x86", "download&exec", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(3, "txt", "linux_x86", "download&exec", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(3, "raw", "linux_x86", "download&exec", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(3, "py", "linux_x86", "download&exec", args1, args2);

                }
            }

            else if(modulen == "linux86/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "linux_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "linux_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "linux_x86", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "linux_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "linux_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "linux_x86", "bin_sh", args1, args2);

            }

            else if(modulen == "linux86/read")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_x86", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_x86", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_x86", "read", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_x86", "read", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_x86", "read", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_x86", "read", args1, args2);
                }

            }

            else if(modulen == "linux86/chmod")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_x86", "chmod", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_x86", "chmod", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_x86", "chmod", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_x86", "chmod", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_x86", "chmod", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_x86", "chmod", args1, args2);

                }

            }

            else if(modulen == "linux86/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_x86", "tcp_bind", args1, args2);

                }

            }

            else if(modulen == "linux86/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "linux_x86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "linux_x86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "linux_x86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "linux_x86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "linux_x86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "linux_x86", "reverse_tcp", args1, args2);

                }

            }

            //..
        }

        else if( oskaka == "linux_x64" ){

            // Linux x64

            if(modulen == "linux64/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "linux_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "linux_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "linux_x64", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "linux_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "linux_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "linux_x64", "bin_sh", args1, args2);

            }

            else if(modulen == "linux64/read")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_x64", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_x64", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_x64", "read", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_x64", "read", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_x64", "read", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_x64", "read", args1, args2);

                }

            }

            else if(modulen == "linux64/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_x64", "tcp_bind", args1, args2);

                }

            }

            else if(modulen == "linux64/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "linux_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "linux_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "linux_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "linux_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "linux_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "linux_x64", "reverse_tcp", args1, args2);

                }

            }

            //..
        }

        else if( oskaka == "linux" ){

            // Linux x86_64

            if(modulen == "linux/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "linux", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "linux", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "linux", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "linux", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "linux", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "linux", "bin_sh", args1, args2);

            }

            else if(modulen == "linux/read")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux", "read", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux", "read", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux", "read", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux", "read", args1, args2);

                }

            }


            else if(modulen == "linux/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux", "tcp_bind", args1, args2);

                }

            }

            else if(modulen == "linux/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "linux", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "linux", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "linux", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "linux", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "linux", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "linux", "reverse_tcp", args1, args2);

                }

            }

            //..
        }

        else if( oskaka == "linux_arm" ){

            // Linux ARM

            if(modulen == "linux_arm/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "linux_arm", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "linux_arm", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "linux_arm", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "linux_arm", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "linux_arm", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "linux_arm", "bin_sh", args1, args2);

            }

            else if(modulen == "linux_arm/exec")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_arm", "exec", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_arm", "exec", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_arm", "exec", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_arm", "exec", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_arm", "exec", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_arm", "exec", args1, args2);

                }

            }

            else if(modulen == "linux_arm/chmod")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_arm", "chmod", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_arm", "chmod", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_arm", "chmod", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_arm", "chmod", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_arm", "chmod", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_arm", "chmod", args1, args2);

                }

            }

            else if(modulen == "linux_arm/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "linux_arm", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "linux_arm", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "linux_arm", "reverse_tcp", args2, args1);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "linux_arm", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "linux_arm", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "linux_arm", "reverse_tcp", args2, args1);

                }

            }

            //..
        }

        else if( oskaka == "linux_mips" ){

            // Linux MIPS

            if(modulen == "linux_mips/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "linux_mips", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "linux_mips", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "linux_mips", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "linux_mips", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "linux_mips", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "linux_mips", "bin_sh", args1, args2);

            }

            else if(modulen == "linux_mips/chmod")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_mips", "chmod", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_mips", "chmod", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_mips", "chmod", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_mips", "chmod", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_mips", "chmod", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_mips", "chmod", args1, args2);

                }

            }

            else if(modulen == "linux_mips/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "linux_mips", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "linux_mips", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "linux_mips", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "linux_mips", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "linux_mips", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "linux_mips", "tcp_bind", args1, args2);

                }

            }

            //..
        }

        else if( oskaka == "solarisx86" ){

        // Solaris x86

            if(modulen == "solarisx86/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "solarisx86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "solarisx86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "solarisx86", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "solarisx86", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "solarisx86", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "solarisx86", "bin_sh", args1, args2);

            }

            else if(modulen == "solarisx86/read")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "solarisx86", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "solarisx86", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "solarisx86", "read", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "solarisx86", "read", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "solarisx86", "read", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "solarisx86", "read", args1, args2);

                }

            }

            else if(modulen == "solarisx86/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "solarisx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "solarisx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "solarisx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "solarisx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "solarisx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "solarisx86", "reverse_tcp", args1, args2);

                }

            }

            else if(modulen == "solarisx86/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "solarisx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "solarisx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "solarisx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "solarisx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "solarisx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "solarisx86", "tcp_bind", args1, args2);

                }

            }

            //..
        }
        else if( oskaka == "windows" ){

            // Windows

            if(modulen == "windows/messagebox")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{
                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "windows", "messagebox", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "windows", "messagebox", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "windows", "messagebox", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "windows", "messagebox", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "windows", "messagebox", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "windows", "messagebox", args1, args2);
                    else if(str2[0] == 'd' && str2[1] == 'l' && str2[2] == 'l' && str2[3] == '\0')
                        output(1, "dll", "windows", "messagebox", args1, args2);

                }
            }
            else if(modulen == "windows/download&execute")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(3, "exe", "windows", "downloadandexecute", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(3, "c", "windows", "downloadandexecute", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(3, "cpp", "windows", "downloadandexecute", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(3, "txt", "windows", "downloadandexecute", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(3, "raw", "windows", "downloadandexecute", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(3, "py", "windows", "downloadandexecute", args1, args2);
                    else if(str2[0] == 'd' && str2[1] == 'l' && str2[2] == 'l' && str2[3] == '\0')
                        output(3, "dll", "windows", "downloadandexecute", args1, args2);

                }
            }

            else if(modulen == "windows/reverse_tcp")
            {

                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet options before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "windows", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "windows", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "windows", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "windows", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "windows", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "windows", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'd' && str2[1] == 'l' && str2[2] == 'l' && str2[3] == '\0')
                        output(2, "dll", "windows", "reverse_tcp", args1, args2);

                }
            }

            else if(modulen == "windows/tcp_bind")
            {

                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "windows", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "windows", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "windows", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "windows", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "windows", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "windows", "tcp_bind", args1, args2);
                    else if(str2[0] == 'd' && str2[1] == 'l' && str2[2] == 'l' && str2[3] == '\0')
                        output(1, "dll", "windows", "tcp_bind", args1, args2);

                }
            }

            //..
        }

        else if( oskaka == "osx86" ){

            // OSX 86

            if(modulen == "osx86/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "osx86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "osx86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "osx86", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "osx86", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "osx86", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "osx86", "bin_sh", args1, args2);

            }

            else if(modulen == "osx86/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "osx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "osx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "osx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "osx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "osx86", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "osx86", "reverse_tcp", args1, args2);

                }

            }

            else if(modulen == "osx86/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "osx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "osx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "osx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "osx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "osx86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "osx86", "tcp_bind", args1, args2);

                }

            }

            //..
        }
        else if( oskaka == "osx64" ){

            // OSX 64

            if(modulen == "osx64/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "osx64", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "osx64", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "osx64", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "osx64", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "osx64", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "osx64", "bin_sh", args1, args2);

            }

            else if(modulen == "osx64/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "osx64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "osx64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "osx64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "osx64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "osx64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "osx64", "reverse_tcp", args1, args2);

                }

            }

            else if(modulen == "osx64/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "osx64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "osx64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "osx64", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "osx64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "osx64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "osx64", "tcp_bind", args1, args2);

                }

            }

            //..
        }

        else if( oskaka == "freebsd_x86" ){

            // FreeBSD x86

            if(modulen == "FreeBSDx86/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "freebsd_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "freebsd_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "freebsd_x86", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "freebsd_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "freebsd_x86", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "freebsd_x86", "bin_sh", args1, args2);

            }

            else if(modulen == "FreeBSDx86/read")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "freebsd_x86", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "freebsd_x86", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "freebsd_x86", "read", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "freebsd_x86", "read", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "freebsd_x86", "read", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "freebsd_x86", "read", args1, args2);

                }

            }

            else if(modulen == "FreeBSDx86/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "freebsd_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "freebsd_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "freebsd_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "freebsd_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "freebsd_x86", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "freebsd_x86", "tcp_bind", args1, args2);

                }

            }

            else if(modulen == "FreeBSDx86/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "freebsd_x86", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "freebsd_x86", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "freebsd_x86", "reverse_tcp", args2, args1);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "freebsd_x86", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "freebsd_x86", "reverse_tcp", args2, args1);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "freebsd_x86", "reverse_tcp", args2, args1);

                }

            }

            else if(modulen == "FreeBSDx86/reverse_tcp2")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "freebsd_x86", "reverse_tcp2", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "freebsd_x86", "reverse_tcp2", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "freebsd_x86", "reverse_tcp2", args2, args1);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "freebsd_x86", "reverse_tcp2", args2, args1);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "freebsd_x86", "reverse_tcp2", args2, args1);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "freebsd_x86", "reverse_tcp2", args2, args1);

                }

            }

            else if(modulen == "FreeBSDx86/exec")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "freebsd_x86", "exec", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "freebsd_x86", "exec", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "freebsd_x86", "exec", args2, args1);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "freebsd_x86", "exec", args2, args1);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "freebsd_x86", "exec", args2, args1);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "freebsd_x86", "exec", args2, args1);

                }

            }

            //..
        }
        else if( oskaka == "freebsd_x64" ){

            // FreeBSD x64

            if(modulen == "FreeBSDx64/binsh")
            {

                if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                    output(4, "exe", "freebsd_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == '\0')
                    output(4, "c", "freebsd_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                    output(4, "cpp", "freebsd_x64", "bin_sh", args1, args2);
                else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                    output(4, "txt", "freebsd_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                    output(4, "raw", "freebsd_x64", "bin_sh", args1, args2);
                else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                    output(4, "py", "freebsd_x64", "bin_sh", args1, args2);

            }

            else if(modulen == "FreeBSDx64/read")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "freebsd_x64", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "freebsd_x64", "read", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "freebsd_x64", "read", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "freebsd_x64", "read", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "freebsd_x64", "read", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "freebsd_x64", "read", args1, args2);

                }

            }

            else if(modulen == "FreeBSDx64/tcp_bind")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "freebsd_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "freebsd_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "freebsd_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "freebsd_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "freebsd_x64", "tcp_bind", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "freebsd_x64", "tcp_bind", args1, args2);

                }

            }

            else if(modulen == "FreeBSDx64/reverse_tcp")
            {
                if(args1 == "None" || args2 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(2, "exe", "freebsd_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(2, "c", "freebsd_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(2, "cpp", "freebsd_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(2, "txt", "freebsd_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(2, "raw", "freebsd_x64", "reverse_tcp", args1, args2);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(2, "py", "freebsd_x64", "reverse_tcp", args1, args2);

                }

            }

            else if(modulen == "FreeBSDx64/exec")
            {
                if(args1 == "None"){
                    cout << "\nSet option before output shellcode.\n\n";
                }
                else{

                    if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                        output(1, "exe", "freebsd_x64", "exec", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == '\0')
                        output(1, "c", "freebsd_x64", "exec", args2, args1);
                    else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                        output(1, "cpp", "freebsd_x64", "exec", args2, args1);
                    else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                        output(1, "txt", "freebsd_x64", "exec", args2, args1);
                    else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                        output(1, "raw", "freebsd_x64", "exec", args2, args1);
                    else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                        output(1, "py", "freebsd_x64", "exec", args2, args1);

                }

            }

            //..
        }


    }  else {

            // Set Red Color
            rlutil::setColor(12);
            printf("[-] Unknown output type: %s\n", str2);

            }

            // :D yeah baby
        }

    }

    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
