//lib.h
#ifndef LIB_H
#define LIB_H

//------------------- Variable ------------------- 
// ERROR!
//int myvar = 10;  //This will cause error at linking phase
                   //Compiler will say "multiple definition"
                   //We can't prevent from this by include guard 
                   //because the multiple definitions are caused 
                   //in different compilation units (test.c & lib.c) 
                   //We should deal with this by not defining the var but only declaring

// CORRECT
extern int myvar;

//-------------------  Struct  ------------------- 

typedef struct _Node{
    int id;
} Node;

//------------------- Prototype ------------------ 

void print_lib();
void createAndPrintNode();

#endif /* LIB_H */

