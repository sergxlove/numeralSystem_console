#include "enum.h"

var convert_to_enum(int var)
{
    if (var == 1)
    {
        return var::var_bin;
    }
    if (var == 2)
    {
        return var::var_oct;
    }
    if (var == 3)
    {
        return var::var_dec;
    }
    if (var == 4)
    {
        return var::var_hex;
    }
    return var_no_indef;
}
