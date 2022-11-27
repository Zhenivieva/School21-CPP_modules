//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

template <typename T>
void  iter(T *t, int len, void (*func)(T const &t))
{
    for (int i = 0; i < len; i++)
        func(t[i]);
}
