# ICpp
Interactive C++ for Data Analysis

## Learning C++ in Jupyter Notebook 

Good introduction to start with interatctive C++: [On-the-fly-C++](http://blog.coldflake.com/posts/On-the-fly-C++/)

### C++ kernel for Jupyter Notebook

1. You have to install [Cling](https://github.com/root-project/cling)  first.

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

C++:

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

C:

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
