#include "ADT.h"

void BubbleSortMenu(int data[100000]){
    int temp[100000];
    for (int j = 0 ; j < 100000 ; j++){
        temp[j] = data[j];
    }
    int n;
    cout<<"Bubble Sort"<<endl;
    cout<<"How many data you want to sort? (674 < n < 100001 ; n: integer): ";
    cin>>n;
    cout<<endl;
    while (n > 100000 || n < 675){
        cout<<"Please type again"<<endl;
        cout<<"How many data you want to sort? (674 < n < 100001 ; n: integer): ";
        cin>>n;
    } 
    cout<<endl;
    for (int i = 0 ; i< 3;i++){
        cout<<"Processing"<<endl;
        data = temp;
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
