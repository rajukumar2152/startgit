///raju kumar hello world  hgdsh
//raju kunahuhdbb sadbhsf
#include <iostream> 
#include<bits/stdc++.h>
#include <list> 
#include <iterator> 
#include<array>
#include<vector>
#include<functional>
using namespace std; 


  
// in new dev branch  
  
int main() 
{ 
	int m ; 

  std::array<int ,6> myarray ={1,2,3,4,5, 6};
  cout<<myarray[2]<<endl;
 for (int i=0; i<6; i++){
    cout<<myarray[i]<<" ";
 }
    cout<<"ENTER TTHE NUMBER "<<endl ; 
     cin >>m ;
     cout<< m <<endl;

   std:: vector<vector <int >> Tree;
   int n1, n2, eadge; 
   Tree.resize(eadge);
   for (int i = 0; i < eadge; ++i)
   {
   	  cin>> n1, n2;
   	  Tree[n1].push_back(n2);
   }
   vector<int>::iterator ptr ;
   //raju kumar 

   // for (const auto &e1:Tree){
   // 	  for (const auto &e2:e1){
   // 	  	cout<<e2 ;
   // 	  }
   // 	  cout<<endl; 
   // }
     return 0 ; 
  
} 