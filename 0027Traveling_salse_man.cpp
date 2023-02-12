#include<iostream>
using namespace std;
const int n=3;
const int MAX=1000000;
int dist[n+1 ][n +1] = {
    { 0, 10, 15, 20 },    
    { 5, 0, 25, 10 },
    { 15, 30, 0, 5 }, 
    { 15, 10, 20, 0  }
};
 
int memo[n + 1][1 << (n + 1)];
 
int fun(int i , int mask){
    if(mask==((1<<i)|3)){return dist[1][i];}
    if(memo[i][mask]!=0)return memo[i][mask];
    int res = MAX;
    for (int j=1;j<=n;j++)
        {if((mask & ( 1 << j ) ) && j != i && j != 1)
            res = min(res,fun(j,mask & (~(1<<i)))+dist[j][i]);
            printf("i = %d , j = %d & The cost of most efficient tour = %d\n",i,j ,res);
            }
     printf("\n\n");
    
    return memo[i][mask]=res;
};
int main(){
    int ans = MAX;
    for (int i = 1; i <= n; i++)
        {
            ans = min(ans, fun(i, (1 << (n + 1)) - 1) + dist[i][1]);
            printf("The cost of most efficient tour = %d\n", ans);
        }
 
    return 0;
}
