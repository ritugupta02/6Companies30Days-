string encode(string src)
{ int i=0,c=1; 
string s="";
int n=src.length();
  while(i<(n-1)){
      if(src[i]==src[i+1])
        c++;
      else{
          s+=src[i];
          s+=to_string(c);
          c=1;
      }
      i++;
  }
  s+=src[i];
  s+=to_string(c);
  return s;
} 
