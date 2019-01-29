char *book_get_title(const BOOK *book)
{
        return circle->title;
}

int book_check_isbn10(const char *isbn10)
{
        int i, j, z = 0;
        if (strlen(isbn10) != 10) {
                return 0;
        }
        for (i = 0; i < 10; i++) {
                if ((i < 9) && (!isdigit(isbn10[i])) {
                        return 0;
                }
                if (i == 9) {
                        for (j = 0; j < 9; j++) {
                                z = z + atoi(isbn10[j]);
                        }
                        if (z % 11 <= 9) {
                                if (isbn10[9] == z % 11) {
                                        return 0;
                                }
                        } else if (z % 11 == 10) {
                                if (isbn10[9] != 'X') {
                                        return 0;
                                }
                        }
                }
        }
        return 1;
}

int book_set_isbn10(BOOK *book, const char *isbn10)
{
        if (!book_check_isbn10(isbn10)) {
                return 0;
        } else {
                strcpy(circle->isbn10, isbn10);
                return 1;
        }
}

int book_new(BOOK *book, const char *title, const char *isbn10)
{
        if (!book_check_isbn10(isbn10) || strlen(title) > 20) {
                return 0;
        } else {
                book->title = malloc((strlen(title) + 1) * sizeof(char));
                if (!book->title) {
                        return 0;
                }
                book->isbn10 = malloc((strlen(title) + 1) * sizeof(char));
                if (!book->isbn10) {
                        free(book->title);
                        return 0;
                }
                strcpy(book->title, title);
                strcpy(book->isbn10, isbn10);
                return 1;
        }
}
