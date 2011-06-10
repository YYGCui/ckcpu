#include <stdio.h>
#include <stdlib.h>

void check1()
{
    union w
    {
        int a;
        char b;
    }c;
    c.a=1;
    if(c.b==1)
        printf("check1:this is little-endian\n");
    else
        printf("check1:this is big-endian\n");
        
}
void check2()
{
    short int x;
    char x0,x1;
    x=0x1122;
    x0=((char*)&x)[0];
    x1=((char*)&x)[1];

    if (x0==0x11)
        printf("check2:this is big-endian\n");
    if (x1==0x11)
        printf("check2:this is little-endian\n");
}

int main()
{
    check1();
    check2();
    return 0;
}
