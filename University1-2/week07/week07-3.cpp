///Week07-3.cpp step02-1 sort�Ƨ� sorting
///�j�@�йL Bubble sort �w�w�Ƨ�
///if�P�_�Afor�j��Aarray�}�C
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 6, 5, 4, 3};

    for(int k=0; k<10-1; k++){ ///���ܦh�� ��v�v�����ӡA�ư��C
        for(int i=0; i<10-1; i++){
            if(a[i] > a[i+1]){ ///���諸�ɭԡA�N...
                int temp = a[i]; ///�洫
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++){
            printf("%d ", a[i] );
        }
        printf("\n");
    }
}
