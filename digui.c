#include <stdio.h>
//青蛙跳台阶问题  1次1个台阶，2个台阶，要到n个，有多少种跳法

// int num= 1;

// int Fangfa(int x){
    
//     if(x> 1){
//         num++;
//         return Fangfa(x-2);
//     }
//     printf("%d", num);
// }



// int main(){
//     int n= 0;
//     scanf("%d", &n);
//     Fangfa(n);
    
//     return 0;
// }



//汉诺塔问题

void HNT(int x, char a[], char b[], char c[]){

    if(x== 1)            //当x=1时，意味着只有一个盘子，此时的方法就是直接从a移到c
        printf("%s->%s\n", a, c);
    else{                //x不是1
        HNT(x-1, a, c, b);//把除了最底层盘子上的（x-1）个盘子从a移到b
        printf("%s->%s\n", a, c);//把最底层的盘子移到c
        HNT(x-1, b, a, c);//把（x-1）个盘子从b移到c
    }
}

int main(){
    
    int n= 0;
    printf("输入盘子个数：\n");
    scanf("%d", &n);    
    char m=getchar();//得到输入时的回车
    char a[100];
    char b[100];
    char c[100];
    gets(a);//输入a
    gets(b);//输入b
    gets(c);//输入c
    
    HNT(n, a, b, c);

    return 0;
}

//斐波那契数列  1 1 2 3 5 8 13 21.....
// int Fib(int x){
//     // if(x<= 2){
//     //     return 1;
//     // }
//     // else
//     //     return Fib(x-1)+ Fib(x-2);//递归占用内存过大

//     int a= 1;
//     int b= 1;
//     int c= 1;

//     while(x >2){
//         c=a+ b;
//         a= b;
//         b= c;
//         x--;
//     }
//     return c;
// }

// int main(){
//     int n= 0;
//     scanf("%d", &n);
//     int ret= Fib(n);
//     printf("%d", ret);
//     return 0;
// }



//求n的阶乘
// int Fac1(int x){
//     if(x -1 >= 1){
//         return x*Fac1(x-1);
//     }
//     else
//         return 1;
// }


// int main(){
//     int n= 0, ret=0;
//     scanf("%d", &n);
//     ret= Fac1(n);

//     printf("%d", ret);
//     return 0;
// }




//创建一个函数求字符串长度

// int my_strlen(char* str){
//     int count= 0;             //临时变量
//     while(*str != '\0'){
//         count ++;
//         str ++;
//     }
//     return count;
// }

//不允许创建临时变量
// int my_strlen(char* str){
//     if(*str != '\0'){
//         return 1+ my_strlen(str+ 1);
//     }
//     else
//         return 0;
// }

// int main(){
//     char arr[]= "bit";
//     int len = my_strlen(arr);//arr传过去的是首元素的地址
//     printf("%d\n", len);
//     return 0;
// }




//将1234分为1 2 3 4

// void print(int x){
//     if(x> 9){
//         print(x/ 10);
//     }
//     printf("%d ", x% 10);
// }


// int main(){
//     int i= 0;
//     printf("请输入>:\n");
//     scanf ("%d", &i);
//     print(i);
//     return 0;
// }