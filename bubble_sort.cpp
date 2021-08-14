#include <bits/stdc++.h>
using namespace std;
  
void swap(int *position1, int *position2) 
{ 
    int temp = *position1; 
    *position1 = *position2; 
    *position2 = temp; 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main() 
{ 
    int arr[] = {80, 67, 70, 12, 22, 1, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    int i, j; 
    for (i = 0; i < n-1; i++)     
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]) 
                swap(&arr[j], &arr[j+1]); 
    
    printArray(arr, n); 
    cout << n;
    return 0; 
} 
