#include <iostream>
#include <cstdio>
#include <malloc.h>

using namespace std;

int main()
{
    char *ptr;

    if ((ptr = (char*)malloc(0)) == NULL) {
        puts("Got a NULL porinter");
    } else {
        ///< 得到一个非空的指针
        puts("Got a valid porinter");
    }

    free(ptr);

    return 0;
}
