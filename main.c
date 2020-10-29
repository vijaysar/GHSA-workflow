#include<string.h>
#definegoodPass "GOODPASS"

int main(){
  charpassIsGood=0;
  charbuf[80];
  printf(”Enterpassword:\n”);
  gets(buf);
  if(strcmp(buf,goodPass)==0)
    passIsGood=1;
  if(passIsGood==1)
    printf("Youwin!\n");
}
