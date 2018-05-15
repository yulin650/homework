#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int VariableOne,VariableTwo;//設定變數名稱 
	for(VariableOne=1;VariableOne<11;VariableOne++)//變數1顯示從1到10 
	{
		printf("%d ",VariableOne);//輸出變數1 
	}
	printf("\n");
	for(VariableTwo=10;VariableTwo>0;VariableTwo--)//變數2顯示從10到1 
	{
		printf("%d ",VariableTwo);//輸出變數2
	}
}
