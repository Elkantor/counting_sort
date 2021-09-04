# counting_sort
> A C module to sort an array (integers) by indexes, without loosing the order of the original array using the counting sort algorithm

## Installing / Getting started

Simply drop the <bold>counting_sort.c</bold> file in your project, and include it where needed.

## Test & example

Compile and run the <bold>compile.c</bold> file with your favorite C compiler.
(change "compiler" variable in it to use an other compiler than gcc)

For example, compiling with gcc on windows
```shell
gcc compile.c -o compile.exe
```

Then execute the <bold>compile.exe</bold> executable, which will compile the <bold>main.c</bold> file.
(output executable name will be the **executable** variable in the <compile.c> file, by default it's **counting_sort.exe**)
Finally run the fresh executable
```shell
./compile.exe && counting_sort.exe
```
