#include <stdio.h>

int main(){
int intscores,mid,fn;
scanf("%d %d %d",&intscores,&mid,&fn);
int score = intscores + mid + fn;
if (score >= 80){
printf("A");
} else if (score < 80 && score >= 75){
printf("B+");
} else if (score < 75 && score >= 70){
printf("B");
} else if (score < 70 && score >= 65){
printf("C+");
} else if (score < 65 && score >= 60){
printf("C");
} else if (score < 60 && score >= 55){
printf("D+");
} else if (score < 55 && score >= 50){
printf("D");
} else{
printf("F");
}
return 0;
}
