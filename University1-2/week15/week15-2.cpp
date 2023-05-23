class KthLargest {
public:
    ///���D�n���k�̤j���Ʀr
    int k2;
    ///vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;
    KthLargest(int k, vector<int>& nums) {
        k2 = k;///�ƥ��@�Uk
        for(int i=0;i<nums.size();i++){
            all.push(nums[i]);
            if(all.size()>k2) all.pop();///�W�L�ƶq�N��
        }///�ƥ��n�������Ʀr
    }

    int add(int val) {
        all.push(val);
        if(all.size()>k2) all.pop();
        ///sort(all.begin(),all.end());///�q�p��j�Ʀn
        ///��X��k�j���Ʀr(�ڭ̰O�� k2)
        return all.top(); ///return all[all.size() - k2];///return all[k2];����A�]���O�q�p��j�ڭ̬O�j��p
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
