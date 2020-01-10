#include <stdio.h>
#define N 100005

typedef struct node{
  int parent;
  int left;
  int right;
}TREE;

TREE T[N];

int n,tmp[N]

int main()
{
  int n,i,id,k,j,num,root;
  for(i = 0; i < N;i++){
    for(j = 0; j < 1000; j++){
      T[i].parent = NULL;
      T[i].left = NULL;
      T[i].right = NULL;
    }
  }
  scanf("%d",&n);
  for(i = 0; i < n;i++){
    scanf("%d%d",&id,&k);
    for(j = 0; j < k; j++){
      scanf("%d",&num);
      if(j == 0) T[id].left = num;
      else T[l].right = num;
      l = num;
      T[num].parent = id;
    }
  }
  for(i = 0; i < n; i++){
    if(T[i].parent == NULL) root = i;
      
    if(i = 0) parent = -1;
    else parent = 
    printf("node %d: parent = %d, depth = %d, %s,",i,)
      
  }
