#include <stdio.h>
int main(void){
  int isLetter(char c);
  int n, length = 51;
  char s[length], s2[length], s3[length*2];
  scanf("%d",&n);
  while(n > 0){
    int i = 0;
    int k = 0;
    int count = 0;
    while (i <= length){
      s[i] = ' ';
      s2[i] = ' ';
      i++;
    }
    while(k <= length*2){
      s3[k] = ' ';
      k++;
    }
    scanf("%s %s",s, s2);
    i = 0;
    k = 0;
    while(i < length){
      if(isLetter(s[i])){
        s3[k] = s[i];
        k++;
        count++;
      }
      if(isLetter(s2[i])){
        s3[k] = s2[i];
        k++;
        count++;
      }
      i++;
    }
    printf("count = %d\n",count);
    char s4[count];
    int a = 0;
    while(a<count){
      s4[a] = ' ';
      a++;
    }
    printf("%s\n",s4);
    a = 0;
    while(a < count){
      s4[a] = s3[a];
      a++;
    }
    printf("%s\n",s4);
    n--;
  } 
	
	return 0;
}
int isLetter(char c){
  switch(c){

    case 'a':
      return 1;
    case 'b':
      return 1;
    case 'c':
      return 1;
    case 'd':
      return 1;
    case 'e':
      return 1;
    case 'f':
      return 1;
    case 'g':
      return 1;
    case 'h':
      return 1;
    case 'i':
      return 1;
    case 'j':
      return 1;
    case 'k':
      return 1;
    case 'l':
      return 1;
    case 'm':
      return 1;
    case 'n':
      return 1;
    case 'o':
      return 1;
    case 'p':
      return 1;
    case 'q':
      return 1;
    case 'r':
      return 1;
    case 's':
      return 1;
    case 't':
      return 1;
    case 'u':
      return 1;
    case 'v':
      return 1;
    case 'w':
      return 1;
    case 'x':
      return 1;
    case 'y':
      return 1;
    case 'z':
      return 1;
    case 'A':
      return 1;
    case 'B':
      return 1;
    case 'C':
      return 1;
    case 'D':
      return 1;
    case 'E':
      return 1;
    case 'F':
      return 1;
    case 'G':
      return 1;
    case 'H':
      return 1;
    case 'I':
      return 1;
    case 'J':
      return 1;
    case 'K':
      return 1;
    case 'L':
      return 1;
    case 'M':
      return 1;
    case 'N':
      return 1;
    case 'O':
      return 1;
    case 'P':
      return 1;
    case 'Q':
      return 1;
    case 'R':
      return 1;
    case 'S':
      return 1;
    case 'T':
      return 1;
    case 'U':
      return 1;
    case 'V':
      return 1;
    case 'W':
      return 1;
    case 'X':
      return 1;
    case 'Y':
      return 1;
    case 'Z':
      return 1;
    default:
      return 0;
  }
}