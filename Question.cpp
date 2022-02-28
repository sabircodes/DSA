

// // Calculate student result for 'N' students
// // -get 4 marks from user for every students
// // -use constructor to initialize class members (m1,m2,m3,m4)with the given/entered marks
// // -find total and average for every student
// // -find result, if student has secured >60 in all subjects
// // -print stu details, marks, tot, avg and result

// #include <iostream>
// using namespace std;
// class StudentResult
// {
//     int students;       //  No. of students
//     int m1, m2, m3, m4; // makrs of students
// public:
//     StudentResult()
//     {
//         this->m1;
//         this->m2;
//         this->m3;
//         this->m4;
//     }
//     void getmarks()
//     {

//         cout << "Enter m1 :  ";
//         cin >> m1;
//         cout << "Enter m2 :  ";
//         cin >> m2;
//         cout << "Enter m3 :  ";
//         cin >> m3;
//         cout << "Enter m4 :  ";
//         cin >> m4;
//     }
//     void result()
//     {
//         int total = m1 + m2 + m3 + m4;
//         float avg = total / 4;
//         cout << "m1 : " << m1 << endl;
//         cout << "m2 : " << m2 << endl;
//         cout << "m3 : " << m3 << endl;
//         cout << "m4 : " << m4 << endl;
//         cout << "The tolal marks scored is:  " << total << endl;
//         cout << "The average marks are: " << avg << endl;

//         if (avg < 60)
//         {
//             cout << "Average marks scored is less than 60  Result : Fail" << endl;
//         }

//         else
//         {
//             cout << "Result : passed" << endl;
//         }
//     }
// };

// int main()
// {
//     StudentResult harsh;
//     harsh.getmarks();
//     harsh.result();

//     return 0;
// }

// recursion problems
// Permutations of a given string
// #include<iostream>
// using namespace std;
// void permutations(string asked , string ans){
//     if(asked.length() == 0){
//         cout<<ans<<endl;
//         return;
//     }

//     //ABC
//     for(int i = 0 ; i < asked.length() ; i++){
//         char ch = asked[i]; //for eg ch = B;
//                         // A            //C
//         string s = asked.substr(0,i)+asked.substr(i+1);
//         permutations(s,ans+ch);
//     }

// }
// int main(){
//     permutations("ABC","");
//      return 0;
// }

// recursion problem  2
// board game problem  , you have to count number of ways to move from one point to another
// #include<iostream>
// using namespace std;
// int countways(int start, int end){
//     if(start==end){
//         return 1;
//     }
//     if (start>end){
//         return 0 ;
//     }
//     int ways  = 0 ;
//     int i = 1 ;
//     while (i<=6)
//     {
//         ways +=countways(start+i,end) ;
//         i++;
//     }
//     return ways;
//     // cout<<ways;

// }
// int main(){
//     cout<<countways(0,3);
//     return 0;
// }

// JOSEPHUS problem;
//  #include<iostream>
//  using namespace std;

// int winner(int m , int n ){
//     if (m == 1 ){
//         return 0 ;
//     }
//     return (winner(m-1,n)+n)%m;
// }
// int main(){
//     int people , rules ;
//     cout<<"Entet number of people and rule : "<<endl;
//     cin>>people>>rules;
//     cout<<"the person who will win is at position : "<<winner(people, rules)<<endl;
//      return 0;
// }

// PALINDROME USING RECURSION
// #include <iostream>
// using namespace std;
// bool palindrome(string s, int l, int r)
// {
//     if (l >= r)
//     {
//         return true;
//     }
//     if (s[l] != s[r])
//     {
//         return false;
//     }
//     else
//     {
//         return palindrome(s,l+1,r-1);
//     }
// }
// int main()
// {
//     string s;
//     cout<<"enter : ";
//     cin>>s;
//     cout<<palindrome(s,0,s.length()-1);
//     return 0;
// }