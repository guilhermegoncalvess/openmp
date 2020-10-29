#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    int i;

    #pragma omp for nowait
    for( i=0; i < N; i++)
    {
        v1[i]=1;
    }
    
    return 0;
}