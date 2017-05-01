# ICpp
Interactive C++ 

### Learning C++ in Jupyter notebook 
based on [Cling](https://github.com/root-project/cling)

### C++ kernel installation for Jupyter notebook

    export PATH=/cling-install-prefix/bin:$PATH
    cd /cling-install-prefix/share/cling/Jupyter/kernel

    pip install -e .
    # or: pip3 install -e .

    # register the kernelspec for C++17/C++14/C++11:
    # the user can install whichever kernel(s) they
    # wish:
    jupyter-kernelspec install [--user] cling-cpp17
    jupyter-kernelspec install [--user] cling-cpp14
    jupyter-kernelspec install [--user] cling-cpp11


