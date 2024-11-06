#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <cmath>
//pirvu
using namespace std;

bool prime(int n) {
   if( n==2 or n==3 or n==5 or n==7 or n==11 or n==13)
       return true;
    if(n==17 or n==19 or n==23 or n==29 or n==31)
        return true;
    return false;
}//each number ranges from 1 to 16, so every possible sum is greater than one and lesser than 32

int x[17] ,n;
int nr;
void printing()
{
    for( int j=0;j<=n-2;j++)
        cout<<x[j]<<" ";
    cout<<x[n-1];
    cout<<endl;
}//prints the sequence

bool OK(int k){
   // x[1] = 1;
    for(int i=1;i<k;++i)
        if(x[k]==x[i] or !prime(x[i]+x[i+1]))
            return false;
    if(!prime(x[0]+x[1]))
        return false;
    return true;
}//checks if the array is a sequence( a permutation where the sum of each node and its adjacent node is a prime number )

bool Sol(int k)
{
    nr++;
    
    return k == n-1;
}//check if the sequence is n-1 long, since x[1] is always = 1 ( do not need to check for n )

void back(int k){
    for(int i=2 ; i<=n ; ++i)
    {
        x[k]=i;
        if( OK(k) )
            if(Sol(k) and prime(x[0]+x[n-1])){
                printing();
            }
            else
                back(k+1);
    }
}//search for all the possible sequences
int main(void){
    int abc = 0;
    while (scanf("%d", &n) != EOF) {
        x[0] = 1;
        if (abc++) putchar('\n');
        printf("Case %d:\n", abc);
        back(1);
    }// reading and printing in C prevents showing an additional '\n'
    
    return 0;
}


