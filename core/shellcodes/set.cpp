        str2 = shorter(usecmd2,4);



        // Linux x86

        if(modulen == "linux86/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' )
            {
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux86/download&execute")
        {

            if( str2[0] == 'l' && str2[1] == 'i' && str2[2] == 'n' && str2[3] == 'k' && str2[4] == ' ' ){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nlink => " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "linux86/read")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux86/chmod")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux86/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        else if(modulen == "linux86/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        // Linux x64

        else if(modulen == "linux64/read")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux64/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        else if(modulen == "linux64/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        // Linux x86_64

        else if(modulen == "linux/read")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        else if(modulen == "linux/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        // Linux ARM

        else if(modulen == "linux_arm/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' )
            {
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux_arm/chmod")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "linux_arm/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        // Linux MIPS

        else if(modulen == "linux_mips/chmod")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }


        else if(modulen == "linux_mips/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        // Solaris x86

        else if(modulen == "solarisx86/read")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "solarisx86/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "solarisx86/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        // Windows

        else if(modulen == "windows/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' )
            {
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "windows/messagebox")
        {

            if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[6] == 'e' && str2[7] == ' ' ){
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\nmessage => " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "windows/download&execute")
        {

            if( str2[0] == 'l' && str2[1] == 'i' && str2[2] == 'n' && str2[3] == 'k' && str2[4] == ' ' ){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nlink => " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "windows/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "windows/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        // OSX x86

        else if(modulen == "osx86/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "osx86/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        // OSX x64

        else if(modulen == "osx64/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "osx64/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        // FreeBSD x86

        else if(modulen == "FreeBSDx86/read")
        {
            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' )
            {
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "FreeBSDx86/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        else if(modulen == "FreeBSDx86/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "FreeBSDx86/reverse_tcp2"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "FreeBSDx86/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' )
            {
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        // FreeBSD x64

        else if(modulen == "FreeBSDx64/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        else if(modulen == "FreeBSDx64/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost => " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport => " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "FreeBSDx64/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' )
            {
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }
