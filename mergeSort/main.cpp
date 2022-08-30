#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int m, int right);

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int m = left + (right - left) / 2;
        mergeSort(arr, left, m);
        mergeSort(arr, m + 1, right);
        merge(arr, left, m, right);
    }
}

void merge(int arr[], int left, int m, int right)
{
    int k;
    int n1 = m - left + 1;
    int n2 =  right - m;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    int i = 0;
    int j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (n1 > i){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (n2 > j){
        arr[k] = R[j];
        j++;
        k++;
    }
}


int main(){
    int arr[] = { 2, 1, 3, 5, 4, 8 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    for(int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    cout << "\n";



    return 0;
}
