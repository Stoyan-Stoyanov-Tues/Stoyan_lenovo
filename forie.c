#include <stdio.h>


int main(){
    int f;
    int forie=1;
    printf("Enter number: ");
    scanf("%d",&f);
    for(int i=1; i<=f; i++){
        
        forie= forie * i;
    }
    printf("Forie of %d is = %d", f,forie);
    forie=1;
}
