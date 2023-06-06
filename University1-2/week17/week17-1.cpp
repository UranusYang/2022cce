int comp(const void *p1, const void *p2){
    return *(int*)p1 - *(int*)p2;
}
bool canMakeArithmeticProgression(int* arr, int arrSize){
    ///1 �Ƨ�
    qsort(arr, arrSize, sizeof(int), comp);

    ///1-1 �¤�k
    for(int i=0; i<arrSize; i++){
        for(int j=i+1; j<arrSize; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    ///2 �v�@�۴� a[i] - a[i-1] ���n�ۦP Yes
    ///  ���ۦP, �����N No
    int diff = arr[1] -arr[0];
    for(int i = 1; i<arrSize; i++){
        if(arr[i] - arr[i-1] != diff) return false;
    }
    return true;
}
