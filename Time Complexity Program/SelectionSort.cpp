#include "ADT.h"

void SelectionSortMenu(int data[]){
    int n;
    cout<<"Selection Sort"<<endl;
    cout<<"How many data you want to sort? (674 < n < 100001 ; n: integer): ";

    do{
        cin>>n;
    } while (n > 100000);
    cout<<endl;

    auto start = chrono::steady_clock::now();
    SelectionSort(data, n);
    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds : "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;

    enter_to_continue();
};

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
