#include <iostream>
#include"time.h"
#include <stdio.h>
using namespace std;

int main(){
    unsigned int t0,t1;unsigned int n = 12;
    t0 = clock();
    int arr[n] = {10,7,8,4,2,1,11,15,13,12,0,9};
    for (size_t i = 0; i < n; i++)
    {
        int contador = 0;
        for (size_t j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp1 = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp1;
            }
            else contador++;
            
        }
        if (contador == n-1)break;
    }
    
    
    

    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout <<endl <<"Execution Time: " << time << endl;
    return 0;
}