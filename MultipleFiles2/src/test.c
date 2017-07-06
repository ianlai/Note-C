#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

int main(int argc, char **argv){
    print_lib();          
    createAndPrintNode();

    Node n;
    n.id = 200;
    printf("ID:%d\n", n.id);
    return 0;
}

