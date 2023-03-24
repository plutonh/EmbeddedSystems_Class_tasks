import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaCountPy import (
    Tag, action_capsule_t, compare_tags, get_current_tag, get_elapsed_logical_time,
    get_elapsed_physical_time, get_logical_time, get_microstep, get_physical_time,
    get_start_time, port_capsule, request_stop, schedule_copy,
    start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaCountPy as lf
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



# Python class for reactor CountPy
class _CountPy:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

# Python class for reactor Count
class _Count:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        self._offset = 0
        self._period:interval_t = SEC(1)
        self._stride = 0
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.count = 0
    
    @property
    def offset(self):
        return self._offset # pylint: disable=no-member
    
    
    @property
    def period(self):
        return self._period # pylint: disable=no-member
    
    
    @property
    def stride(self):
        return self._stride # pylint: disable=no-member
    
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self, out):
        out.set( self.count)
        self.count += self.stride
        return 0

# Python class for reactor Print
class _Print:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self, c):
        print("Hello World! ", c.value)
        return 0
    def reaction_function_1(self):
        print("Shutdown Invoked ")
        return 0



# Instantiate classes
countpy_lf = [None] * 1
countpy_count_lf = [None] * 1
countpy_test_lf = [None] * 1
# Start initializing CountPy of class CountPy
for countpy_i in range(1):
    bank_index = countpy_i
    countpy_lf[0] = _CountPy(
        _bank_index = 0,
    )
    # Start initializing CountPy.count of class Count
    for countpy_count_i in range(1):
        bank_index = countpy_count_i
        countpy_count_lf[0] = _Count(
            _bank_index = 0,
            _offset=0,
            _period=SEC(1),
            _stride=5,
        )
    # Start initializing CountPy.test of class Print
    for countpy_test_i in range(1):
        bank_index = countpy_test_i
        countpy_test_lf[0] = _Print(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
