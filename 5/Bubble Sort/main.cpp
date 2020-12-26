#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n){

    for (int i = 0 ; i < n-1 ; i++){
        for (int j = 0 ; j<n-i-1 ; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    const int size = 5;
    int angka[size] = {1760,3847,4643,6016,4618};
    BubbleSort(angka, size);
    cout<<"Done."<<endl;
    return 0;
}


