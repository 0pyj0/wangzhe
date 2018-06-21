#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<math.h>
#include<conio.h> 
using namespace std;
	
	char a[5][50];
	int k1=2,k2=0,kr1=2,kr2=49;//小兵
	int x1=2,x2=0,y=2,y2=49;//英雄 
	void init()
	{
		int i,j;
	    for(i=0;i<5;i++)//初始化全为空格 
	    {
		    for(j=0;j<50;j++)
		    a[i][j]=' ';
	    }
	    //英雄1
		a[y][y2]='Y';
		//英雄2
		a[x1][x2]='X'; 
		
		//小兵
		a[k1][k2+1]='0';
		a[kr1][kr2-1]='0';
	    
		i=0;//两方泉水 
	    for(j=0;j<3;j++)
	    a[i][j]='_';
     	for(j=47;j<50;j++)
	    a[i][j]='_';
	    j=3;//
     	for(i=1;i<4;i++)
	    a[i][j]='|';
    	j=46;
	    for(i=1;i<4;i++)
    	a[i][j]='|';
	    i=3;
    	for(j=0;j<3;j++)
	    a[i][j]='_';
    	for(j=47;j<50;j++)
	    a[i][j]='_';
	   
	    //水晶 
	    a[2][12]=15;
	    a[2][37]=15;
	    //防御塔
	    a[2][22]=35;
	    a[2][27]=35;
	   
	    for(i=0;i<5;i++)
	    {
    		for(j=0;j<50;j++)
		    cout<<a[i][j];
		    cout<<endl;
	    }
    }
int main()
{
	while(1000)
	{
		Sleep(1);
		init();
		system("cls");//清屏 
	}
	return 0;
}
