#include <iostream>

using namespace std;

int main(){

    int i,j;

    for(i = 1 ; i <= 6 ; i++){
        cout<<"&"<<"\t";
    }
    cout<<"\n";
        for(j = 1; j <= 6; j++){
            if(j == 2){
                cout<<"& \t";
            }
            else{
                cout<<"* \t";
            }
        }
         cout<<"\n";
         for(j = 1; j <= 6; j++){
                  if(j == 3){
                    cout<<"& \t";
                  }
                  else{
                    cout<<"* \t";
                  }
            }
             cout<<"\n";
             for(j = 1; j <= 6; j++){
                  if(j == 4){
                    cout<<"& \t";
                  }
                  else{
                   cout<<"* \t";
                  }
              }
              cout<<"\n";
                 for(j = 1; j <= 6; j++){
                     if(j == 5){
                      cout<<"& \t";
                     }
                     else{
                    cout<<"* \t";
                     }
                 }
                 cout<<"\n";
                 for(j = 1; j <= 6; j++){
                     cout<<"& \t";
                 }
    
}