/// CONSTANTS////
// #include<iostream>
// using namespace std;
// int main(){
//     const int a = 10;
//     cout<<"the value of a : "<<a<<endl;
//     int a = 98;
//     cout<<"the value of new a : "<<a<<endl;

//     return 0;
// }
///the above program will throw an error because const value  can not be changed
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int a=2 ,b=3;
//     cout<<"the value of a : "<<a<<endl;
//     cout<<"the value of a : "<<a<<endl;

//     cout<<"the value of a : "<<setw(4)<<a<<endl;
//     cout<<"the value of b : "<<setw(4)<<b<<endl;


//     return 0;
// }
//setw is a part of iomanip library it just like using tab metgod setw will insert a tab it will take a desired integer value of your choice


////multiplicatin table of any desired number:
// #include<iostream>
// using namespace std;
// int main(){
//     int i  , j ;
//     cout<<"enter the value of j: "<<endl;
//     cin>>j;
//     while (i<10)
//     {
//         cout<<"the multiplication table is :"<<(i+1)*j<<endl;
//         i++;
//     }
    

//     return 0;
// }

// ListNode* curr=head;
//         vector<int>v;
//         ListNode* temp=head;
//         while(temp!=NULL)
//         {
//             v.push_back(temp->val);
//             temp=temp->next;
//         }
//         int n=v.size();
//         for(int i=1;i<n;i++)
//         {
//             int j=i-1;
//             int t=v[i];
//             while(j>=0 && v[j]>t)
//             {
//                 v[j+1]=v[j];
//                 j--;
//             }
//             v[j+1]=t;
//         }
//         for(int i=0;i<n;i++)
//         {
//             curr->val=v[i];
//             curr=curr->next;
//         }
//         return head;
//     }