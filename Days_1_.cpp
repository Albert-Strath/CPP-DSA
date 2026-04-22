#include <iostream>
using namespace std;

int main(){
    //User prompt for No of days
    cout << "Input number of Days"<< endl;
    int days;
    cin >> days;
    //Conversion of days to seconds
    int seconds = days * 24 * 60 * 60;
    cout << "Number of seconds in " << days << " days is: " << seconds << endl;
    return 0;
}