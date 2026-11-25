#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<100 || n>999)
    {
        return 0;
    }
    int ten=n/10%10;
    int one=n%10;
    cout<<ten<<one<<endl;
    return 0;
}