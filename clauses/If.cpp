#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    bool value = true;
    #pragma omp parallel if (value) num_threads(2)
    {
        cout << "Hello World"<< endl;
    }   
    
    return 0;
}
