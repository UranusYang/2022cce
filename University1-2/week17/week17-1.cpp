int comp(const void *p1, const void *p2){
    return *(int*)p1 - *(int*)p2;
}
bool canMakeArithmeticProgression(int* arr, int arrSize){
    ///1 排序
    qsort(arr, arrSize, sizeof(int), comp);

    ///1-1 笨方法
    for(int i=0; i<arrSize; i++){
        for(int j=i+1; j<arrSize; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    ///2 逐一相減 a[i] - a[i-1] 都要相同 Yes
    ///  不相同, 直接就 No
    int diff = arr[1] -arr[0];
    for(int i = 1; i<arrSize; i++){
        if(arr[i] - arr[i-1] != diff) return false;
    }
    return true;
}
