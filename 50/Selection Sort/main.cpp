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
    const int size = 50;
    int angka[size] = {1760,3847,4643,6016,4618,4623,8742,7840,6479,3930,6537,8074,8867,2578,3801,1670,3826,481,9036,924,8252,2787,5035,7284,1058,5256,7557,2907,899,2679,4803,8903,8282,8814,5818,307,4738,528,4540,2013,1054,8604,6340,5821,8656,8128,1875,7213,9985,3065};
    SelectionSort(angka, size);
    cout<<"Done."<<endl;
    return 0;
}


