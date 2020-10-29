#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    int i, j;

    #pragma omp parallel for 
    for( i=1; i<10; i++)
        cout << i*i << endl;
    
    
    
    return 0;
}