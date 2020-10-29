#include<stdio.h>
#include<omp.h>

int main()
{
    long long N;
    N=500000000;

    long long i, j;
    float k=1, l=3;
    long double positive=0, sum=0;
    long double negative=0;

   
    #pragma omp parallel sections num_threads(8)
    {
        #pragma omp section 
        {
            printf("task1=%d ", omp_get_thread_num());
            for( i=1; i<N; i+=2)
            {
                positive = positive + 4*(1/k);
                k+=4;
            }
        }
        #pragma omp section 
        {
            // printf("task2=%d \n", omp_get_thread_num());
            for( j=3; j<N; j+=2 )
            {
                
                negative = negative+ (-1*(4*(1/l)));
                l+=4;
                
            }
        }

    }
    
    
    printf("\n %LF\n", positive);
    printf(" %LF\n", negative);
    printf("%LF", positive+negative);


    return 0;
}