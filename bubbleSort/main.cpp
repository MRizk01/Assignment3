#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& a)
{
      bool swap = true;
      while(swap){
        swap = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] =a[i]+ a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swap = true;
            }
        }
    }
}


int main(int argc, char const *argv[])
{
 vector<int> a {4,2,1,3};
 bubbleSort(a);

    for (size_t i=0;  i <a.size();  i++) {
        cout<<a[i]<<" ";
    }



}



