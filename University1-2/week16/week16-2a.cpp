///(SOIT107_ADVANCE_001_C) �i���D�G�P�_�j�p
///�g�@��k��ǤJ2�Ӿ�ơA�p�G�Ĥ@�ӼƦr��ĤG�ӼƦr�p�A�h�^��-1;�p�G��ӼƦr�۵��A�h�^��0; �p�G�Ĥ@�ӼƦr��ĤG�ӼƦr�j�A�h�^��1�C�L�X����᪺���G�C
#include <stdio.h>
int f(int a,int b){
	if(a>b) return 1;
	if(a==b) return 0;
	if(a<b) return -1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}

