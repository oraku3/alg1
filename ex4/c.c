#include <stdio.h>
#include <string.h>

void Insert(char *);
int Find(char *);

typedef struct dictionary{
  char word[13];
  char answer[4];
} DIC;

int word_cnt = 0;

DIC dic[1000000];

int main()
{
  int com_num,result = 0,j = 0;
  char command[7],str[13];
  
  scanf("%d",&com_num);
  for(int i = 0; i < com_num; i++){
    scanf("%s%s",command,str);
    if(command[0] == 'i') Insert(str);
    else if(command[0] == 'f') {
      result = Find(str);
      if(result == 1) {
        strcpy(dic[j].answer,"yes");
        j++;
      }
      else {
        strcpy(dic[j].answer,"no");
        j++;
      }
    }
  }
  for(int k = 0; k < j;k++){
    printf("%s\n",dic[k].answer);
  }
  return 0;
}


void Insert(char *str){
  strcpy(dic[word_cnt].word,str);
  word_cnt++;
}

int Find(char *str){
  for(int i = 0; i < word_cnt + 1; i++){
    if(strcmp(dic[i].word,str) == 0) return 1;
  }
  return 0;
}
