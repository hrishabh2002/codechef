#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int k=0;k<t;k++){
    char str[3];
    for(int i=0;i<3;i++){
        cin>>str[i];
        
    }
    char pref[2];
    for(int i=0;i<2;i++){
        cin>>pref[i];
    }
    int flag=0;
   for(int i=0;i<3;i++){
       for(int j=0;j<2;j++){
           if(str[i]==pref[j]){
               printf("%c\n",str[i]);
               flag=1;
               break;
           }
          
       }
        if(flag==1)
           break;
           
   }
}
    return 0;

}