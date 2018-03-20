#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isprime(int x){
    if (x == 1){
        return false;
    }
    else{
    int count = 0;
    for (int i=2;i<int(sqrt(x) + 1);i++){
        if (x % i == 0){
            count ++;
            break;
        }
    }
    if (count != 0){
        return false;
    }
    return true;
}
}
bool is_square(int x){
    if (x == 0){
        return false;
    }
    else{
    int count = 0;
    for (int i = 1; i < int(sqrt(x) + 1); i++)
    {
        if (i * i == x)
        {
            count++;
            break;
        }
    }
    if (count != 0)
    {
        return false;
    }
    return true;
}
}

bool is_goldbach(int x, vector<int> v){
    for(int i =0;i<v.size(); i++){
        if (v[i] < x){
            for (int j =1; j<x; j++){
                int temp = (x- v[i])/2;
                if (temp ==  j*j)
                    return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> v;
    for (int i=1;i<10000;i++){
        if (isprime(i)){
            v.push_back(i);
        }
    }
    for(int i = 9;i<10000;i++){
        if (!isprime(i) && i%2!=0){
            if (!is_goldbach(i, v)){
                cout<<i<<" ";
            }
        }
    }
}