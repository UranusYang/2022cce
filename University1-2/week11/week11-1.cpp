///���дN�O�}�C�B�}�C�N�O����s[i] vs. t[i]
bool isIsomorphic(char * s, char * t){
    int N1 = strlen(s);
    int N2 = strlen(t);
    if(N1!=N2) return false;///���פ��@��? ����

    char table1[256]={};///����c1�n�����k��c2 ��Ӫ�
    char table2[256]={};///����c2�n�����k��c1 ��Ӫ�

    for(int i=0; i<N1; i++){///2�Ӫ����׬ۦP�A�H�KN1
        char c1 = s[i], c2 = t[i];
        if(table1[c1]==0 && table2[c2]==0){///�o��Ū�!
            table1[c1]=c2;///���W��n��Ӫ�
            table2[c2]=c1;///���W��n��Ӫ�
        }
        if(table1[c1]==c2 && table2[c2]==c1){
            ///���X��A�L���A���β^�O
        }
        else return false;///���X��A�����N���F�A����
    }
    return true;///�g�L�ӤW����h�����P�_���q�L�A�u�X��
}
