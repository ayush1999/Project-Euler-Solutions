#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool is_square(int x)
{   
    int temp = int(sqrt(x));
    if (temp*temp == x){
        return true;
    }
    return false;
}


int main(){
    for (int i = 1000000000; i < 2000000000; i++)
    {
        int temp = (i * (i + 1)) / 2;
        if (is_square(8 * temp + 1) && is_square(24 * temp + 1))
        {
            if ((int(sqrt(8 * temp + 1)) - 1) % 2 == 0 && ((int(sqrt(8 * temp + 1)) + 1) % 4 == 0))
            {
                if ((int(sqrt(1 + 24 * temp)) + 1) % 6 == 0)
                {
                    cout << i << " ";
                }
            }
        }
}
}