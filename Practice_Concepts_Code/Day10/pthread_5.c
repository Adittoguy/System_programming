#include<stdio.h>
#include<pthread.h>

void * Demo(void * p)
{
    printf("Inside Thread\n");
    pthread_exit(NULL);
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
        printf("Thread gets created successfully with TID : %lu\n", (unsigned long)TID);
    }

    // wait
    pthread_join(TID, NULL);

    pthread_exit(NULL);

    printf("End of Main Thread\n");

    return 0;
}