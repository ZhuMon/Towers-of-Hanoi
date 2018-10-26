/***********************************************
*    編譯方式：gcc -o hanoi hanoi.c
*    執行方式：./hanoi
*    程式功能：河內塔
***********************************************/    

#include <stdio.h>
int i = 1;
void hanoi(int num, char from, char using, char to)
{
    
    if (num == 1) {
        printf("%d. Move disk 1 from %c to %c\n", i, from, to);
        i++;
    }
    else{
        hanoi(num - 1, from, to, using);
        printf("%d. Move disk %d from %c to %c\n", i, num, from, to);
        i++;
        hanoi(num - 1, using, from, to);
    }
    
}
int main(int argc, const char * argv[]) {
    
    int num;
    printf("Disks:  ");
    scanf("%d",&num);

    if (num < 3 || num > 64){
	printf("Please input integer ""num"" which 3 <= num <= 64");
        printf("Disks:  ");
        scanf("%d",&num);
    }

    hanoi(num, 'A', 'B', 'C');
    printf("Total steps: %d \n",i-1); //因為i是在print後＋1所以總次數要扣掉最後多加的一次
    return 0;
}

