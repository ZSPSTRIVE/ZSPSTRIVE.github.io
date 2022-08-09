#include <iostream>
#include <algorithm>
using namespace std;
const int inf = 0x7fffffff;
int num[101];
int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    int ans=-inf;
    for(int i=0;i<N;i++){
        ans=max(ans,num[i]);
    }
    if(ans<=0){
        cout<<ans<<endl;
    }else{
        int sum=0;
        for(int i=0;i<N;i++){
            if(sum+num[i]<0){
                sum=0;
            }else{
                sum+=num[i];
            }ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}
