#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main() {
    
    while (1) {
        system("cmd battery reset");
        system("dumpsys battery reset");
    }
    
    return 0;
}
