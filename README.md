# SIGSEGV in CPP 
This program contains a faulty program that is supposed to crash on SIGSEGV on purpose.

## Compile this program 
```
gcc main.cpp -lstdc++ -omain // without debug and optinization
gcc main.cpp -lstdc++ -omain -O0 -ggdb // with...
```