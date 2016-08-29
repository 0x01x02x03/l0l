// Shellcode Functions..

void genshellcode(int argp, string os, string type, string a1, string a2)
{
    string session;

    session="from core.database.generator import *\n";
    session += "input = \"";
    session += a1;
    session += "\"\n";
    session += "os = \"";
    session += os;
    session += "\"\n";
    session += "shelltype = \"";
    session += type;
    session += "\"\n\n";

    if( argp == 1 ){
        session += "shellcode = generator( os, shelltype, input)\n";
    }
    else if( argp == 2 ){

        session += "input2 = \"";
        session += a2;
        session += "\"\n";

        session += "shellcode = generator( os, shelltype, input, input2)\n";

    }
    else if( argp == 3 ){

        session += "input2 = \"";
        session += a2;
        session += "\"\n";
        session += "shellcode = generator( os, shelltype, argv=input, argv2=input2)\n";

    }
    else if( argp == 4 ){

        session += "shellcode = generator( os, shelltype )\n";

    }

        session +=
                    "lenlen = len(shellcode)\n"
                    "print \"Shellcode lenght: %s\" % lenlen\n"
                    "print \"\"\n";

        session +=
                    "b = shellcode.split(\"\\\\\")\n"
                    "x = 1\n"
                    "p = (len(b)/15)+1\n"
                    "loplop = 1\n"
                    "for i in range((len(b)/15)+1):\n"
                        "\tj = b[x:x+15]\n"
                        "\tline = \"\"\n"
                        "\tfor k in range(len(j)):\n"
                            "\t\tline += \"\\\\\"+j[k]\n"
                        "\tif p != loplop:\n"
                            "\t\tprint '\t\"'+line+'\"+'\n"
                        "\telse:\n"
                            "\t\tprint '\t\"'+line+'\";'\n"
                        "\tx += 10\n"
                        "\tloplop += 1";


    char filename[] = "session.py";
    std::ofstream outfile (filename);
    outfile << session;
    outfile.close();

    cout << "\n";

    #ifdef OS_Windows
        system("python session.py");
    #else
        system("python2 session.py");
    #endif


    cout << "\n";
    remove("session.py");


}
