# Semaphore



Below shows how to compile and execute the programs.

### Compile and execute Order : p1 p2 p3


### Compile
```sh
$ gcc p1.c sem.c -o p1
$ gcc p2.c sem.c -o p2
$ gcc p3.c sem.c -o p3

```

### Execute
```sh
$./p1 &
$./p2 &
$./p3 &
```

### Compile and execute Order : p1 p3 p2


### Compile

>same as previous one.

### Execute
```sh
$./p1 &
$./p3 &
$./p2 &
```
### Check semaphore id and counts
 - ipcs
 
### Remove semaphore id (when execute one round, do this!)
 - ipcrm sem **id**




