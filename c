#include <stdio.h>
//programe to find that student are passed or fail if they havr more than 33 than he, she will pass otherwise failed and also the average of all subject is greater than 40% than hr will passed overall 
int main(void) {

  int marksmath ;
   printf(" enter your math marks:");
   scanf("%d", &marksmath );
  
  if (marksmath >= 33){
    printf("you are passed in math \n ");
  }
  else{
    printf(" you are failed in math \n");
  }

  int phymarks ;
  printf("enter your phymarks :");
  scanf("%d",& phymarks);
  (phymarks >= 33)? printf("you are passed in physics\n"):printf("you are failed in physics \n");

int chemarks;
  printf(" enter your chemistry marks:");
  scanf("%d", & chemarks);
  if(chemarks >= 33 ){
    printf("you are passed in chemistry\n ");
  }
   else {
     printf(" you ar failed in chemistry\n ");
   }

  ((marksmath + phymarks + chemarks) /3 >40)? printf("you all over  have more than 40 percent \n") : printf("you all over gain less marks than 40 percent ");
  return 0;
}
