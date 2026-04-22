#include <iostream>
using namespace std;

int main(){
    int valuesArray[5];
    int sum = 0;

    for(int i=0; i<5; i++){
        cout<<"Input value " << i+1 << ": "<<endl;
        cin>>valuesArray[i];
        sum = sum + valuesArray[i];
    }
    cout<<"Average: "<< sum/5 <<endl;
    return 0;
}