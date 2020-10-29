#include<iostream>
#include<omp.h>
#include<vector>
#include<omp.h>

using namespace std;

int main()
{
    long long N;
    N = 50000000;

    vector<long long> v1(N);
    vector<long long> v2(N);
    long long firstSum = 0;
    long long sum2 = 0;
    long long secondSum = 0;
    

    #pragma omp parallel num_threads(4)
    {
        #pragma omp for nowait
        for( int i=0; i < N; i++)
        {
            v1[i]=1;
        }
        #pragma omp for nowait
        for( int j=0; j < N; j++)
        {
            v2[j]=1;
        }
    }
    
    #pragma omp parallel 
    {

        #pragma omp for reduction(+:firstSum, secondSum) 
        for( int k=0; k < N; k++)
        {
            firstSum = firstSum + v1[k];
            secondSum = secondSum +v2[k];
        }
    }

    cout << firstSum+secondSum;
    return 0;
}