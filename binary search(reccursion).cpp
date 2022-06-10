#include <iostream>

using namespace std;

int sort(int* P,int N){
    if(N==0){
        return 0;
    }
    int k,m=0;
    for(int j=0;j<N;j++){
      if(P[m]>P[j]){
          m=j;
      } 
    }
    k=P[m];
    P[m]=P[N-1];
    P[N-1]=k;

    sort(P,N-1);
    return 0;
} 

void print(int* Q){
    int i=0;
    while(i<4){
        if(Q[i]=='\0'){
            break;
        }
        else{
            cout<<Q[i];
            i++;
        }

    }

    
}

bool binarysearch(int*P,int x,int len ,int start){
    if (P[len/2])==x{
        return true;
    }
    else if(len==1 && P[start]!=x){
        return false;
    }
    else if(x>P[len/2]){
        
    }



    }



int main() {
    cout<<"hi kiran chandra";
    int P[]={3,1,2,4};
    int x=2;

    sort(P,4);

    
   
    print(P);

    binarysearch(P,2,4,0)

      



}
