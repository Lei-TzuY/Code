#include<stdio.h>

int main(){
    int ans,min=0,max=100, guess;
    
    printf("Enter the answer number(0-100):\n");
    scanf("%d",&ans);
    printf("Game start!\n\n");
    
	while(1){
	    
        printf("Enter a number(%d-%d):\n",min, max);
        scanf("%d", &guess);
        
        if (ans == guess) break;
        
        if (guess > ans) {
            max = guess;
        }else {
            min = guess;
        }
    }
    printf("BANG!");
}
