int calc_number_of_digits(int n)
{

        int counter = 0;

        while (n > 0) {
                n = n / 10;
                counter++;
        }

        return counter;

}
