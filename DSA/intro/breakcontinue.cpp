#include <iostream>

using namespace std;

int main(){

    /* concept */
    /* int pocketmoney = 3000;
    for(int data=1; data<=30;data++){
        if(data%2==0){
            continue;
        }
        if(pocketmoney=0){
            break;
        }
        pocketmoney=pocketmoney-300;
    } */

/* divide of 3 */
    /*for(int i = 1; i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }*/
    
    /*prime*/
    /*int n;
    cin>>n;
    int i;
    for(i = 2; i<n;i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"prime"<<endl;
    }*/

    /* all prime no. b/w a and b*/


    int a,b;
    cin>>a>>b;
    for(int num = a; num<=b;num++){
        int i;
        for(i = 2; i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}