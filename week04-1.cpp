///�|�~ ���B4�~�@��
///�f�Z�G4 100 400 �˹L�ӷQ

#include <stdio.h>
int main()
{
    printf("�п�J�褸�~���G");

    int n;
    scanf("%d", &n);

    if( n%400==0 ) printf("�|�~");
    else if( n%100==0 ) printf("���q�~/���~");
    else if( n%4==0 ) printf("�|�~");
    else printf("���q�~/���~");
}
