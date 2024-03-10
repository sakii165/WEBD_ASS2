#include <stdio.h>

struct vector
{
  int x;
  int y;  /* data */
};
void calsum(struct vector v1, struct vector v2, struct vector sum);


int main(){
    struct vector v1 = {4, 5};
    struct vector v2 = {6, 7};
    struct vector sum = {0};
                        
    return 0;
}
void sum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

}