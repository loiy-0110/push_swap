#include "push_swap.h"
void	pa(t_data *data)
{
    if(take_put(data->a,data->b)==1)
        data->counter.pa++;
}