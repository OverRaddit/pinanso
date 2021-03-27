#include <unistd.h>

void ft_print_comb(void);

void ft_print_comb(void){
    for(char i='0';i<='9';i++){
        for(char j=i+1;j<='9';j++){
            for(char k=j+1;k<='9';k++){
                write(1,&i,1);
                write(1,&j,1);
                write(1,&k,1);
                if(i=='7'&&j=='8'&&k=='9') return;
                write(1,", ",3);
            }
        }
    }
}

int main(void){
    ft_print_comb();
}