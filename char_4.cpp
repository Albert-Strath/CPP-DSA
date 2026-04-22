#include <iostream>
using namespace std;
#include <cctype>

int main(){
    cout<<"Input a character"<<endl;
    char act;
    cin>>act;
    
    //uppercase check function
    if(isupper(act)){
        cout<< act << " is an uppercase letter."<<endl;
    //lowercase check function
    }else if(islower(act)){
        cout<< act << " is a lowercase letter"<<endl;
    }

    return 0;
}
