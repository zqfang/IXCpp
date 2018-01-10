# ICpp
Interactive C++ for Data Analysis

This repo stores my personal C++ notes for learning C++.

## Learning C++ in Jupyter Notebook

Good introduction to start with interatctive C++: [On-the-fly-C++](http://blog.coldflake.com/posts/On-the-fly-C++/)

## Why use Cling in Jupyter

It's definitely true.
> It’s not perfect but can be a real timesaver when fooling around with C or C++ code. Especially for little bits and pieces you want to try out while working on a C/C++ codebase, it’s much less distracting to fire up a cling interpreter than to setup an example project.

## Cling short tutorial
[Cling-cpp-interpreter](https://solarianprogrammer.com/2012/08/14/cling-cpp-11-interpreter/)

###  Install C++ kernel for Jupyter Notebook

1. Easy way to install via conda: use [xeus-cling](https://github.com/QuantStack/xeus-cling)

2. Use latest ``Cling`` only:
  - You have to install [Cling](https://github.com/root-project/cling)  first.
  - Excecute the following CMD to add C++ kernel to the Jupyter envrionment:

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

After installation, start jupyter notebook and play. Some usefull tips when using cling in jupyter are summaried in the notebook 0.Introduction...

C++ Example:

```cpp
    #include<iostream>

    int arr[3] = { 1, 2, 3};
    int(&ra)[3](a);

    for (auto data: ra)//C++11
	{
		data = i + 5;
		std::cout << data << std::endl;
	}

    std::cout << &arr << &ra << std::endl;

```

C Example:

```c
    #include<stdio.h>

    int num=5;
    int *p= &num;

    int func(int a)
    {
        printf("%d",a);
    }

    int (*pFunc)(int a) = func;

    printf("%d,%p", num, p);
```
