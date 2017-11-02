#include <stdio.h>

/*
Compiling instructions
$ gcc input_file.c -o output
If you don't see any output, we're all good!
Now to run the program,
$ ./output 
Note: ./my_executable is how you execute an executable in the current directory
*/

/*
mbl-12615:notes venetyaevans$ gcc hello_world.c -o hello_world
mbl-12615:notes venetyaevans$ ls
hello_world     hello_world.c
mbl-12615:notes venetyaevans$ ./hello_world
Hello, world!
*/

int main(){
    printf("Hello, world!\n");
    return 0;
}