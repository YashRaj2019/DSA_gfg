/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
   Node* arrayToBST(vector<int>& nums, int start, int end){
       
       if(start > end){
           return NULL;
       }
       
       int mid = start + (end-start)/2;
       
       Node* root = new Node(nums[mid]);  // create node
       
       // left side
       root->left = arrayToBST(nums, start, mid-1);
       
       // right side
       root->right = arrayToBST(nums, mid+1, end);
       
       return root;
   }
  
    Node* sortedArrayToBST(vector<int>& arr) {
        return arrayToBST(arr, 0, arr.size()-1);
    }
};