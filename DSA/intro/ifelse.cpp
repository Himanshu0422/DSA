#include <iostream>

using namespace std;

int main(){

    /* greater of 3 */
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }

    /* Odd Even */
    int n;
    cin>>n;
    if(n%2 == 0){ 
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }


    return 0;
}