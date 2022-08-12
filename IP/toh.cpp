#include <iostream>
#include <cmath>
using  namespace std;

void toh(int n,int st,int aux, int des){
    if(n==0){
        return;
    }
    toh(n-1,st,des,aux);
    cout << st <<" "<<des<<endl;
    toh(n-1,aux,st,des);
}

int main(){
    int  n;
    cin>>n;
    cout<<(int)pow(2,n)-1<<endl;
    toh(n,1,2,3);
    return 0;
}