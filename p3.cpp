//
// Created by 91998 on 14-12-2021.
//

#include <iostream>

using namespace std;

bool isprime(long long int n){
    if(n<4){return n >1;}
    if( n == 5 || n == 7){return true;}
    if(n %2 == 0 || n%3 == 0){
        cout<<"remainder by 3"<<n%3<<endl<<"remainder by 2"<< n%2<<endl;
        return false;
    }
    else{
       int i = 5;
        while (i*i <= n){
            if (n %i == 0){
                cout<<i<<endl;
                return false;
            }
            if (n%(i+2) == 0){
                cout<<i+2<<endl;
                return false;
            }
            i +=6;
        }
        return true;
    }
}

int main(){
    long long int a1 = 600851475143;
    a1 = a1/(71*839*1471);
    cout<<a1<<endl;
    cout<<isprime(a1);
    return 0;
}

