// Shellcodes


// Linux x86

else if(strcmp(str, "linux86/exec") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}

else if(strcmp(str, "linux86/download&execute") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}

else if(strcmp(str, "linux86/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}

else if(strcmp(str, "linux86/read") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}

else if(strcmp(str, "linux86/chmod") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}

else if(strcmp(str, "linux86/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}

else if(strcmp(str, "linux86/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x86";
}



// Linux x64

else if(strcmp(str, "linux64/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x64";
}

else if(strcmp(str, "linux64/read") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x64";
}

else if(strcmp(str, "linux64/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x64";
}

else if(strcmp(str, "linux64/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_x64";
}


// Linux x86_64

else if(strcmp(str, "linux/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux";
}

else if(strcmp(str, "linux/read") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux";
}

else if(strcmp(str, "linux/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux";
}

else if(strcmp(str, "linux/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux";
}


// Linux ARM

else if(strcmp(str, "linux_arm/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_arm";
}

else if(strcmp(str, "linux_arm/exec") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_arm";
}

else if(strcmp(str, "linux_arm/chmod") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_arm";
}

else if(strcmp(str, "linux_arm/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_arm";
}


// Linux MIPS

else if(strcmp(str, "linux_mips/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_mips";
}

else if(strcmp(str, "linux_mips/chmod") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_mips";
}

else if(strcmp(str, "linux_mips/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="linux_mips";
}

// Solaris x86

else if(strcmp(str, "solarisx86/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="solarisx86";
}

else if(strcmp(str, "solarisx86/read") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="solarisx86";
}

else if(strcmp(str, "solarisx86/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="solarisx86";
}

else if(strcmp(str, "solarisx86/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="solarisx86";
}

//Windows

else if(strcmp(str, "windows/exec") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="windows";
}

else if(strcmp(str, "windows/messagebox") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="windows";
}

else if(strcmp(str, "windows/download&execute") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="windows";
}

else if(strcmp(str, "windows/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="windows";
}

else if(strcmp(str, "windows/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="windows";
}

// OSX x86

else if(strcmp(str, "osx86/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="osx86";
}

else if(strcmp(str, "osx86/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="osx86";
}

else if(strcmp(str, "osx86/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="osx86";
}

// OSX x64

else if(strcmp(str, "osx64/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="osx64";
}

else if(strcmp(str, "osx64/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="osx64";
}

else if(strcmp(str, "osx64/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="osx64";
}

// FreeBSD x86

else if(strcmp(str, "FreeBSDx86/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x86";
}

else if(strcmp(str, "FreeBSDx86/read") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x86";
}

else if(strcmp(str, "FreeBSDx86/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x86";
}

else if(strcmp(str, "FreeBSDx86/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x86";
}

else if(strcmp(str, "FreeBSDx86/reverse_tcp2") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x86";
}

else if(strcmp(str, "FreeBSDx86/exec") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x86";
}

// FreeBSD x64

else if(strcmp(str, "FreeBSDx64/binsh") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x64";
}

else if(strcmp(str, "FreeBSDx64/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x64";
}

else if(strcmp(str, "FreeBSDx64/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x64";
}

else if(strcmp(str, "FreeBSDx64/exec") == 0){
    usetxt=str;
    type = "shellcode"; oskaka="freebsd_x64";
}
