#include <stdio.h>
#include <stdlib.h>
int main()
{
	int input; //�ŧi��J���ܼ�
	int a,b; //��a��b�������@�U�n�B�⪺�F��
	int sum = 0;//�`�M�A�̫�n��X�Ϊ�
	scanf_s("%d", &input); //��ʿ�J�n�ഫ���Ʀr
	a = input; //����J���󵥤@�U�n�B�⪺�Ʀr
	int i, j = 0; //j�����{�b�O�ĴX��ơAi�O�p��w�g���F�X��10
	while (a > 0) //���_�u���k����a����1
	{
			b = a%2; //��b�����u���k���l��
			a = a / 2; //��a�����u���k�������Ʀr
			for (i = 1; j > i; i++)  //�o�ӵ{�������
			{
				b = b * 10;
			}
			/*
				���for�@�_���ڭ̵u���k���X�Ӫ��Ʀr
				���I�O�n���l�ơA�ҥH���ڭ̭��I�N�O�n��b
				���L�p�G�z�L�u���k�B��
				���B��X�Ӫ��O�̫�@�ӼƦr
				�]����������O�n�ѤU�ӤWŪ��
				�ҥH���ڭ̥���Ĥ@�ӼƦr�s�b�Ӧ��
				�ĤG�ӼƦr*10�A�[�i�Ĥ@�ӼƦr
				�ĤT�ӼƦr*100�A�[�i�h......�H������
				�ҥH�o��for�ڭ̭n�⻡b�n���H�h��(�᭱�[�W�X��0)
			*/
			sum = sum + b; // ��B��᪺b�[�i�h
			j++; //�����{�b�O�ĴX�ӼƦr(��1�ӼƦr*10 ��2�ӼƦr*100......
	}
	printf("%d",sum); //��X
	system("PAUSE");
}
