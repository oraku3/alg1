{
  char temp;
  char c[M];
  int num[N],num_cnt = 1,char_cnt = 1,temp_len,i = 0,j,flag;
  while(1){
    scanf("%c",&temp);
    if((temp > '0')&& (temp < '9')){
      num[num_cnt - 1] = temp;
      num_cnt++;
      flag = 1;
    }
    else if((temp == '+') || (temp == '-') || (temp == '*')){
      char_cnt++;
      flag = 1;
    }
    else if(temp != ' ')break;
  }
  return 0;
}
