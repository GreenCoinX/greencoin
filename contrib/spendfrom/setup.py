from distutils.core import setup
setup(name='xgcspendfrom',
      version='1.0',
      description='Command-line utility for greencoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@greencoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
