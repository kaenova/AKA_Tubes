#include <iostream>

using namespace std;

void SelectionSort(int angka[], int n){

    for (int i = 0 ; i < n ; i++){
        int minimal = i;
        for (int j = i+1 ; j<n-1 ; j++){
            if (angka[minimal] > angka[j]){
                minimal = j;
            }
        }
        int temp = angka[i];
        angka[i] = angka[minimal];
        angka[minimal] = temp;
    }
}

int main()
{
    const int size = 5;
    int angka[size] = {1760,3847,4643,6016,4618};
    SelectionSort(angka, size);
    cout<<"Done."<<endl;
    return 0;
}


