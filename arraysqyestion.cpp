// #include<iostream>
// using namespace std;
// int main(){
//     int n ,s ;

//     cout<<"enter the s : ";
//     cin>>s;

//     cout<<"enter the size :" ;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];

//     }
//     int sum = 0 , i = 0 , j = 0 , st = -1 , en = -1;

//     while (j<n && sum+arr[j]<=s)
//     {
//        sum +=arr[j];
//        j++;
//     }
//     if (sum==s)
//     {
//         cout<<i+1<<""<<j<<endl;
//         return 0;
//     }
//     while (j<n )
//     {
//         sum+=arr[j];
//         while (sum>s)
//         {
//             sum -= arr[i];
//             i++;
//         }
//         if (sum==s)
//         {
//             st=i+1;
//             en = j+1;
//             break;
//         }
//         j++;

//     }
//     cout<<st<<" "<<en<<endl;
//     return 0;
// }

// Q2
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size of array : ";
//     cin>>size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }

//     const int N = 1e6+2;
//     bool chek[N];
//     for (int i = 0; i < N; i++)
//     {
//         chek[i]=false;

//     }

//     for (int i = 0; i <size; i++)
//     {
//         if (arr[i]>=0)
//         {
//             chek[arr[i]]=true;

//         }

//     }
//     int ans = -1;
//     for (int i = 1; i < N; i++)
//     {
//         if (chek[i]==false)
//         {
//             ans=i;
//             break;
//         }

//     }
//     cout<<ans<<endl;

//     return 0;
// }

// Q3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    const int N = 1e6+2;
    int check[N];
    for (int i = 0; i < N; i++)
    {
        check[i]=-1;
    }

    int minindx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (check[arr[i]]!=-1)
        {
            minindx=min(minindx,check[arr[i]]);
        }
        else{
            check[arr[i]]=i;
        }
    }

    if (minindx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minindx+1<<endl;
    }
    
    
    
    
    return 0;
}
    