#include<stdio.h>
int main()
{
    int x=5,y=7,z;
    z=x-- - --y;
    printf("z is %d \n",z);

    // z = 5(5 is same) - (7-1) = -1
}
