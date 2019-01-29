#include <stdio.h>
#include "book.h"
#include <string.h>
#include <ctype.h>


char *book_get_title(const BOOK *book)
{
        return book -> title;
}
int book_check_isbn10(const char *isbn10)
{
        int sum;
        int i;
        if(strlen(isbn10) != 10){
                return 0;
        }
        for(i = 0; i < 9; i++){
                if(!isdigit(isbn10[i])){
                        return 0;
                }
                sum += isbn10[i] - 48;
        }
        if(((sum % 11) < 10 && isbn10[9] - 48 == (sum % 11))|| (sum % 11 == 10 && isbn10[9] == 'X')){
                return 1;
        }
        return 0;

}
int book_set_isbn10(BOOK *book, const char *isbn10)
{
        if(book_check_isbn10(isbn10) == 0){
                return 0;
        }
        strcpy(book -> isbn10, isbn10);
        return 1;
}
int book_new(BOOK *book, const char *title, const char *isbn10)
{
        if(book_set_isbn10(book, isbn10) == 0){
                return 0;
        }
        return 1;
}
