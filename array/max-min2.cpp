#include<bits/stdc++.h>
using namespace std;
int getMin(int num[],int n){
    
    int mini = INT_MAX;
    
    for(int i=0;i<n;i++){

        mini=min(mini , num[i]);
       // if(num[i]<min){
       //     min = num[i];
       // }
    }
    //return minimum value
    return mini;
}

int getMax(int num[],int n){
    
    int maxi = INT_MIN;
    
    for(int i=0;i<n;i++){

        maxi = max(maxi,num[i]);
       // if(num[i]>max){
       //     max = num[i];
       // }
    }
    //return maximum value
    return maxi;
}

int main() {
              int size;
              cin>>size;
              
              int num[100];
              
              //for taking input in array
              
               for(int i=0;i<size;i++){
                   cin>>num[i];
               }
               
               cout<<"Maximum number is = "<<getMax(num,size)<<endl;
               
               cout<<"Minimum number is = "<<getMin(num,size)<<endl;
               
 

    return 0;
}