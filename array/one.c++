#include<iostream>
using namespace std;

// int main(){
//     int arr[4]={10,20,30,40};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
//     cout<<"END OF LIST";
// }

// int main(){
//     int arr[5]={10,20,30,40,50};
//     for(int i=0;i<=4;i++){
//         cout<<"array value is "<<arr[i]<<endl;
//     }

// }

int main(){
    int arr[2][3]={
        {10,20,30},
        {40,50,60}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"the value at "<<i<<","<<j<<" is "<<arr[i][j]<<endl;
        }
        
    }
    
}