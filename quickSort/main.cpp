#include <iostream>
using namespace std;

int partition(int arr[], int start, int finish)
{

    int pivot = arr[start];

    int counter = 0;
    for (int i = start + 1; i <= finish; i++) {
        if (arr[i] <= pivot)
            counter++;
    }

    int pivotIndex = start + counter;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = finish;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int finish)
{

    if (start >= finish)
        return;

    int p = partition(arr, start, finish);

    quickSort(arr, start, p - 1);

    quickSort(arr, p + 1, finish);
}

int main()
{

    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
