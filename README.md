# Datalogger
 

Datalogger records meassurements, and stores it in an array. It can also describe the list of meassurement properties ie. median,Max Value,Min Value, Avrg value


## Getting Started

### Prerequisites

There are no Prerequisites for this programm, altough if you want to tweak the program you need to install a GCC compiler.
Here is some resources for installing GCC compiler for mac users https://solarianprogrammer.com/2019/10/12/compiling-gcc-macos/.
There are some additional steps you have to do to install GCC compiler on a windows computer, check this source out https://preshing.com/20141108/how-to-install-the-latest-gcc-on-windows/. 




### Installing
**Note I use mac command lines** 
You can just clone this git repository throught the website or Desktop version. 
When You've done that, enter terminal and change directory to Original-Datalogger folder.

```
Usernames-MacBook-Air:~ Username$ cd Original-Datalogger
```
After this very first step, you can preceede to start the program using this following command
```
Usernames-MacBook-Air:~ Original-Datalogger Username$ ./main.out
```

### Example

Here is an example how the program works

```
Measurement tool 1.2
VECRQ? r
VECRQ? v
[No meassurements]
VECRQ? e 
Enter measurement #1 (or 0) ? 1
Enter measurement #2 (or 0) ? 2
Enter measurement #3 (or 0) ? 3
Enter measurement #4 (or 0) ? 0
VECRQ? v
[1 2 3 ]
VECRQ? e 
Enter measurement #4 (or 0) ? 4
Enter measurement #5 (or 0) ? 5
Enter measurement #6 (or 0) ? 0

VECRQ? v
[ 1 2 3 4 5 ]
VECRQ? c
Max value : 5
Min value : 1
Avr value: 3.00
[-2 -1 0 1 2]
VECRQ? q
Exit Meassurement tool!

```

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* This code was conducted by an student 
* The purpose of this programm was to do an assignment
