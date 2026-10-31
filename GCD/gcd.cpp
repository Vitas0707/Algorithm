#include <iostream>
#include <cstdlib>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// test code
// int main(){
//     system("chcp 65001"); // 将终端编码切换为 UTF-8
//     using std::cin;
//     using std::cout;
//     using std::endl;
//     int a,b;
//     cout<<"a="<<endl;
//     cin>>a;
//     cout<<"b="<<endl;
//     cin>>b;
//     int c = gcd(a,b);
//     cout<<"两个数字的最大公约数为"<<c;
// }