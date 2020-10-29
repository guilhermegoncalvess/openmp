#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    int i, j;

    #pragma omp parallel 
    {

        #pragma omp parallel for 
        for( i=1; i<10; i++)
            cout << i*i;
        
        #pragma omp single
        {
            for( j=1; j<10; j++)
                cout << " single ";

        }

    }
    
    return 0;
}