// // reversing a number
// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"enter the number: ";
//     cin>>number;
//     int reverse= 0;
//     while (number>0)
//     {
//         int lastdigit = number%10;
//         reverse = reverse*10 + lastdigit;
//         number = number/10;

//     }
//     cout<<"the reversed digit is : "<<reverse;

//     return 0;
// }

// Q2 ARMSTONGS NUMBER
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "enter the num : ";
//     cin >> num;
//     int original = num;
//     int sum = 0;
//     while (num > 0)
//     {
//         int lastdigit = num % 10;
//         sum += pow(lastdigit, 3);
//         num = num / 10;
//     }
//     if (sum == original)
//     {
//         cout << "it is an armstrongs number";
//     }
//     else
//     {
//         cout << "it is not an armstrongs number";
//     }

//     return 0;
// }
// Q3
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "enter the size: ";
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     int mx=-1999999999;
//     for (int i=0; i < size; i++)
//     {
//         mx = max(mx,arr[i]);
//         cout<<mx<<endl;
//     }
    
//     return 0;
// }
//Q3//sum for all the sub arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "enter the size: ";
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         int sum = 0;
//         for (int j=i; j<size; j++)
//         {
//             sum+=arr[j];
//             cout<<sum<<endl;
//         }
        
//     }
    

//     return 0;
// }
//Q4 LONGEST ARITHMETIC SUBARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "enter the size: ";
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }   
//     int diff = arr[1]-arr[0];
//     int cur_len = 2;
//     int start = 2;
//     int ans = 2;
//     while (start<size)
//     {
//         if (diff == arr[start]-arr[start-1])
//         {
//             cur_len++;
//         }
//         else{
//             diff = arr[start]-arr[start-1];
//             cur_len=2;
//         }
//         ans = max(ans,cur_len);
//         start++;
        
//     }
//     cout<<ans;
//     return 0;
// }

//Q4
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int arr[size+1];
//     arr[size]=-1;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }

//     if (size==1)
//     {
//         cout<<"1"<<endl;
//         return 0;
//     }
//     int ans = 0;
//     int mx = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]>mx && arr[i]>arr[i+1])
//         {
//             ans++;
//         }
//         mx = max(mx,arr[i]);
        
//     }
//     cout<<ans<<endl;
    

    
//     return 0;
// }
//Q5 LARGEST SUM OF SUB ARRAYS:
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the siz eof array: ";
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i <n; i++)
//     {
//         cin>>arr[i];
//     }

//     int cur_Sum[n+1];
//     cur_Sum[0]=0;
//     for (int i = 1; i <= n; i++)
//     {
//         cur_Sum[i] = cur_Sum[i-1]+arr[i-1];
//     }

//     int maxsum = INT_MIN ;
//     for (int i = 0; i <=n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j <i ; j++)
//         {
//             sum = cur_Sum[i]-cur_Sum[j];
//             maxsum = max(sum,maxsum);
//         }
        
//     }
//     cout<<maxsum<<endl;

    
    
    
//     return 0;
// }

//using kadanes algorithm
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter size : ";
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     int cirsum = 0;
//     int maxsum = INT_MIN;
//     for (int i = 0; i < n; i++){
//         cirsum+=arr[i];
//         if (cirsum < 0 )
//         {
//             cirsum = 0;
//         }
//         maxsum = max(maxsum,cirsum);

        
//     }
//     cout<<maxsum;
    
//     return 0;
// }

//Q6 circular sum array


#include<iostream>
using namespace std;

int kadanes(int arr[] , int n ){
    int cirsum  =0 ;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cirsum=arr[i];
        if (cirsum<0)
        {
            cirsum=0;
        }
        maxsum = max(maxsum , cirsum);
        
    }
    return maxsum;
    
}
int main(){
    int n ;
    cout<<"enter the sizde :";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int wrapsum , nonwrapsum;
    nonwrapsum = kadanes(arr,n);
    int toalsum =  0 ;
    for (int i = 0; i <n; i++)
    {   
        toalsum += arr[i];
        arr[i]=-arr[i];

    }

    wrapsum = toalsum + kadanes(arr,n);       //-(- kadanes(arr,n));

    cout<<max(wrapsum,nonwrapsum)<<endl;
    
    



    return 0;
}

///PAIR SUM 
// #include<iostream>
// using namespace std;

// bool pairsum(int arr[] , int n , int target){
//     int lo = 0 ;
//     int hi = n-1;
//     while (lo<hi)
//     {
//         if (arr[lo]+arr[hi]==target)
//         {
//             cout<<lo<<" "<<hi<<endl;
//             return true;    
//         }
//         else if (arr[lo]+arr[hi]>target)
//         {
//             hi--;
//         }
//         else{
//             lo++;
//         }
        
        
//     }
//     return false;
    
// }


// int main(){
//     int n ;
//     cout<<"enter the size : ";
//     cin>>n;


//     int target;
//     cout<<"enter the target : ";
//     cin>>target;


//     int arr[n];
//     cout<<"enter the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<" the pair having max sum is: "<<pairsum(arr,n,target)<<endl;
    

//     return 0;
// }

// the above code is having the time complexity of o(n).