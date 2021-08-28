#include <iostream>
using namespace std;
int main()
{
    int mydata[5];
    cout<<"please enter your numbers: ";

    for(int i=0; i<5; i++){
        cin>>mydata[i];
    }
    cout<<"you entered: "<<"\n";
    for(int i =0; i<5; i++){
        cout<<*(mydata + i);
    }
    return 0;

}