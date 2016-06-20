#include <stdio.h>
//获取数据可以使用scanf来获取
//为了保证获取数据质量的可靠性，在scanf开始时加上一个空格
//scanf(" %c %d %d",&argv_0,&argv_1,&argv_2);
int main()
{
    char argv_0=0;
    int argv_1=0;
    int argv_2=0;
    int student_n=0;
    int operate_n=0;
    int score[30000];
    int max=0;
    int i=0;
    
    while(scanf(" %d %d",&student_n,&operate_n)!=EOF)
    {
        for(i=0;i<student_n;i++)
        {
            scanf(" %d",&score[i]);
        }
        for(i=0;i<operate_n;i++)
        {
            int n=0;
            scanf(" %c %d %d",&argv_0,&argv_1,&argv_2);
            switch(argv_0)
            {
                case 'Q':
                    if(argv_1>argv_2)
                    {
                        argv_1 = argv_1+argv_2;
                        argv_2 = argv_1-argv_2;
                        argv_1 = argv_1-argv_2;        
                    }
                    max=0;
                    for(n=argv_1-1;n<argv_2;n++)
                    {
                        if(max<score[n])  
                        {
                            max = score[n];    
                        }     
                    }
                    printf("%d\n",max);
                    break;
                case 'U':   
                    score[argv_1-1] = argv_2;
                    break;
                default:
                    break;
            }
        }
    }
    return 0;
}