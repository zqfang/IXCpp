# ICpp
Interactive C++ for Data Analysis

## Learning C++ in Jupyter Notebook 

C++ on the fly

You have to install [Cling](https://github.com/root-project/cling) kernel for Jupyter first.

### C++ kernel for Jupyter Notebook

1. Downlaod [Cling](https://github.com/root-project/cling)

2. Excecute the CMD blew to add C++ kernel to the Jupyter envrionment:

```bash
    $ export PATH=/cling-install-prefix/bin:$PATH
    $ cd /cling-install-prefix/share/cling/Jupyter/kernel

    $ pip install -e .
    #or: pip3 install -e .

    #register the kernelspec for C++17/C++14/C++11:
    #the user can install whichever kernel(s) they
    #wish:
    $ jupyter-kernelspec install [--user] cling-cpp17
    $ jupyter-kernelspec install [--user] cling-cpp14
    $ jupyter-kernelspec install [--user] cling-cpp11
```

### Run Example

```cpp
    #include<stdio.h>
    
    int num=5;
    int *p= &num;
    
    int add(int a) 
    {
        printf("%d",a);
    }
    
    int (*p)(int a) = add;
    
    printf("%d,%p", num, p)
```
