/*************************************************
        Projeto de SO2

    Antônio Eugênio Domingues Silva RA: 161021336
    Denis Akira Ise Washio          RA:161024181
 
**************************************************/


#include <nucleo4.h>

int i1, i2, i3;


void far processo1(){
    for(;i1<30000;i1++){
        if(i1%100==0)
            printf("1");
    }
    termina_processo();
}

void far processo2(){
    for(;i2<30000;i2++){
        if(i2%100==0)
            printf("2");
    }
    termina_processo();
}

void far processo3(){
    for (;i3<30000;i3++){
        if(i3%100==0)
            printf("3");
    }
    termina_processo();
}

main() {
    cria_processo(processo1, "proc1", 1);
    cria_processo(processo2, "proc2", 2);
    cria_processo(processo3, "proc3", 3);
    dispara_sistema();
}