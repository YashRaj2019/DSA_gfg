class Solution {
public:

    bool solve(int pre[], int in[], int post[],
               int inStart, int inEnd,
               int &preIndex, int &postIndex) {

        if(inStart > inEnd)
            return true;

        int root = pre[preIndex++];

        int pos = -1;
        for(int i = inStart; i <= inEnd; i++){
            if(in[i] == root){
                pos = i;
                break;
            }
        }

        if(pos == -1)
            return false;

        if(!solve(pre, in, post, inStart, pos-1, preIndex, postIndex))
            return false;

        if(!solve(pre, in, post, pos+1, inEnd, preIndex, postIndex))
            return false;

        if(post[postIndex++] != root)
            return false;

        return true;
    }

    bool checktree(int preorder[], int inorder[], int postorder[], int N) {

        int preIndex = 0;
        int postIndex = 0;

        return solve(preorder, inorder, postorder, 0, N-1, preIndex, postIndex);
    }
};
