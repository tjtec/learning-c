#include <unistd.h> //Import des Headerfile: <> Im System; "" Eigene Library

void ft_putchar(int ca){
    write(1, &ca, 1); //Erste zahl: Wohin soll schreiben: File Descryptor (0 Standart IN, 1 Standart OUT, 2 Error OUT); Zweite Zahl: Übergibt Pointer (zeigt auf eine Addresse/Position im ram, referenz übergeben), mit & Kopie(referenz), Ohne & Original; Letzte Zahl: Byte Sitze
}

void ft_putstring(char*str){ //Pointer sind "Arrays" im arbeitsspeicher, ist eine bestimmte Location/Stelle im arbeitsspeicher, zeigt auf eine bestimmte stelle, Endet immer mit 0 character
    int i;

    i = 0;
    while(str[i] != '\0'){
        ft_putchar(str[i]);
        i++;
    }
}

void ft_flipstring(char*str){ //Pointer sind "Arrays" im arbeitsspeicher, ist eine bestimmte Location/Stelle im arbeitsspeicher, zeigt auf eine bestimmte stelle, Endet immer mit 0 character
    int i;

    i = 0;
    while(str[i++]);
    
    while(i-- >= 0)
        ft_putchar(str[i]); //i++ führt erst auf und addiert dann, ++i addiert erst und führt dann aus
}

void ft_putsting_beastup(char*str){
    int i;

    i = 0;
    while(str[i++]);
    write(1,str,i);
}

int main(){ //jedes C programm braucht eine Main

    ft_putchar(38);
    ft_putstring("Hallo welt was geeht.\n");
    ft_flipstring("\nFlip.");
    ft_putsting_beastup("IT's AMAZING\n");
   // '\'' Backslash: Cancel caracter
} 
//write() ist System call, ist eine funktion von Linux