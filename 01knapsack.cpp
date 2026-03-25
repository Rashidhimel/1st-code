#include<bits/stdc++.h>
using namespace std;
 int aw[105];
    int av[105];

int func(int w,int i){
    if(w==0||i<0){
        return 0;
    }
    int ans1= func(w,i-1);
     int taking;
    if(w>=aw[i]){
         taking =av[i]+func(w-aw[i],i-1); 
    } 
    else {
        taking=0;
    }
    
    int ans=max(ans1,taking);
    return ans;

    

}

int main()
{
    int n;
    cin>>n;
    int w;
    cin>>w;
   
    for(int i=0;i<n;i++){
        cin>>aw[i]>>av[i];
    }
   cout<< func(w,n);

   
}