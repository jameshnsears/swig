"""
rm -rf $HOME/bin/Python-2.7.12-ve01
mkdir -p $HOME/bin/Python-2.7.12-ve01
cd $HOME/bin/Python-2.7.12-ve01
$HOME/bin/Python-2.7.12/bin/virtualenv .

cd '/home/jsears/GIT_REPOS/cpp/libfoobar/src'

python setup.py build_ext

$HOME/bin/Python-2.7.12-ve01/bin/python setup.py install 

$HOME/bin/Python-2.7.12-ve01/bin/python
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
