// Single Number

// // Online C++ compiler to run C++ program online
// #include <iostream>

// int func(int n, int arr[]){
//    int num; 
//     for (int i=0;i<n;i++){
//         num=arr[i];
//         for(int j=1;j<n;j++){
//             if (num==arr[j]){
// //                std::cout<<arr[j]<<" "<<num;
//                 break; 
//             }
//         }
//     }
//     return num;
// }
// int main() {
//     // Write C++ code here
//     std::cout << "Try programiz.pro";
    
//     int n;
//     n=3;
//     int arr[5]={2,1,3,2,1};
//     std::cout<<func(n,arr) ;  

//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>

int func(int n, int arr[]){
   int num,flag;

    for (int i=0;i<n;i++){
        num=arr[i];
           flag=0;
//        std::cout<<"\n"<<arr[i];
        for(int j=i+1;j<n;j++){
            if (num==arr[j]){
            flag=1;
//            std::cout<<"\nFlag "<<num<<" "<<arr[j];break;
            }
        }
        if (flag==0)
        return num;
    }
    return 0;
}
int main() {
   
    int n;
    n=5;
    int arr[5]={2,1,3,2,1};
    std::cout<<func(n,arr) ;  

    return 0;
}
