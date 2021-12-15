//
// Created by Aditya on 14-12-2021.
//
#include<iostream>

int main(){
    int i = 0;
    for (int j = 0; j < 1000; ++j) {
        if (j%5 == 0 || j % 3 == 0){
            i += j;
        }
    }
    std::cout<<i;
}

