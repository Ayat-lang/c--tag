#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<list>
#include<string.h>
#include<string>
#include<list>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#define lli long long int
#define vi vector<int> 
#define vlli vector<long long int>
#define vs vector<string>
#define EPS 1e-10
using namespace std ;
bool double_comp( double a  , double b){return abs(a-b)<=EPS ;}
long long int find_Big_mod( long long int base , long long int power , long long int m){int res = 1 ;while(power){if( power%2 == 0 ){power = power/2 ;base = (base*base)%m ;}else{power = power - 1 ;res = (base*res)%m ;}}return res ;}
#define N 10000

/////////////////////////////
/////////////////////////////
/////////////////////////////


int main( )
{

   #ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
   #endif
    
    unsigned int step , mod ;
    while( scanf("%d%d" , &step , &mod) != EOF )
    {
      //cin >> step >> mod ;
      vector<int> vec(mod) ;
      vec[0] = 0 ;

      for( unsigned int i = 1 ; i < mod ; i++ )
      {
         vec[i] = ( vec[i-1] + step )%mod ;
      }

      sort( vec.begin( ) , vec.end( ) );

      bool a = false ;
      for( unsigned int i = 0 ; i < mod ; i++ )
      {
         if( i != vec[i] )
         {
            printf("%10d%10d    Bad Choice\n",step,mod);
            cout << endl ;
            a = true ;
            break ;
         }
      }

      if( a == false ){
        printf("%10d%10d    Good Choice\n",step,mod);
        cout << endl ;
      }
  }
   return 0;  
}
