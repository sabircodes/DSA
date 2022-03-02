// // this is a gfg question
// // Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.
// Input: 
// N = 4, arr[] = [1 3 2 4]
// Output:
// 3 4 4 -1
// Explanation:
// In the array, the next larger element 
// to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
// since it doesn't exist, it is -1.

//SOLUTION: 

class Solution{
    public:
    #include<stack>
    #include<vector>
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long > v(n,-1) ; //-1 here indicates that every place in the vector that is empty in the vector should be -1
        stack<long  long> s;
        for(int i =0 ; i  < n ; i ++){
           
            while(s.size()!=0 && arr[i]>arr[s.top()]){
                v[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        
        return v;
    }
};