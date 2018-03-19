#include<iostream>
#include<vector>

bool isprime(int x){
    int i=2, count=0;
    for(i=2;i<x;i++){
        if(x%i==0){
            count++;
            break;
        }
    }
    if (count !=0){
        return false;
    }
    else{
        return true;
    }
}

bool ispresent(int x, std::vector<int> v){
    int count=0;
    for(int i=0; i<v.size(); i++){
        if (v[i] == x){
            count++;
            break;
        }
    }
    if (count!=0){
        return true;
    }
    else{
        return false;
    }
}

bool ispandigital(int x){
    std::vector<int> vec;
    while(x>0){
        vec.push_back(x%10);
        x = x/10;
    }
    int count1=0, count2;
    for(count2=1;count2<=vec.size();count2++){
        if (ispresent(count2, vec)){
            count1++;
        }
    }
    if (count1 == vec.size()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    for(int i=1000000;i<10000000;i++){
        if (isprime(i) && ispandigital(i)){
            std::cout<<i;
        }
    }
    return 0;

}