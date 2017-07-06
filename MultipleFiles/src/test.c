#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"
#include "libbase.h"

void p(char *);
void p(char *);
void p(char *);
void p(char *);  //prototype can have duplication

//static void fatherInside(){
//}

int main(int argc, char **argv){
    
    p("test.c\n");     //test.c 
    //fatherInside();  //test.c  
    
    father();          //lib.c
    //fatherInside();  //lib.c  
                          //Static function cannot be seen
                          //Compile will show warning 
                          //  warning: ‘fatherInside’ declared ‘static’ but never defined
                          //This is because we include lib.h to notify there is a static function,
                          //but static function only can be used in that .c file,
                          //so the compiler will think we should implement fatherInside() in test.c 
                          //but acutally we implement and use it in lib.c 
                          //and we don't have intention to use it test.c 
    
    grandpa();         //libbase.c

    return 0;
}
void p(char* msg){
    printf("%s",msg);
}
