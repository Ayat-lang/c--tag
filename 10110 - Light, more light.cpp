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

// /////////////////////////////
// /////////////////////////////
// /////////////////////////////


int main( )
{

   #ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
   #endif
  
   lli a ;
   while(1)
   {
      cin >> a ;
      if(a==0)
        break ;
      else 
      {
         lli  len , len2 ;
         len = sqrt(a) ;
         len2 = sqrt(a) ;
         //cout << len << endl ;
         if( (len*len2) == a )
           cout << "yes" << endl ;
         else 
           cout << "no" << endl ;
      }
   }
   return 0;  
}






























