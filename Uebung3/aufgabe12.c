#include <stdio.h>

void print_communication(int value, int address, int write_access);

int main(void)
{
        int value;
        int address;
        int write_access;
        int scanfvalues;

        printf("Dieses Programm beschreibt die Kommunikation \nzwischen Steuerwerk und Speicherwerk.");
        printf("\nBitte geben Sie nun die Adresse der Speicherzelle ein: ");
        scanfvalues = scanf("%d", &address);

        if(scanfvalues != 1 || getchar() != '\n' || address <= 0) {
                printf("ERROR - Falsche Eingabe");
                return 1;
        }

        printf("----------------------------------------------\n\n");
        printf("Bitte geben Sie nun den zu speichernden Wert ein: ");
        scanfvalues = scanfvalues + scanf("%d", &value);

        if(scanfvalues != 2 || getchar() != '\n') {
                printf("ERROR - Falsche Eingabe");
                return 1;
        }

        printf("----------------------------------------------\n\n");
        printf("Bitte geben Sie abschliessend die gewuenschte Operation an\n");
        printf("1 falls der Wert der Speicherzelle ueberschrieben werden soll\n");
        printf("0 falls der Wert der Speicherzelle nur gelesen werden soll: ");
        scanfvalues = scanfvalues + scanf("%d", &write_access);
        printf("----------------------------------------------\n");

        if(scanfvalues != 3 || getchar() != '\n' || write_access != (0||1)) {
                printf("ERROR - Falsche Eingabe");
                return 1;
        }

        print_communication(value, address, write_access);

        return 0;
}

void print_communication(int value, int address, int write_access)
{
        if (write_access == 1) {
                printf("Steuerwerk 'schreibt' %d nach AM\n", address);
                printf("Steuerwerk 'schreibt' %d nach WM\n", value);
                printf("Steuerwerk setzt D auf Schreiben (1)\n");
                printf("Steuerwerk sendet A\n");
                printf("Speicherwerk 'liest' Adresse von AM (%d)\n", address);
                printf("Speicherwerk 'liest' Daten von WM (%d)\n", value);
                printf("Speicherwerk ueberschreibt Inhalt der SZ %d mit %d\n", address, value);
                printf("Speicherwerk sendet T\n");
        } else {
                printf("Steuerwerk 'schreibt' %d nach AM\n", address);
                printf("Steuerwerk setzt D auf Lesen(0)\n");
                printf("Steuerwerk sendet A\n");
                printf("Speicherwerk 'liest' Adresse von AM(%d)\n", address);
                printf("Speicherwerk 'schreibt' Inhalt von Speicherzelle %d nach RM\n");
                printf("Speicherwerk sendet T\n");
                printf("Steuerwerk 'liest' Daten von RM\n");
        }
}
