// Linux x86

else if(!strcmp(str, "linux86/exec")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_x86";
    opti="exec";
}

else if(!strcmp(str, "linux86/download&execute")){
    usetxt=str;
    type = "shellcode";
    sjsj = 3;
    oskaka="linux_x86";
    opti="download&exec";
}

else if(!strcmp(str, "linux86/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="linux_x86";
    opti="bin_sh";
}

else if(!strcmp(str, "linux86/read")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_x86";
    opti="read";
}

else if(!strcmp(str, "linux86/chmod")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_x86";
    opti="chmod";
}

else if(!strcmp(str, "linux86/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_x86";
    opti="tcp_bind";
}

else if(!strcmp(str, "linux86/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="linux_x86";
    opti="reverse_tcp";
}

else if(!strcmp(str, "linux86/cd_eject")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="linux_x86";
    opti="cd_eject";
}

// Linux x64

else if(!strcmp(str, "linux64/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="linux_x64";
    opti="bin_sh";
}

else if(!strcmp(str, "linux64/read")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_x64";
    opti="read";
}

else if(!strcmp(str, "linux64/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_x64";
    opti="tcp_bind";
}

else if(!strcmp(str, "linux64/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="linux_x64";
    opti="reverse_tcp";
}

// Linux x86_64

else if(!strcmp(str, "linux/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="linux";
    opti="bin_sh";
}

else if(!strcmp(str, "linux/read")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux";
    opti="read";
}

else if(!strcmp(str, "linux/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux";
    opti="tcp_bind";
}

else if(!strcmp(str, "linux/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="linux";
    opti="reverse_tcp";
}

// Linux ARM

else if(!strcmp(str, "linux_arm/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="linux_arm";
    opti="bin_sh";
}

else if(!strcmp(str, "linux_arm/exec")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_arm";
    opti="exec";
}

else if(!strcmp(str, "linux_arm/chmod")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_arm";
    opti="chmod";
}

else if(!strcmp(str, "linux_arm/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 5;
    oskaka="linux_arm";
    opti="reverse_tcp";
}

// Linux MIPS

else if(!strcmp(str, "linux_mips/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="linux_mips";
    opti="bin_sh";
}

else if(!strcmp(str, "linux_mips/chmod")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_mips";
    opti="chmod";
}

else if(!strcmp(str, "linux_mips/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="linux_mips";
    opti="tcp_bind";
}

// Solaris x86

else if(!strcmp(str, "solarisx86/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="solarisx86";
    opti="bin_sh";
}

else if(!strcmp(str, "solarisx86/read")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="solarisx86";
    opti="read";
}

else if(!strcmp(str, "solarisx86/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="solarisx86";
    opti="reverse_tcp";
}

else if(!strcmp(str, "solarisx86/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="solarisx86";
    opti="tcp_bind";
}

//Windows

else if(!strcmp(str, "windows/exec")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="windows";
    opti="exec";
}

else if(!strcmp(str, "windows/messagebox")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="windows";
    opti="messagebox";
}

else if(!strcmp(str, "windows/download&execute")){
    usetxt=str;
    type = "shellcode";
    sjsj = 3;
    oskaka="windows";
    opti="downloadandexecute";
}

else if(!strcmp(str, "windows/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="windows";
    opti="reverse_tcp";
}

else if(!strcmp(str, "windows/tcp_bind")){
    usetxt=str;
    type = "shellcode"; oskaka="windows";
    sjsj = 1;
    oskaka="windows";
    opti="tcp_bind";
}

// OSX x86

else if(!strcmp(str, "osx86/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="osx86";
    opti="bin_sh";
}

else if(!strcmp(str, "osx86/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="osx86";
    opti="tcp_bind";
}

else if(!strcmp(str, "osx86/reverse_tcp")){
    usetxt=str;
    type = "shellcode"; oskaka="osx86";
    sjsj = 2;
    oskaka="osx86";
    opti="reverse_tcp";
}

// OSX x64

else if(!strcmp(str, "osx64/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="osx64";
    opti="bin_sh";
}

else if(!strcmp(str, "osx64/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="osx64";
    opti="tcp_bind";
}

else if(!strcmp(str, "osx64/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="osx64";
    opti="reverse_tcp";
}

// FreeBSD x86

else if(!strcmp(str, "FreeBSDx86/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="freebsd_x86";
    opti="bin_sh";
}

else if(!strcmp(str, "FreeBSDx86/read")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="freebsd_x86";
    opti="read";
}

else if(!strcmp(str, "FreeBSDx86/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="freebsd_x86";
    opti="tcp_bind";
}

else if(!strcmp(str, "FreeBSDx86/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 5;
    oskaka="freebsd_x86";
    opti="reverse_tcp";
}

else if(!strcmp(str, "FreeBSDx86/reverse_tcp2")){
    usetxt=str;
    type = "shellcode";
    sjsj = 5;
    oskaka="freebsd_x86";
    opti="reverse_tcp2";
}

else if(!strcmp(str, "FreeBSDx86/exec")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="freebsd_x86";
    opti="exec";
}

// FreeBSD x64

else if(!strcmp(str, "FreeBSDx64/binsh")){
    usetxt=str;
    type = "shellcode";
    sjsj = 4;
    oskaka="freebsd_x64";
    opti="bin_sh";
}

else if(!strcmp(str, "FreeBSDx64/tcp_bind")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="freebsd_x64";
    opti="tcp_bind";
}

else if(!strcmp(str, "FreeBSDx64/reverse_tcp")){
    usetxt=str;
    type = "shellcode";
    sjsj = 2;
    oskaka="freebsd_x64";
    opti="reverse_tcp";
}

else if(!strcmp(str, "FreeBSDx64/exec")){
    usetxt=str;
    type = "shellcode";
    sjsj = 1;
    oskaka="freebsd_x64";
    opti="exec";
}
