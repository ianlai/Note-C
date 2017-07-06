#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

int myvar = 10;

void print_lib(){
    printf("print_lib\n");
    printf("%d\n",myvar);
}

void createAndPrintNode(){
    Node n;
    n.id = 100;
    printf("ID:%d\n", n.id);
}

