#include<stdio.h>
int main()
{
    int x=10,y=20,z;
    z=++x + ++y;
    printf("z is %d \n",z);

    // ++x = 11  ++y = 21 then answer is 32
}
