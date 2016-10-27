"""
export PY_HOME=$HOME/bin/Python-2.7.12-ve01

rm -rf $PY_HOME
mkdir -p $PY_HOME
cd $PY_HOME
$PY_HOME/bin/virtualenv .

cd 'libfoobar/src'

$PY_HOME/bin/python setup.py build_ext

$PY_HOME/bin/python setup.py install 

$PY_HOME/bin/python
import mymodule
f = mymodule.Foo()
print f.Bar(1, 2)

$HOME/bin/Python-2.7.12-ve01/bin/pip uninstall -y mymodule

"""
from distutils.core import setup, Extension


ext_module = Extension('_mymodule',
                        sources=['Foo.i' , 'foobar.cpp'],
                        swig_opts=['-c++'],
                        include_dirs=['../include'],
                        extra_compile_args=['-fPIC'])

setup(name='mymodule',  # name that appears to pip
      ext_modules=[ext_module],
      py_modules=["mymodule"],
      )
