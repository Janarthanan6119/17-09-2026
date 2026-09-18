#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int path[] =     {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    string stops[] = {"TH","GA","IC","HA","TE","LU","NI","CA"};
    string src,dest;
    cin>>src>>dest;
    cout<<src<<dest;
    int start=0,end=0,s_found=0,d_found=0;
    int length = sizeof(path)/sizeof(path[0]);
    for(int i=0;i<length;i++){
        if(src==stops[i]){
            start=i;
            s_found=1;
        }
        if(dest==stops[i]){
            end=i;
            d_found=1;
        }
    }
    cout<<"Start:"<<start<<"End:"<<end<<endl;
    if(s_found==0||d_found==0){
        cout<<"INVALID OUTPUT";
        return 0;
    }
    int tot_mtr=0;
    if(start<end){
        for(int i=start+1;i<=end;i++){
            tot_mtr+=path[i];
        }
    }
    else if(start>end){
        for(int i=start+1;i<length;i++){
            tot_mtr+=path[i];
        }
        for(int i=0;i<=end;i++){
            tot_mtr+=path[i];
        }
    }
    
    float per_mtr = 5/1000.0;
    cout<<per_mtr<<endl;
    cout<<setprecision(1)<<fixed<<ceil(tot_mtr*0.005)<<" INR";
    cout.unsetf(std::ios::fixed);
}