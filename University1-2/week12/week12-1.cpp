///­é¥Öªk
int addDigits(int num){
    while(num>=10){
        int ans=0;
        while(num>0){
            ans+=num % 10;
            num = num/10;
        }
        num = ans;
    }
    return num;
}
