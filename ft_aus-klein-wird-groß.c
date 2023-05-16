#include <unistd.h> 

void ft_putchar(int ca){
    write(1, &ca, 1); 
}

void ft_akwg(char*str){
    int i;

    i = 0;
    while(str[i] != '\0'){
        
        //if((int)str[i] <= 97){
        //    str[i] = (char)((int)str[i] - 32);
        //}
        //else{
        //   str[i] = (char)((int)str[i] + 32); 
        //}
        ft_putchar((int)str[i]);
        i++;
    }

}

int main(){
    ft_akwg("A");
}