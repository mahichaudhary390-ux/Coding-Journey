#include<stdio.h>
int length(char*s){
    int last[255];
    int i;
    for(i = 0;i < 255;i++){
        last[i]=-1;
    }
    int start = 0;
    int maxlen=0;

    for(i=0;s[i]!='\0';i++){
        unsigned char ch = s[i];

        if(last[ch]>=start)
          start=last[ch]+1;

          last[ch]=i;

          int len = i-start + 1;

          if(len>maxlen)
            maxlen = len;
    }
    return maxlen;
}
int main(){
    char s[]='mahichaudhary';

    printf("%d\n",length(s));

    return 0;

}