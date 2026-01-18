#include<stdio.h>
#include<pthread.h>

void * Demo(void * p)
{
    printf("Inside Thread\n");
    return NULL;                        // Good Programming practice
}

int main()
{
    pthread_t TID;
    int iRet = 0;

    printf("Main Thread Started\n");

    iRet = pthread_create(
                            &TID,       // Thread ID
                            NULL,       // Thread attributes
                            Demo,       // Thread Callback Function
                            NULL        // Parameters for the Callback Function
                         );

    if(iRet == 0)
    {
        printf("Thread gets created successfully\n");
    }

    // wait
    

    printf("End of Main Thread\n");

    return 0;
}