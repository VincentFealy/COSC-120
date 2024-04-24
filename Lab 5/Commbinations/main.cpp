//Vincent Fealy
#include <iostream>

using namespace std;

int factorial(int n);
int combination(int n, int k);

int main()
{
    int x;
    int n;
    int y=1;
    int k=1;
    int combo=1;
    cout << "Enter Value for n" << endl;
    cin >> n;
    x = factorial(n);
    cout <<"Enter Value for k"<<endl;
    cin >> k;
    combination(n,k);
    cout << x << endl;

    return 0;
}
int factorial(int n){
int y=1;
for(int i=1; i<=n; i++){
    y*=i;
}
return y;
}

int combination(int n, int x){
int together = n-x;
int combo=1;
n=factorial(n);
for(int i=1; i<=n; ++i){
    n*=i;
}
together = factorial(together);
for(int i=1; i<=n; ++i){
    together*=i;
}
x=factorial(x);
for(int i=1; i<=n; ++i){
    x*=i;
}
combo = n/(x * together);

return combo;
}
