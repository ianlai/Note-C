# Multiple Files and Makefile

We can compile the files in three ways as the follows
```
1. cd src; gcc test.c lib.c libbase.c -I../include -o ../run
```
```
2. gcc src/test.c src/lib.c src/libbase.c -Iinclude -o run 
```
```
3. 
   gcc -c src/test.c -o src/test.o -Iinclude
   gcc -c src/lib.c -o src/lib.o -Iinclude
   gcc -c src/libbase.c -o src/libbase.o -Iinclude
   gcc src/test.o src/lib.o src/libbase.o -o run   //link
```
```
4. make
```
All of them will generate a run executable in the root directory.
