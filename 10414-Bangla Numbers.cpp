#include <bits/stdc++.h>
using namespace std;

void bangla(long long int number){
    if( number >= 10000000){
        bangla( number / 10000000);
        number %= 10000000;
        cout << " kuti";
    }
    if( number >= 100000){
        cout << " " << (number / 100000) << " lakh";
        number %= 100000;
    }
    if( number >= 1000){
        cout << " " << (number / 1000) << " hajar";
        number %= 1000;
    }
    if( number >= 100){
        cout << " " << (number / 100) << " shata";
        number %= 100;
    }
    if( number > 0){
        cout << " " << number;
    }
    
}

int main(){
    long long int number;
    long long int cases = 1;
    while( cin >> number ){
        cout << setw(4) << cases++ << ".";
        if(number == 0){
            cout << " 0";
        }
        else{
            bangla( number );
        }
        cout << endl;
    }
}
