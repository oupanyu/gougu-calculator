#include<stdio.h>
#include<math.h>
int main() 
{
	int jisuan = 0;
	printf("需要哪个计算功能？\n1.直角三角形边长计算\n2.多边形边长计算\n请选择：");
	scanf("%d",&jisuan);
	if (jisuan == 1)
	{
		int h = 0;
		double a = 0;
		double b = 0;
		double c = 0;
		printf("你想计算哪条边长？\n");
		printf("   |\\    \n   | \\    \n1  |  \\ 3  \n   |   \\    \n   L____\\    \n    2        \n");
		printf("输入需要计算的边：");
		scanf("%d",&h);
		if (h == 1)
		{
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf(" 1 |  \\ 3  \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     ??        \n");
			printf("写出边2的长:");
			scanf("%lf",&b);
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf(" 1 |  \\ ?? \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     %.2f         \n",b);
			printf("写出边3的长:");
			scanf("%lf",&c);
			double f = (c*c)-(b*b);
			double n = sqrt((double)f);
			printf("\nA长为%.2f\n\n",n);	
		}
		else if (h == 2)
		{
		    printf("   |\\    \n");
			printf("   | \\    \n");
			printf("?? |  \\ 3 \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     2         \n");
			printf("写出边1的长：");
			scanf("%lf",&a);
			printf("    |\\    \n");
			printf("    | \\    \n");
			printf("%.2f|  \\ ?? \n",a);
			printf("    |   \\    \n");
			printf("    L____\\    \n");
			printf("      2         \n");
			printf("写出边3的长：");
			scanf("%lf",&c);
			double f = (c*c)-(a*a);
			double n = sqrt((double)f);
			printf("\n边2长为%.2f\n\n",n);	
		}
		else if (h == 3)
		{
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf("?? |  \\ 3 \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     2        \n");
			printf("写出边1的长：");
			scanf("%lf",&a);
			printf("   |\\    \n");
			printf("   | \\    \n");
			printf(" 1 |  \\ 3 \n");
			printf("   |   \\    \n");
			printf("   L____\\    \n");
			printf("     ??        \n");
			printf("写出边2的长：");
			scanf("%lf",&b);
			double f = (a*a)+(b*b);
			double n = sqrt((double)f);
			printf("\n边3长为%.2f\n\n",n);
		}
	}
	else if (jisuan == 2)
	{
	int side = 0;
	printf("输入多边形的边数：");
	scanf("%d",&side);
	int ang = 180*(side-2) ;
	printf("这个%d",side);
	printf("边形的内角和为%d度",ang);
	}
	return 0;
}
