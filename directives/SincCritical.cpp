#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    float sum=0;
    int i;

    #pragma omp parallel for
    for( i=1; i<10; i++)
    {
        #pragma omp critical
        {
            sum= sum + i;
        }
    }
    
    cout << sum;
    return 0;
}    
