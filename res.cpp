#include <iostream>
using namespace std;

long long binary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

bool ispalindrome(int x){
    int temp = x, res=0;
    while(x > 0){
        res = res*10 + x%10;
        x = x/10;
    }
    if (res == temp){
        return true;
    }
    else{
        return false;
    }
}
int main()

{
    int i = 1, ans = 0;
    if(ispalindrome(9) && ispalindrome(binary(9)))
        cout<<"yea";
    for(i=1;i<1000000;i++){
        if(ispalindrome(i) && ispalindrome(binary(i)))
            ans = ans +i;
        
    }
    cout<<ans;
}