#include<iostream>
using namespace std ;
struct Item {
    int id ;
    float cost ;
} ;
int main () {
   Item  items [6] ={
     { 100 , 55.5 },
     { 90 , 70 },
     { 80 , 40 },
     { 70 , 60 },
     { 0 , 0 },
     { 0 , 0 },
   } ;
     for( int i = 0 ; i < 6 ; i++ ){
         if ( items[i].cost > 50 ){
         cout << " item ID : " << items[i].id << "and cost " << items[i].cost << endl ;
         }
     }
         return 0 ;
     }
