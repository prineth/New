#include<stdio.h>
int main()
{
    int i=5,j=6,k;
    k=--i - j--;
    printf("i is %d\n",i);
    printf("j is %d\n",j);
    printf("k is %d\n",k);

    // k = (5-1=4) - (j is same =6)    k = -6-4=-2
    // k=2 i=4 j=5

}
