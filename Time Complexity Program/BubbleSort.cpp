#include "ADT.h"

void BubbleSortMenu(int data[]){
    int n;
    cout<<"Bubble Sort"<<endl;
    cout<<"How many data you want to sort? (674 < n < 100001 ; n: integer): ";

    do{
        cin>>n;
    } while (n > 100000);
    cout<<endl;
    for (int i = 0 ; i< 3;i++){
        auto start = chrono::steady_clock::now();
        BubbleSort(data, n);
        auto end = chrono::steady_clock::now();
        cout << "Elapsed time in nanoseconds : "
            << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
            << " ns" << endl;
    };

    enter_to_continue();
};

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
};
