#include "push_swap.h"
void	pb(t_data *data)
{
    if(take_put(data->b,data->a)==1)
        data->counter.pb++;
}