#include <bits/stdc++.h>
using namespace std;
void insertionSort(std::vector<int> &vec)
{
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        auto const insertion_point =
                std::upper_bound(vec.begin(), i, *i);

        std::rotate(insertion_point, i, i+1);
    }
}


int main()
{
    std::vector<int> arr = {2, 1, 3, 7, 5, 8, 4, 6};
    insertionSort(arr);
    for( int x : arr)
        cout << x << " ";
    cout << endl;
}

