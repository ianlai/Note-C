#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

static void fatherInside(){
    printf("lib.c\n");
}

void father(){
    fatherInside();
}

