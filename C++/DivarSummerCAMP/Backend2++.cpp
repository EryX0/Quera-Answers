#include <iostream>
using namespace std;
int main()
{
 int j=0,n;
 cin >> n;
 long long int start_epoch[n];
 long long int end_epoch[n];
 for(int i=0;i<n;i++)
 {
  cin >> j;
  cin >> start_epoch[j];
  cin >> end_epoch[j];
 }
    int k=0,m;
    cin >> m;
    long long int start_epoch1[n];
    long long int end_epoch1[n];
    for(int i=0;i<m;i++)
    {
        cin >> k;
        cin >> start_epoch1[k];
        cin >> end_epoch1[k];
    }
    int kochak;
    if(n>=m){
        kochak=m;
    }
    else{
        kochak=n;
    }
    int answer=0;
    for(int i=0 ; i< kochak ; i++){
        int asli[kochak];
        int epoch2[kochak];
        if(start_epoch[i] >= start_epoch1[i]){
            asli[i]=start_epoch[i];
        }
        else{
            asli[i]=start_epoch1[i];
        }
        if(end_epoch[i]<=end_epoch1[i]){
            epoch2[i]=end_epoch[i];
        }
        else{
            epoch2[i]=end_epoch1[i];
        }
        if(epoch2[i]<=asli[i]){
            continue;
        }
        else{
            answer+=epoch2[i]-asli[i];
        }
 }
    cout<<answer;
}