#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0 ;
    int semId0 = get_sem(".", '0');
    int semId2 = get_sem(".", '2');
    // *** please insert proper semaphore initialization here
    do {
        // *** this is where you should place semaphore 
       //P(semId0);
       //P(semId1);
       //V(semId0);
       P(semId2);
       printf("P3333333 is here\n"); i++ ;
       // V(semId0);
       V(semId0);
       
       // *** this is where you should place semaphore
   
    }  while (i< 200);
}
