void banner(){
    
    int shellcodeP = 48,
        encodersP = 0,
        injectorP = 0,
        backdoorsP = 6,
        differentOsP = 11;

    srand ( time(NULL) );
    int x = rand() % 5 + 1 ;
    char kaka;
    FILE *fp;
    if(x == 1) {
        fp = fopen("core/banner/logo1.txt","r");
    } 
    else if(x == 2){
        fp = fopen("core/banner/logo2.txt", "r");
    }
    else if(x == 3){
        fp = fopen("core/banner/logo3.txt", "r");
    }
    else if(x == 4){
        fp = fopen("core/banner/logo4.txt", "r");
    }
    else if(x == 5){
        fp = fopen("core/banner/logo5.txt", "r");
    }

    rlutil::setColor(12); // Red Color
    
    while((kaka = fgetc(fp))!=EOF){
        printf("%c",kaka);
    }
    
    fclose(fp);

    putchar('\n');

    // Red Color - rlutil::setColor(12);
    // Green Color - rlutil::setColor(2);

    rlutil::setColor(2);
    printf("        =[ l0l            -");
    rlutil::setColor(12);
    printf("  BETA                               ");
    rlutil::setColor(2);
    printf("]\n");

    printf(" + -- --=[ %d shellcode   -", shellcodeP);
    rlutil::setColor(12);
    printf("  %d Different OS                    ", differentOsP);
    rlutil::setColor(2);
    printf("]\n");


    printf(" + -- --=[ %d encoders     -", encodersP);
    rlutil::setColor(12);
    printf("  (Shellcodes/executable files)      ");
    rlutil::setColor(2);
    printf("]\n");


    printf(" + -- --=[ %d injector     -", injectorP);
    rlutil::setColor(12);
    printf("  (PE,ELF,DLL,RAR,DEB etc...)        ");
    rlutil::setColor(2);
    printf("]\n");

    printf(" + -- --=[ %d backdoors    -", backdoorsP);
    rlutil::setColor(12);
    printf("  (ReverseShell)                     ");
    rlutil::setColor(2);
    printf("]\n");

    printf(" + -- --=[ Open Source    :");
    rlutil::setColor(12);
    printf("  https://github.com/m3pt0r/l0l      ");
    rlutil::setColor(2);
    printf("]\n");

    putchar('\n');

}
