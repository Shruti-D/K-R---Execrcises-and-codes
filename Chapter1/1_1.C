#include <stdio.h>

main(){
    printf("hello, world\n");
}

#Another way of producing the same output.
#include <stdio.h>

main(){
    printf("hello, ");
    printf("world");
    printf"\n");
}

#Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.
#include <stdio.h>

main(){
    printf("hello, world\c");
}

Output: 
hello, worldc
Compiler gives a warning: unknown escape sequence: \c
