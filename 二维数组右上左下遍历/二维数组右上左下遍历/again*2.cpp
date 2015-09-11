//
//  again*2.cpp
//  二维数组右上左下遍历
//
//  Created by 黄然 on 15/9/11.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include<stdio.h>
int main()
{
     int row,col,a[100][100],i,j,x,y,t;
     
     scanf("%d %d",&row,&col);
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     /*for(i=0;i<row;i++)
            16     {
            17         for(j=0;j<col;j++)
            18         {
            19             printf("%d ",a[i][j]);
            20         }
            21         printf("\n");
            22     }*/
     /**/
     if(row>col)
     {
         t=col;//斜排数量
         for(j=0;j<t;j++)//循环处理每一个斜排
         {
             y=j;//每个斜排第一个单元的纵坐标
             x=0;//每个斜排第一个单元的横坐标
             for(i=0;i<=j;i++,x++,y--)//i控制每个斜排内部单元的个数
             {
                 printf("%d\n",a[x][y]);
             }
         }

         t=row-col;
         for(j=1;j<=t;j++)
         {
             y=col-1;
             x=j;
             for(i=1;i<=col;i++,x++,y--)
             {
                 printf("%d\n",a[x][y]);
             }
         }

         t=col-1;
         for(j=t;j>0;j--)
         {
             y=col-1;
             x=row-j;
             for(i=0;i<j;i++,x++,y--)
             {
                 printf("%d\n",a[x][y]);
             }
         }
     }
     else if(row<col)
     {
         t=row;
         for(i=1;i<=t;i++)
         {
             x=0;
             y=i-1;
             for(j=1;j<=i;j++,x++,y--)
             {
                 printf("%d\n",a[x][y]);
             }
         }

         t=col-row;
         for(i=1;i<=t;i++)
         {
             x=0;
             y=row+i-1;
             for(j=1;j<=row;j++,x++,y--)
             {
                 printf("%d\n",a[x][y]);
             }
         }
         
         t=row-1;
         for(i=t;i>0;i--)
         {
             x=row-i;
             y=col-1;
            for(j=1;j<=i;j++,x++,y--)
            {
                 printf("%d\n",a[x][y]);
             }
         }
     }
     else
     {
         t=row;
         for(i=1;i<=t;i++)
         {
             x=0;
             y=i-1;
             for(j=1;j<=i;j++,x++,y--)
             {
                 printf("%d\n",a[x][y]);
             }
         }
         
         t=row-1;
         for(i=t;i>0;i--)
         {
             x=row-i;
             y=col-1;
             for(j=1;j<=i;j++,x++,y--)
             {
                 printf("%d\n",a[x][y]);
             }
         }
     }
    
    return 0;
}