# Array of tests to run (in order)
# Each test contains
#   description - 
#   steps - A list of steps to perform, each step can have
#       inputs - A list of tuples for the inputs to apply at that step
#       *time - The time (in ms) to wait before continuing to the next step 
#           and before checking expected values for this step. The time should be a multiple of
#           the period of the system
#       *iterations - The number of clock ticks to wait (periods)
#       expected - The expected value at the end of this step (after the "time" has elapsed.) 
#           If this value is incorrect the test will fail early before completing.
#       * only one of these should be used
#   expected - The expected output (as a list of tuples) at the end of this test
# An example set of tests is shown below. It is important to note that these tests are not "unit tests" in 
# that they are not ran in isolation but in the order shown and the state of the device is not reset or 
# altered in between executions (unless preconditions are used).
tests = [ {'description': 'PINA: 0x70 => PORTC: 0x40',
    'steps': [ {'inputs': [('PINA',0x70)], 'iterations': 5 } ],
    'expected': [('PORTC',0x40)],
    },

	{'description': 'PINA: 0x72 => PC: 0x60',
    'steps': [ {'inputs': [('PINA',0x72)], 'iterations': 5 } ],
    'expected': [('PORTC',0x60)],
    },

	 {'description': 'PINA: 0x74 => PC: 0x70',
    'steps': [ {'inputs': [('PINA',0x74)], 'iterations': 5 } ],
    'expected': [('PORTC',0x70)],
    },

	 {'description': 'PINA: 0x3A => PC: 0xBE',
    'steps': [ {'inputs': [('PINA',0x3A)], 'iterations': 5 } ],
    'expected': [('PORTC',0xBE)],
    }


    ]

# Optionally you can add a set of "watch" variables these need to be global or static and may need
# to be scoped at the function level (for static variables) if there are naming conflicts. The 
# variables listed here will display everytime you hit (and stop at) a breakpoint
#watch = ['<function>::<static-var>','PORTB']

