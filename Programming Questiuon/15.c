/*7-17 BCD���ܣ�10 �֣�
BCD������һ���ֽ���������λʮ���Ƶ�����ÿ�ĸ����ر�ʾһλ���������һ��BCD����ʮ��������0x12��������ľ���ʮ���Ƶ�12������С��ûѧ��BCD�������е�BCD����������������ת����ʮ��������ˡ�����BCD��0x12���������ʮ���Ƶ�18�ˣ�

���ڣ���ĳ���Ҫ������������ʮ��������Ȼ�������ȷ��ʮ����������ʾ������԰�18ת����0x12��Ȼ����ת����12��

�����ʽ��
������һ���и���һ��[0, 153]��Χ�ڵ�����������֤��ת������Ч��BCD����Ҳ����˵�������ת����ʮ������ʱ�������A-F�����֡�

�����ʽ��
�����Ӧ��ʮ��������

����������
18
���������
12
*/


#include<stdio.h>

int main()
{
	
	int i, j;
	scanf("%d", &i);
	j = i/16*10+i%16;
	printf("%d", j);
	
    return 0;
}