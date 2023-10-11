/*
    จากชุดข้อมูลต่อไปนี้ จงเขียนฟังก์ชันเมื่อหาค่ามากที่สุดภายในอาเรย์ โดยที่
        ฟังก์ชันแรก ให้สร้างฟังก์ชันแบบ Pass by value เพื่อหาค่าความสูงที่สุดในอาเรย์ Height
        ฟังก์ชันสอง ให้สร้างฟังก์ชันแบบ Pass by reference เพื่อหาค่าอายุที่มากที่สุดในอาเรย์ Age

    int Height[10] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[10] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    Test case:
        
    Output:
        Max Height = 191
        Max Age = 19

*/

#include <stdio.h>

int findMaxHeight( int Height[], int size ) ;
void findMaxAge( int Age[], int size, int *maxAge ) ;

int main() {
    int Height[ 10 ] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[ 10 ] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    int max_height = findMaxHeight( Height, 10 ) ;
    int max_age ;
    findMaxAge( Age, 10, &max_age ) ;

    printf( "Max Height = %d\n", max_height ) ;
    printf( "Max Age = %d\n", max_age ) ;

    return 0 ;
}//end function 

int findMaxHeight( int Height[], int size ) {
    int max = Height[ 0 ] ;
    for ( int i = 1 ; i < size ; i++ ) {
        if ( Height[ i ] > max ) {
            max = Height[ i ] ;
        }//end if
    }//end  for
    return max ;
}//end function findMaxHeight

void findMaxAge( int Age[], int size, int *maxAge ) {
    *maxAge = Age[ 0 ] ;
    for ( int i = 1 ; i < size ; i++ ) {
        if ( Age[ i ] > *maxAge ) {
            *maxAge = Age[ i ] ;
        }//end if
    }//end  for
}//end void