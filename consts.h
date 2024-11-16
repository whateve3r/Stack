enum Errors
{
    STACK_OVERFLOW = 100,
    STACK_UNDERFLOW = 101,

    NULL_POINTER = 102,
    NULL_STACK = 103,

    FIRST_CANARY_ERROR = 104,
    LAST_CANARY_ERROR = 105,

    NEGATIVE_SIZE = 106,
    NEGATIVE_CAPACITY = 107,
    SizeCapacityERROR = 109
};

enum Consts
{
    SUCCESS = 108,
    FIRST_CANARY = 0xAB0BA,
    LAST_CANARY = 0xDEDAB0BA
};
