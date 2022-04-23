// #include<iostream>
// using namespace std;
// int main(){

    
//     float pi = 3.14 , radius = 2;
//     float perimeter = 2* pi*radius;
//     cout<<"the perimeter of circle is  : ",cout<<perimeter;
   
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 9 , b = 10;
//     int area = a*b;
//     cout<<"the area of rectangle is : ", cout<<area;
//     return 0;
// }

/////taking input nd output in c++/////
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"enter the value of a: ";
//     cin>>a;
//     cout<<"enter the value of b: ";
//     cin>>b;
//     cout<<"the area of rectangle is : "<<a*b;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int c  = 69;
// int main(){
//     int a , b ,c;
//     cout<<"enter the value of a : ";
//     cin>>a;
//     cout<<"enter the value of b : ";
//     cin>>b;
//     c = a+b;
//     cout<<"the sum is  : "<<c<<endl;
//     cout<<"to acess global value use scope(::) : "<<::c;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
    
//     int num;
// 	cout << "Input number is : "  << endl;
// 	cin >> num;
//     int arr[num];										// Reading input from STDIN
// 	for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; i <=4; i++)
//         {
//             cout<<"input the array: "<<endl;
//             cin>>arr[i];
//         }
        
//     }
    

//     return 0;
// }



class Solution {
public:
    int depth(TreeNode* root, TreeNode* node, int d, vector<TreeNode*>& path) {
        if (root == node) {
            path.push_back(node);
            return d;
        }

        if (root->left) {
            path.push_back(root);
            int ld = depth(root->left, node, d + 1, path);
            if (ld == -1) {
                path.pop_back();
            } else {
                return ld;
            }
        }

        if (root->right) {
            path.push_back(root);
            int rd = depth(root->right, node, d + 1, path);
            if (rd == -1) {
                path.pop_back();
            } else {
                return rd;
            }
        }
        
        return -1;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pp, qp;
        int pd = depth(root, p, 0, pp);
        int qd = depth(root, q, 0, qp);
        
        int i = min(pd, qd);
        
        TreeNode* pn = pp[i];
        TreeNode* qn = qp[i];
        
        while (pn != qn) {
            --i;
            pn = pp[i];
            qn = qp[i];
        }
        
        return pn;
    }
};