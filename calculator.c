#include<stdio.h>
#include<math.h>
int main() 
{
	int jisuan = 0;
	printf("��Ҫ�ĸ����㹦�ܣ�\n1.ֱ�������α߳�����\n2.����α߳�����\n��ѡ��");
	scanf("%d",&jisuan);
	if (jisuan == 1)
	{
		int h = 0;
		double a = 0;
		double b = 0;
		double c = 0;
		printf("������������߳���\n");
		printf("   |\\    \n   | \\    \n1  |  \\ 3  \n   |   \\    \n   L____\\    \n    2        \n");
		printf("������Ҫ����ıߣ�");
		scanf("%d",&h);
		if (h == 1)
		{
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf(" 1 |  \\ 3  \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     ??        \n");
			printf("д����2�ĳ�:");
			scanf("%lf",&b);
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf(" 1 |  \\ ?? \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     %.2f         \n",b);
			printf("д����3�ĳ�:");
			scanf("%lf",&c);
			double f = (c*c)-(b*b);
			double n = sqrt((double)f);
			printf("\nA��Ϊ%.2f\n\n",n);	
		}
		else if (h == 2)
		{
		    printf("   |\\    \n");
			printf("   | \\    \n");
			printf("?? |  \\ 3 \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     2         \n");
			printf("д����1�ĳ���");
			scanf("%lf",&a);
			printf("    |\\    \n");
			printf("    | \\    \n");
			printf("%.2f|  \\ ?? \n",a);
			printf("    |   \\    \n");
			printf("    L____\\    \n");
			printf("      2         \n");
			printf("д����3�ĳ���");
			scanf("%lf",&c);
			double f = (c*c)-(a*a);
			double n = sqrt((double)f);
			printf("\n��2��Ϊ%.2f\n\n",n);	
		}
		else if (h == 3)
		{
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf("?? |  \\ 3 \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     2        \n");
			printf("д����1�ĳ���");
			scanf("%lf",&a);
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf(" 1 |  \\ 3 \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     ??        \n");
			printf("д����2�ĳ���");
			scanf("%lf",&b);
			double f = (a*a)+(b*b);
			double n = sqrt((double)f);
			printf("\n��3��Ϊ%.2f\n\n",n);
		}
	}
	else if (jisuan == 2)
	{
	int side = 0;
	printf("�������εı�����");
	scanf("%d",&side);
	int ang = 180*(side-2) ;
	printf("���%d",side);
	printf("���ε��ڽǺ�Ϊ%d��",ang);
	}
	return 0;
}
