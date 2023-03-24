import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaHelloWorldPy import (
    Tag, action_capsule_t, compare_tags, get_current_tag, get_elapsed_logical_time,
    get_elapsed_physical_time, get_logical_time, get_microstep, get_physical_time,
    get_start_time, port_capsule, request_stop, schedule_copy,
    start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaHelloWorldPy as lf
try:
    from LinguaFrancaBase.constants import BILLION, FOREVER, NEVER, instant_t, interval_t
    from LinguaFrancaBase.functions import (
        DAY, DAYS, HOUR, HOURS, MINUTE, MINUTES, MSEC, MSECS, NSEC, NSECS, SEC, SECS, USEC,
        USECS, WEEK, WEEKS
    )
    from LinguaFrancaBase.classes import Make
except ModuleNotFoundError:
    print("No module named 'LinguaFrancaBase'. "
          "Install using \"pip3 install LinguaFrancaBase\".")
    sys.exit(1)
import copy



# Python class for reactor HelloWorldPy
class _HelloWorldPy:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

# Python class for reactor HelloWorld2
class _HelloWorld2:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self):
        print("Hello World.")
        return 0
    def reaction_function_1(self):
        print("Shutdown invoked.")
        return 0



# Instantiate classes
helloworldpy_lf = [None] * 1
helloworldpy_a_lf = [None] * 1
# Start initializing HelloWorldPy of class HelloWorldPy
for helloworldpy_i in range(1):
    bank_index = helloworldpy_i
    helloworldpy_lf[0] = _HelloWorldPy(
        _bank_index = 0,
    )
    # Start initializing HelloWorldPy.a of class HelloWorld2
    for helloworldpy_a_i in range(1):
        bank_index = helloworldpy_a_i
        helloworldpy_a_lf[0] = _HelloWorld2(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
