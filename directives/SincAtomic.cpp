#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    int count = 0;
    
    #pragma omp parallel num_threads(MAX)
    {
        #pragma omp atomic
        count++;
    }
    
    return 0;
}    
    
    