#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //User prompt for radius input
    cout<<"Input the radius of the sphere:"<<endl;
    int radius;
    cin>>radius;
    //Formula for volume of a sphere
    int volume = (4/3) * 3.141 * pow(radius, 3);
    cout<<"Volume of the sphere is: "<<volume<<endl;
    return 0;   
}