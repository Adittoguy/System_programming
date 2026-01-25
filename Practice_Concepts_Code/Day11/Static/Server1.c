#include<stdio.h>
#include<stdlib.h>

int Addition(int A, int B);
int Substraction(int A, int B);

int main()
{
    int iRet = 0;

    iRet = Addition(11, 10);
    printf("Addition is : %d\n", iRet);

    iRet = Substraction(11, 10);
    printf("Substraction is : %d\n", iRet);
    
    return 0;
}


/*

ar rcs libClient1.a Client1.o

ar = archive utility

r = Replace
c = create
s = Symbol index

*/