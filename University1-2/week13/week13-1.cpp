class Solution {
public:///用C++寫 今天挑戰題 LeetCode 54 迴旋
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int M = matrix.size();
        int N = matrix[0].size();
        int i=0, j=0;
        int dir=0;
        int di[4] = {0, 1, 0, -1};
        int dj[4] = {1, 0, -1, 0};
        int left=0, right=N-1, up=1, down=M-1;
        for(int k=0; k<M*N; k++){
            ans.push_back( matrix[i][j] );
            if(dir==0 && j==right){
                dir++;
                right--;
            }
            else if(dir==1 && i==down){
                dir++;
                down--;
            }
            else if(dir==2 && j==left){
                dir++;
                left++;
            }
            else if(dir==3 && i==up){
                dir = 0;
                up++;
            }
            i += di[dir];
            j += dj[dir];
        }
        return ans;
    }
};
