       // Linux x86

        if(modulen == "linux86/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_x86", "exec", args1, args2);

            }

        }

        else if(modulen == "linux86/download&execute")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(3, "linux_x86", "download&exec", args1, args2);

            }
        }

        else if(modulen == "linux86/binsh")
        {
            genshellcode(4, "linux_x86", "bin_sh", args1, args2);
        }


        else if(modulen == "linux86/read")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_x86", "read", args1, args2);

            }

        }

        else if(modulen == "linux86/chmod")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_x86", "chmod", args1, args2);

            }

        }

        else if(modulen == "linux86/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_x86", "tcp_bind", args1, args2);

            }

        }

        else if(modulen == "linux86/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "linux_x86", "reverse_tcp", args1, args2);

            }

        }

        // Linux 64

        else if(modulen == "linux64/binsh")
        {
            genshellcode(4, "linux_x64", "bin_sh", args1, args2);
        }

        else if(modulen == "linux64/read")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_x64", "read", args1, args2);

            }

        }

        else if(modulen == "linux64/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_x64", "tcp_bind", args1, args2);

            }

        }

        else if(modulen == "linux64/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "linux_x64", "reverse_tcp", args1, args2);

            }

        }

        // Linux x86_64

        else if(modulen == "linux/binsh")
        {
            genshellcode(4, "linux", "bin_sh", args1, args2);
        }

        else if(modulen == "linux/read")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux", "read", args1, args2);

            }

        }

        else if(modulen == "linux/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux", "tcp_bind", args1, args2);

            }

        }

        else if(modulen == "linux/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "linux", "reverse_tcp", args1, args2);

            }

        }

        // Linux ARM

        else if(modulen == "linux_arm/binsh")
        {
            genshellcode(4, "linux_arm", "bin_sh", args1, args2);
        }

        else if(modulen == "linux_arm/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_arm", "exec", args1, args2);

            }

        }

        else if(modulen == "linux_arm/chmod")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_arm", "chmod", args1, args2);

            }

        }

        else if(modulen == "linux_arm/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "linux_arm", "reverse_tcp", args2, args1);

            }

        }

        // Linux MIPS

        else if(modulen == "linux_mips/binsh")
        {
            genshellcode(4, "linux_mips", "bin_sh", args1, args2);
        }

        else if(modulen == "linux_mips/chmod")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_mips", "chmod", args1, args2);

            }

        }

        else if(modulen == "linux_mips/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "linux_mips", "tcp_bind", args1, args2);

            }

        }


        // Solaris x86

        else if(modulen == "solarisx86/binsh")
        {
            genshellcode(4, "solarisx86", "bin_sh", args1, args2);
        }

        else if(modulen == "solarisx86/read")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "solarisx86", "read", args1, args2);

            }

        }

        else if(modulen == "solarisx86/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "solarisx86", "reverse_tcp", args1, args2);

            }

        }

        else if(modulen == "solarisx86/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "solarisx86", "tcp_bind", args1, args2);

            }

        }

        // Windows

        else if(modulen == "windows/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "windows", "exec", args1, args2);

            }

        }
        else if(modulen == "windows/messagebox")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "windows", "messagebox", args1, args2);

            }
        }
        else if(modulen == "windows/download&execute")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(3, "windows", "downloadandexecute", args1, args2);

            }
        }

        else if(modulen == "windows/reverse_tcp")
        {

            if(args1 == "None" || args2 == "None"){
                cout << "\nSet options before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "windows", "reverse_tcp", args1, args2);

            }
        }

        else if(modulen == "windows/tcp_bind")
        {

            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "windows", "tcp_bind", args1, args2);

            }
        }

        // OSX x86

        else if(modulen == "osx86/binsh")
        {
            genshellcode(4, "osx86", "bin_sh", args1, args2);
        }

        else if(modulen == "osx86/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "osx86", "reverse_tcp", args1, args2);

            }

        }

        else if(modulen == "osx86/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "osx86", "tcp_bind", args1, args2);

            }

        }

        // OSX x64

        else if(modulen == "osx64/binsh")
        {
            genshellcode(4, "osx64", "bin_sh", args1, args2);
        }

        else if(modulen == "osx64/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "osx64", "reverse_tcp", args1, args2);

            }

        }

        else if(modulen == "osx64/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "osx64", "tcp_bind", args1, args2);

            }

        }

        // FreeBSD x86

        else if(modulen == "FreeBSDx86/binsh")
        {
            genshellcode(4, "freebsd_x86", "bin_sh", args1, args2);
        }

        else if(modulen == "FreeBSDx86/read")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "freebsd_x86", "read", args1, args2);

            }

        }

        else if(modulen == "FreeBSDx86/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "freebsd_x86", "tcp_bind", args1, args2);

            }

        }

        else if(modulen == "FreeBSDx86/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "freebsd_x86", "reverse_tcp", args2, args1);

            }

        }

        else if(modulen == "FreeBSDx86/reverse_tcp2")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "freebsd_x86", "reverse_tcp", args2, args1);

            }

        }

        else if(modulen == "FreeBSDx86/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "freebsd_x86", "exec", args1, args2);

            }

        }


        // FreeBSD x64

        else if(modulen == "FreeBSDx64/binsh")
        {
            genshellcode(4, "freebsd_x64", "bin_sh", args1, args2);
        }

        else if(modulen == "FreeBSDx64/tcp_bind")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "freebsd_x64", "tcp_bind", args1, args2);

            }

        }

        else if(modulen == "FreeBSDx64/reverse_tcp")
        {
            if(args1 == "None" || args2 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "freebsd_x64", "reverse_tcp", args1, args2);

            }

        }

        else if(modulen == "FreeBSDx64/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "freebsd_x64", "exec", args1, args2);

            }

        }

        // ..
