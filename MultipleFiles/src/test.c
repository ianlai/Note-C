#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"
#include "libbase.h"

void p(char *);
void p(char *);
void p(char *);
void p(char *);  //prototype can have duplication

int main(int argc, char **argv){
    
    p("test.c\n");   
    
    father();
    //fatherInside();  //static function cannot be seen
    
    grandpa();
    
}
void p(char* msg){
    printf("%s",msg);
}
