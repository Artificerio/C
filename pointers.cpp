#include <bits/stdc++.h>
using namespace std;
#define len(v) (int)(v).size()
#define all(v) v.begin(), v.end()
#define INF 10000000
typedef long long ll;

void solve(){

}




int main(){
    
    int x = 5;
    int* p = &x;
    std::cout<<p<<"\n";//Вывод адреса
    std::cout<<*p<<"\n";//Разыменование адреса

    std::cout<<sizeof(p)<<"\n";//По логике должно вывести 4, но так как у современных машин адресация 64 разрядная то выведет 8.То есть для хранения адресов свыше 4ГБ оперативной памяти необходимо больше памяти
    double xx  =3.14;
    double* pp = &xx;
    std::cout<<pp<<"\n";
    std::cout<<pp+1<<"\n";//В случае double, происходит сдвиг на 8 байт
    std::cout<<*(++p)<<"\n";    
    std::cout<<++(*p)<<"\n";    

   int* ptr = nullptr;
   std::cout<<ptr<<'\n';



    cin.get();
    system("clear");
}

