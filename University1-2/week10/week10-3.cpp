char * mergeAlternately(char * word1, char * word2){
    char * ans = (char*) malloc(201);///100+100+1
    ///�ǳư}�C��memory allocate

    int N1 = strlen(word1), N2 = strlen(word2);
    int N=0;
    for(int i=0; i<100; i++){
        if(i<N1) ans[N++] = word1[i];
        if(i<N2) ans[N++] = word2[i];///���дN�O�}�C�B�}�C�N�O����
    }///���פ��@��? ��if�P�_
    ans[N] = 0;///�r�굲��
    return ans;
}
