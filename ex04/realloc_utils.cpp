#include "replace_search.hpp"

std::string realloc_tab(std::string &tab, std::string s)
{
    std::string res;

    res = tab + s + '\n';
    return (res);
}
