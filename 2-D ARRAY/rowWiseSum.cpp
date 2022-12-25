#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int n, int m){
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target)
            return 1;            
        }
    }
return 0;

}

void printSum(int arr[][3], int n, int m){
       for(int i=0; i<n; i++){
            int ans = 0;
        for(int j=0; j<m; j++){
         ans+=arr[i][j];
        }
        cout<<ans<<" ";
    }
    
    cout<<endl;
}


int main(){
    //create 2-d array
    int arr[3][3];

   
     
    // taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"array created is as follows :"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    int target;
    cout<<"enter the element you want to search "<<endl;
    cin>>target;
    cout<<endl;

    if (isPresent(arr, target, 3, 3)){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }

    cout<<endl;
    

   
   cout<<"sum of row wise elements is as follows :"<<endl;

   printSum(arr, 3, 3);

  
return 0;

}