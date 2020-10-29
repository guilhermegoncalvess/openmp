#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main( int argc, char *argv[])
{
    #pragma omp parallel 
    {
        int nthreads, tid;

        tid = omp_get_thread_num();
        printf("hello, world from thread = %d \n", tid);
    
        if(tid == 0)
        {
            nthreads = omp_get_thread_num();
            printf("hello, world from thread = %d \n", tid);
        }
    }

    return 0;
}