#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    int i, j;

    #pragma omp parallel sections
    {
        #pragma omp section 
        {
            for( i=1; i<10; i++)
            {
                cout << omp_get_thread_num() << "=" << i*i << endl;
            }
        
        }

        #pragma omp section 
        {
            for( j=1; j<=10; j++ )
                cout << omp_get_thread_num() << "=" << j+j << endl;
        }

    }

    return 0;
}