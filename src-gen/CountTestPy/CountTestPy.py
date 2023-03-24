import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaCountTestPy import (
    Tag, action_capsule_t, compare_tags, get_current_tag, get_elapsed_logical_time,
    get_elapsed_physical_time, get_logical_time, get_microstep, get_physical_time,
    get_start_time, port_capsule, request_stop, schedule_copy,
    start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaCountTestPy as lf
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



# Python class for reactor CountTestPy
class _CountTestPy:
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
        self._stride = 1
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.count = 1
    
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
        out.set(self.count)
        self.count += self.stride
        return 0

# Python class for reactor Test
class _Test:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        self._stride = 0
        self._num_inputs = 1
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self.i = 1
        self.num_reacted = 0
    
    @property
    def stride(self):
        return self._stride # pylint: disable=no-member
    
    
    @property
    def num_inputs(self):
        return self._num_inputs # pylint: disable=no-member
    
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self, c):
        print("Received ", c.value)
        if c.value != self.i:
         sys.stderr.write("ERROR: Expected {:d} but got {:d}\n.".format(self.i, c.value))
         exit(1)
        self.i += self.stride
        self.num_reacted += 1
        return 0
    def reaction_function_1(self):
        if self.num_inputs != self.num_reacted:
         sys.stderr.write("ERROR: Test should have reacted {:d} times, but reacted {:d} times.\n".format(self.num_inputs, self.num_reacted))
         exit(2)
        return 0



# Instantiate classes
counttestpy_lf = [None] * 1
counttestpy_count_lf = [None] * 1
counttestpy_test_lf = [None] * 1
# Start initializing CountTestPy of class CountTestPy
for counttestpy_i in range(1):
    bank_index = counttestpy_i
    counttestpy_lf[0] = _CountTestPy(
        _bank_index = 0,
    )
    # Start initializing CountTestPy.count of class Count
    for counttestpy_count_i in range(1):
        bank_index = counttestpy_count_i
        counttestpy_count_lf[0] = _Count(
            _bank_index = 0,
            _offset=0,
            _period=SEC(1),
            _stride=3,
        )
    # Start initializing CountTestPy.test of class Test
    for counttestpy_test_i in range(1):
        bank_index = counttestpy_test_i
        counttestpy_test_lf[0] = _Test(
            _bank_index = 0,
            _stride=3,
            _num_inputs=4,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
