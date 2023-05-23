class KthLargest {
public:
    ///セ肈璶т材k程计
    int k2;
    vector<int> all;
    KthLargest(int k, vector<int>& nums) {
        k2 = k;///称k
        for(int i=0;i<nums.size();i++){
            all.push_back(nums[i]);
        }///称场计
    }

    int add(int val) {
        all.push_back(val);
        sort(all.begin(),all.end());///眖逼
        ///т材k计(и癘Θ k2)
        return all[all.size() - k2];///return all[k2];ぃ︽琌眖и琌
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
