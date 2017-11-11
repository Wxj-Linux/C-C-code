//输入三条边，若能构成三角形，得出是什么三角形，并求出面积
#include <stdio.h>
#include <math.h>

int main()
{
    float wide1,wide2,wide3; //定义三条边
    float area; //面积
    printf("请输入三条边：");
    scanf("%f %f %f",&wide1,&wide2,&wide3);
    //先判断是不是三角形
    //printf("%f%f%f",wide1,wide2,wide3);
    if(!(wide1 <wide2+wide3 && wide2<wide1+wide3 && wide3<wide1+wide2))
    {
        printf("你输入的三边不能构成一个三角形，抱歉！");

    }else
    {
         //对三角形的形状进行判断
        //1--等边三角形
        if(wide1 == wide2 && wide2 == wide3)
            printf("该三角形是等边三角形\n");
        else if(wide1 == wide2 || wide2 == wide3 || wide1 == wide3)
            printf("该三角形是等腰三角形\n");
        else if((wide1*wide1 == wide2*wide2 + wide3*wide3) ||
                (wide2*wide2 == wide1*wide1 + wide3*wide3) ||
                (wide3*wide3 == wide2*wide2 + wide1*wide1) )
            printf("该三角形是直角三角形\n");
            else
                printf("是普通三角形\n");
        //求面积
        float p =  (wide1+wide2+wide3)/2;
        area = (float)sqrt(p *(p-wide1)*(p-wide2)*(p-wide3));
        printf("该三角形的面积为：%f",area);
    }

}
