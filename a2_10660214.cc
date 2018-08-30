#include <iostream>

using namespace std;

int main()
{ int b;
    bool pole= false;
    cout<< "Please enter a number:";
    cin>>b;
    for(int i=2; i<b; i++){
        if(b%i==0){
            pole=true;
            break;
        }
    }
    if(flag==false && b>1){
            cout<< "Number is prime:";

    }else{
        cout<< "Number is not prime";    }
    return 0;
}
