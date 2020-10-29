#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main( int argc, char *argv[])
{
    int numThreads = atoi(argv[1]);

    #pragma omp parallel num_threads(numThreads)
    printf("hello, world.\n");

    return 0;
}

