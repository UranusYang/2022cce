int arraySign(int* nums, int numsSize){
    int ans=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]<0) ans++;
        if(nums[i]==0) return 0;
    }
    if(ans%2==1) return -1;
    else return 1;
}
