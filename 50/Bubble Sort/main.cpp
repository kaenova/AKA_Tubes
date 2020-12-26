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
    const int size = 50;
    int angka[size] = {1760,3847,4643,6016,4618,4623,8742,7840,6479,3930,6537,8074,8867,2578,3801,1670,3826,481,9036,924,8252,2787,5035,7284,1058,5256,7557,2907,899,2679,4803,8903,8282,8814,5818,307,4738,528,4540,2013,1054,8604,6340,5821,8656,8128,1875,7213,9985,3065};
    BubbleSort(angka, size);
    cout<<"Done."<<endl;
    return 0;
}


