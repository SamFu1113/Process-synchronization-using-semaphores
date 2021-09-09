#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0 ;
    // *** Please insert proper semaphore initialization here
    int semId0 = create_sem(".",'0',3);
    int semId1 = create_sem(".",'1',0);
    int semId2 = create_sem(".",'2',0);
    
    do {
        // *** this is where you should place semaphore 
       P(semId0);
       P(semId0);
       // P(semId1);
       //P(semId2);
       printf("P1111111111 is here\n"); i++;
       V(semId1);
       // *** this is where you should place semaphore
   
    }  while (i < 100) ;
}
