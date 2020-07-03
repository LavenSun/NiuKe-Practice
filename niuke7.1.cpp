#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std; //动态规划
 //最长上升子序列
int main()
{
    int N;
    while(cin>>N){
        vector<int> Data(N,0);
        vector<int> Dp(N,1);
        int ret = 0;
        for(int i=0; i<N; ++i)
        {
            cin >> Data[i];
            for(int j=0; j<i; j++)
            {
                if(Data[i]>Data[j])
                    Dp[i] = max(Dp[i],Dp[j]+1);
            }
            ret = max(ret,Dp[i]);
        }
        cout<< ret<<endl;
    }
    return 0;
}