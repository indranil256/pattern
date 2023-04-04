#include<iostream>
using namespace std;


int main(){
       int r;
    cout<<" Please Enter (r=6): ";
    cin>>r;
   
     for(int i=1; i<=r; i++){
        
                           // For 'I'

        for(int j=1; j<=r; j++){
            if(i==1 || i==r || j==r/2){
              cout<< " *";  
            }
            else{
                cout<<"  ";
            }
         }
          for(int j=1; j<=r; j++){
            cout<< " ";
          }

                            // For 'N'

        for(int j=1; j<=r; j++){
         if(j==1 || j==r || i==j ){   // (i==2&& j==2)||(i==3&&j==3)||(i==4&&j==4)||(i==)
              cout<< " *";  
            }
            else{
                cout<<"  ";
            }
        }
         for(int j=1; j<=r; j++){
            cout<< " ";
          }
   
                             // For 'D'

        for(int j=1; j<=r; j++){
            if(j==1 ||(i==1&&j<=5) ||(i==6&&j<=5 )||(j==6&& (i>=2&&i<=5)) ){              
                    
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
         for(int j=1; j<=r; j++){
            cout<< " ";
          }

                              // For 'R'

        for(int j=1; j<=r; j++){
            if(j==1|| i==1||i==r/2 || (j==6&&i==2) || (i==4&&j==3) || (i==5&&j==4) || (i==6&&j==5)){
                 cout<<" *";
            }
             else{
                cout<<"  ";
            }
        }
         for(int j=1; j<=r; j++){
            cout<< " ";
          }

                               // For 'A'

          for(int j=1; j<=r; j++){
            if((j==1) || (i==1) ||( j==r) ||(i==r/2) ){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
          }
          for(int j=1; j<=r; j++){
            cout<< " ";
          }

                                // For 'N'

            for(int j=1; j<=r; j++){
         if(j==1 || j==r || i==j ){   // (i==2&& j==2)||(i==3&&j==3)||(i==4&&j==4)||(i==)
              cout<< " *";  
            }
            else{
                cout<<"  ";
            }
        }
         for(int j=1; j<=r; j++){
            cout<< " ";
          }

                                 // For 'I'

         for(int j=1; j<=r; j++){
            if(i==1 || i==r || j==r/2){
              cout<< " *";  
            }
            else{
                cout<<"  ";
            }
         }
          for(int j=1; j<=r; j++){
            cout<< " ";
          }

                                // For 'L'

          for(int j=1; j<=r; j++){
            if(j==1 ||i==r){
                 cout<< " *";
            }
             else{
                cout<<"  ";
            }
          }
                  cout<<endl;
     }
      
    
    return 0;
}