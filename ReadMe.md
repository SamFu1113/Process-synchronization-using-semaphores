# Semaphore synchronization

***
**Introduction**
---------------------------------------

- The goal of this lab is make you familiar with semaphores and use them to coordinate and synchronize among processes. The concept introduced in this lab is also applied to multithreads.
- Every operating systems provides a set of synchronization commands (system calls), called IPC (Inter Process Communication).
- Although the functionality and signatures are different in different O.S., they are basically similar. Please note that, this lab can only be done in Linux. I have to prepare the Linux environment for the labs. 

## **Below shows how to compile and execute the programs**

Compile and execute Order : p1 p2 p3


## Compile commands
```sh
$ gcc p1.c sem.c -o p1
$ gcc p2.c sem.c -o p2
$ gcc p3.c sem.c -o p3

```

***
## Execute commands
```sh
$./p1 &
$./p2 &
$./p3 &
```


## **Below shows how to compile and execute the programs**
Compile and execute Order : p1 p3 p2

## Compile commands

>same as previous one.
```sh
$ gcc p1.c sem.c -o p1
$ gcc p2.c sem.c -o p3
$ gcc p3.c sem.c -o p2
```

***
## Execute commands
```sh
$./p1 &
$./p3 &
$./p2 &
```

***
## Check semaphore id and counts
```sh
$ ipcs
```


***
## Remove semaphore id (when execute one round, do this!)
```sh
$ ipcrm sem **id**
```
 - **id** stands for the semaphore id.





