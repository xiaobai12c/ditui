#include <stdio.h>
//������̨������  1��1��̨�ף�2��̨�ף�Ҫ��n�����ж���������

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



//��ŵ������

void HNT(int x, char a[], char b[], char c[]){

    if(x== 1)            //��x=1ʱ����ζ��ֻ��һ�����ӣ���ʱ�ķ�������ֱ�Ӵ�a�Ƶ�c
        printf("%s->%s\n", a, c);
    else{                //x����1
        HNT(x-1, a, c, b);//�ѳ�����ײ������ϵģ�x-1�������Ӵ�a�Ƶ�b
        printf("%s->%s\n", a, c);//����ײ�������Ƶ�c
        HNT(x-1, b, a, c);//�ѣ�x-1�������Ӵ�b�Ƶ�c
    }
}

int main(){
    
    int n= 0;
    printf("�������Ӹ�����\n");
    scanf("%d", &n);    
    char m=getchar();//�õ�����ʱ�Ļس�
    char a[100];
    char b[100];
    char c[100];
    gets(a);//����a
    gets(b);//����b
    gets(c);//����c
    
    HNT(n, a, b, c);

    return 0;
}

//쳲���������  1 1 2 3 5 8 13 21.....
// int Fib(int x){
//     // if(x<= 2){
//     //     return 1;
//     // }
//     // else
//     //     return Fib(x-1)+ Fib(x-2);//�ݹ�ռ���ڴ����

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



//��n�Ľ׳�
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




//����һ���������ַ�������

// int my_strlen(char* str){
//     int count= 0;             //��ʱ����
//     while(*str != '\0'){
//         count ++;
//         str ++;
//     }
//     return count;
// }

//����������ʱ����
// int my_strlen(char* str){
//     if(*str != '\0'){
//         return 1+ my_strlen(str+ 1);
//     }
//     else
//         return 0;
// }

// int main(){
//     char arr[]= "bit";
//     int len = my_strlen(arr);//arr����ȥ������Ԫ�صĵ�ַ
//     printf("%d\n", len);
//     return 0;
// }




//��1234��Ϊ1 2 3 4

// void print(int x){
//     if(x> 9){
//         print(x/ 10);
//     }
//     printf("%d ", x% 10);
// }


// int main(){
//     int i= 0;
//     printf("������>:\n");
//     scanf ("%d", &i);
//     print(i);
//     return 0;
// }