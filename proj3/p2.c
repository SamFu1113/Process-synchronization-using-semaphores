#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0 ;
    // *** please insert proper semaphore initialization here
    int semId1 = get_sem(".",'1');
    int semId2 = get_sem(".",'2');    
    do {
        // *** this is where you should place semaphore 
       //V(semid0);
       //V(semId0);
       //V(semId1);
       P(semId1);
       //V(semId2);
       printf("P222222222 is here\n"); i++ ;
       //V(semId0);
       V(semId2);
       V(semId2);
       // *** this is where you should place semaphore
   
    }  while (i < 100);
}
