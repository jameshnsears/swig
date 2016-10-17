# using pre-built .so + manual steps
from distutils.core import setup

setup (name = 'mymodule',
       version = '1',
       author      = "James Sears",
       description = """Install precompiled extension""",
       py_modules = ["mymodule"],
       packages=[''],
       package_data={'': ['_mymodule.so']},
       )