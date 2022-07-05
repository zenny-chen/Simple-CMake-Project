#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <uchar.h>
#include <stdatomic.h>
#include <complex.h>

#include <dlfcn.h>

extern int ASMTest(int a, int b);

int main(int argc, const char* argv[])
{
    printf("6 - 2 = %d\n",  ASMTest(6, 2));   

    void *symHandle = dlopen("/lib/x86_64-linux-gnu/libdl.so.2", RTLD_NOW);
    if(symHandle == NULL)
    {
        puts("shared object file open failed!");
        return 0;
    }
    
    dlclose(symHandle);
}


