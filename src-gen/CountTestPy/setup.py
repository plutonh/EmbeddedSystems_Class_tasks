import sys
assert (sys.version_info.major >= 3 and sys.version_info.minor >= 6),     "The Python target requires Python version >= 3.6."

from setuptools import setup, Extension

linguafrancaCountTestPymodule = Extension("LinguaFrancaCountTestPy",
                                            sources = ["lib/schedule.c", "lib/util.c", "lib/tag.c", "lib/time.c", "core/mixed_radix.c", "core/platform/lf_linux_support.c", "CountTestPy.c"],
                                            define_macros=[("MODULE_NAME", "LinguaFrancaCountTestPy"), ("LF_REACTION_GRAPH_BREADTH", "1"), ("LOG_LEVEL", "2")])

setup(name="LinguaFrancaCountTestPy", version="1.0",
        ext_modules = [linguafrancaCountTestPymodule],
        install_requires=["LinguaFrancaBase"])