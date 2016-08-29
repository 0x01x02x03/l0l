        string required;

        if(strcmp(usecmd, ""))

        rlutil::setColor(2);
        cout <<
                "\n\tModule options (" << modulen << "):\n\n"
                "\t\tName\t" << "\tDescription" << "\t\tCurrent Setting\n"
                "\t\t----\t" "\t-----------\t" << "\t---------------\n";


        // Linux x86
        if(modulen == "linux86/exec")
        {
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";
        }
        else if(modulen == "linux86/download&execute")
        {
            cout <<
                    "\t\tlink\t" <<  "\tSource to download exe\t" << args1 << "\n\n";
        }
        else if(modulen == "linux86/read")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux86/chmod")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux86/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux86/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        // Linux x64
        else if(modulen == "linux64/read")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux64/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux64/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        // Linux x86_64
        else if(modulen == "linux/read")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        // Linux ARM

        else if(modulen == "linux_arm/exec")
        {
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";
        }
        else if(modulen == "linux_arm/chmod")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux_arm/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        // Linux MIPS

        else if(modulen == "linux_mips/chmod")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }
        else if(modulen == "linux_mips/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        // Solaris x86

        else if(modulen == "solarisx86/read")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }

        else if(modulen == "solarisx86/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        else if(modulen == "solarisx86/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        // Windows
        else if(modulen == "windows/exec")
        {
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";

        }
        else if(modulen == "windows/messagebox")
        {
            cout <<
                    "\t\tmessage\t" <<  "\tMessage Box Text\t" << args1 << "\n\n";
        }
        else if(modulen == "windows/download&execute")
        {
            cout <<
                    "\t\tlink\t" <<  "\tSource to download exe\t" << args1 << "\n\n";
        }
        else if(modulen == "windows/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }
        else if(modulen == "windows/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        // OSX x86

        else if(modulen == "osx86/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        else if(modulen == "osx86/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        // OSX x64

        else if(modulen == "osx64/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        else if(modulen == "osx64/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        // FreeBSD x86

        else if(modulen == "FreeBSDx86/read")
        {
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
        }

        else if(modulen == "FreeBSDx86/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        else if(modulen == "FreeBSDx86/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        else if(modulen == "FreeBSDx86/reverse_tcp2")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        else if(modulen == "FreeBSDx86/exec")
        {
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";
        }

        // FreeBSD x64

        else if(modulen == "FreeBSDx64/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
        }

        else if(modulen == "FreeBSDx64/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }

        else if(modulen == "FreeBSDx64/exec")
        {
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";
        }

        else {
            cout <<
                    "\t\tNo option. Just use generate.\n\n";
        }

        // ..
