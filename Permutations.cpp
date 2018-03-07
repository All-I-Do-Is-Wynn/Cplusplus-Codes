#include<iostream>
using namespace std;

void permute(const string &str);
void permute(const string &a, int low, int high);

int main(){
   permute("abcd");
   return 0;
}

void permute(const string &str){
   permute(str,0,str.size()-1);
}


void permute(const string &a, int low, int high)
{
   char temp;
   string p = a;
   if (low == high)
      cout << a << endl;
   else
   {
       for (int i = low; i <= high; i++)
       {
          temp = p[i];
          p[i] = p[low];
          p[low] = temp;

          permute(p, low+1, high);

          temp = p[i];
          p[i] = p[low];
          p[low] = temp;
       }
   }
}












