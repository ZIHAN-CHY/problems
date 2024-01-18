#include<bits/stdc++.h>
using namespace std;
int pr[10000];
void primes(){
    pr[0]=pr[1]=1;
    for(int i=2; i<=sqrt(10000) ; i++){
        if(pr[i]==0){
            //pr[i]=cnt++;
            for(int j=i*i; j<=(10000); j+=i){
                pr[j]=1;
            }
        }
    }
    

}


int main(){
    primes();
    int n;
    cin>>n;
    int cnt=0;
    for(int i=6 ; i<=n ; i++){
        int flag=0;
        for(int j=2 ; j<=i ; j++){
            if(pr[j]==0){
                if(i%j==0){
                    flag++;
                }
            }
        }
        if(flag==2) cnt++;
    }
    cout << cnt << endl;
    
}