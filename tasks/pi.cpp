#include<iostream>
#include<math.h>
#include<vector>
#include<omp.h>

using namespace std;

int main()
{
    long long N;
    N=10000000000;

    long long i, j;
    float k=1, l=3;
    double positive=0, sum=0;
    double negative=0, pi, x, step = 1.0/(double)N;

    #pragma omp parallel 
    {
        #pragma omp for reduction(+:sum) 
        for( i=0; i<N; i++)
        {
            x = (i+0.5)*step;
            sum+=4.0/(1.0+(x*x));
        }
        #pragma omp critical
        pi = N*sum;
    }

    printf("%.0lf\n", pi);

    return 0;
}