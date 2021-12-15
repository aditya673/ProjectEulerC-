//
// Created by 91998 on 15-12-2021.
//
#include <iostream>

using namespace std;

bool isprime(long long int n){
    if(n<4){return n >1;}
    if( n == 5 || n == 7){return true;}
    if(n %2 == 0 || n%3 == 0){
        //cout<<"remainder by 3"<<n%3<<endl<<"remainder by 2"<< n%2<<endl;
        return false;
    }
    else{
        int i = 5;
        while (i*i <= n){
            if (n %i == 0){
                //cout<<i<<endl;
                return false;
            }
            if (n%(i+2) == 0){
                //cout<<i+2<<endl;
                return false;
            }
            i +=6;
        }
        return true;
    }
}

int main(){
    int count = 0;
    int i = 2;
    while(count <= 10000){
        if(isprime(i)){
            count +=1;
        }
        i +=1;
    }
    cout<<i-1<<endl;
    return 0;
}
