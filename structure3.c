#include <stdio.h>
#include <string.h>

void printhome();
 struct home_address { 
    int plot_number;
    char city[200];
    char state[200];
}  ;                                                 //used to create alias to data type ;

int main(){

struct home_address hads[4];

printf("enter information of person1 :");
scanf("%d",&hads[0].plot_number );
scanf("%s",&hads[0].city );
scanf("%s",&hads[0].state);

printf("enter information of person2 :");
scanf("%d",&hads[1].plot_number );
scanf("%s",&hads[1].city );
scanf("%s",&hads[1].state);

printf("enter information of person3 :");
scanf("%d",&hads[2].plot_number );
scanf("%s",&hads[2].city );
scanf("%s",&hads[2].state);

printf("enter information of person4 :");
scanf("%d",&hads[3].plot_number );
scanf("%s",&hads[3].city );
scanf("%s",&hads[3].state);

printf("enter information of person5 :");
scanf("%d",&hads[4].plot_number );
scanf("%s",&hads[4].city );
scanf("%s",&hads[4].state);

printhome(hads[0]);
printhome(hads[1]);
printhome(hads[2]);
printhome(hads[3]);
printhome(hads[4]);

return 0;
}
void printhome(struct home_address hads){
    printf("addres is : %d, %s, %s", hads.plot_number, hads.city, hads.state);
    printf("\n");
    }