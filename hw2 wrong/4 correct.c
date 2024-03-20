#include <string.h>
#include <stdio.h>

typedef struct books { 
    int price ;
    char tital[70] ;
} book_t;

void total_price( int enter ) { 
    book_t emp[7] ;
    emp[1].price = 1000 ;
    emp[2].price = 300 ;
    emp[3].price = 1000 ;
    emp[4].price = 550 ;
    emp[5].price = 870 ;
    emp[6].price = 1344 ;
    
    if(enter == 0 ) {
        int all = 0 ;
        for(int a = 1 ; a <7 ; a++){
            all +=  emp[a].price ;
        }
        printf("%d" , all) ;
        return ;
    }
}

void list_books( int id ){
    book_t emp[7] ;
    
    emp[1].price = 1000 ;
    strcpy(emp[1].tital , "All the Light We Cannot See" ) ;
    
    emp[2].price = 300 ;
    strcpy(emp[2].tital , "The 38 Letters from J.D. Rockefeller to his son" ) ;
    
    emp[3].price = 1000 ;
    strcpy(emp[3].tital , "The Ballad of Songbirds and Snakes" ) ;
    
    emp[4].price = 550 ;
    strcpy(emp[4].tital , "Killers of the Flower Moon" ) ;
    
    emp[5].price = 870 ;
    strcpy(emp[5].tital , "Elon Musk" ) ;
    
    emp[6].price = 1344 ;
    strcpy(emp[6].tital , "Milk and Honey 12-Month 2024" ) ;
    
    if(id>=1 && id<=6){
        printf("%d %s" , emp[id].price , emp[id].tital) ;
    }
}

int main()
{
    int input ;
    scanf("%d" , &input) ;
    
    total_price(input ) ;
    list_books(input) ;

    return 0;
}



