#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a{1,2,3,4,5};
    int sum=7;
    for(int i=0; i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if((a[i]+a[j])==sum){
                cout<<a[i]<<","<<a[j]<<endl;
            }
        }
    }

    return 0;
}