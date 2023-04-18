char * mergeAlternately(char * word1, char * word2){
    char * ans = (char*) malloc(201);///100+100+1
    ///準備陣列的memory allocate

    int N1 = strlen(word1), N2 = strlen(word2);
    int N=0;
    for(int i=0; i<100; i++){
        if(i<N1) ans[N++] = word1[i];
        if(i<N2) ans[N++] = word2[i];///指標就是陣列、陣列就是指標
    }///長度不一樣? 用if判斷
    ans[N] = 0;///字串結尾
    return ans;
}
