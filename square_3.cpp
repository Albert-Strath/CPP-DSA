#include <iostream>
using namespace std;

int main(){
    //User prompt for length of square
    cout<<"Input the length of a square: "<<endl;
    int length;
    cin>>length;
    //Formula for area
    int area = length * length;
    int perimeter = 4 * length;
    cout<<"Area of the square is: "<<area<<endl;
    cout<<"Perimeter of the square is: "<<perimeter<<endl;
    return 0;
}