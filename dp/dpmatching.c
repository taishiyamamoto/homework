#include<stdio.h>
#define ROW 61 /*行*/
#define COLUMN 15 /*列*/

int i=0,j=0;
float data[COLUMN][ROW];
float g[COLUMN][ROW];
float d[COLUMN][ROW];

char filename[]="b.txt";
char info[15]; /*一行目の文字列*/
char word[10]; /*二行目の文字列*/
int num; /*三行目の数値*/

int main(void){

FILE *fp;
fp=fopen(filename,"r");
fscanf(fp,"%s %s %d",info,word,&num);
for(i=0;i<COLUMN;i++){
 for(j=0;j<ROW;j++){
  fscanf(fp,"%f",&data[i][j]);
 }

}

fclose(fp);

for(i=0;i<COLUMN;i++){
 for(j=0;j<ROW;j++){
  
 }

}

return 0;
}
