#include<stdio.h>
#include<math.h>

struct floor{ 
    int pas, to, in; 
};
struct floor m[11] = { 0 };


int main()
{
    int num = 0, at = 1;
    printf("Please type in 2 numbers A B (from1~10) as the present floor and the goal of each passenger (1 passenger each floor) :\n"
        "Type in a character to meet the end\n");
    int a, b, n = 0;
    while (scanf_s("%d %d\n", &a, &b)){
        m[a].to = b;
        m[a].pas = 1;
        ++n;
    }
   
  
    printf("At\tTime\tNumber\n");
    //Default the elevator runs from the 1st floor
    int dire = 1, key = 0, time = 0; 
    
    while (n > 0){
        if (time == 0) 
            key = 1;
        
        if (m[at].pas == 1 && num < 4){
            ++num;
            m[at].pas = 0;
            m[at].in = 1;
            key = 1;
        }
        
        for (int i = 1; i <= 10; ++i){
            if (m[i].to == at && m[i].in == 1){
                --num;
                m[i].in = 0;
                key = 1;
                --n;
            }
        }
        
        if (key == 1){
            printf("%d\t%d\t%d\n", at, time, num);
        }
        
        if (at == 10) 
            dire = -1;
        if (at == 1)  
            dire = 1;
        
        at += dire;
        ++time;
        key = 0;
    }
    return 0;
}
