//
//  main.c
//  random_password_generator
//
//  Created by Marvens Luc on 5/6/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max 26

int main(int argc, const char * argv[]) {
   
    int n;
    srand(time(NULL));
    char rendom[n];
    char array[Max] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char array2[Max] = "abcdefghijklmnopqrstuvwxyz";
    char array3[11] = "12345678910";
    char array4[8] = "!@#$%^&*";
    printf("how many characters do you need");
    scanf("%d", &n);
    char password[n];
    
    
    for(int i = 0; i < n; i++){
        
        int holder = rand() % 4;
        
        if(holder == 0){
            
            password[i] = array[rand() % Max ];
            
        }
        
        else if( holder == 1 ){
            
            
            password[i] = array2[rand() % Max ];
            
        }
        
        else if(holder == 2){
            
            
            password[i] = array3[rand() % 11 ];
        }
        
        else if(holder == 3){
            
            
            password[i] = array4[rand() % 8 ];
        }
        
        
    }
    
    
    for (int i = 0; i < n; i++) {
        
        printf("%c",password[i]);
        
    }
    
    password[n] = '\0';
    printf("\n");
    return 0;
}
