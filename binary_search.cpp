
#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int find)
{
    if (right > 1) {
        int mid;
        mid = left + (right - left) / 2;
        if (arr[mid] == find) {
            return mid;
        }else if (arr[mid] > find) {
            return binarySearch(arr, left, mid-1, find);
        }else{
            return binarySearch(arr, mid+1, right, find);
        }
    }else{
        return -1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 9, 10, 12, 15, 44, 56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int find = 15;
    int i;
    int result = binarySearch(arr, 0, n - 1, find);
    cout << "Found in position : " << result << " ,Result is : " << arr[result];

    return 0;
}
