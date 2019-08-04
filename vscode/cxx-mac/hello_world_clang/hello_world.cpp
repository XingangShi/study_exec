#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

std::string remove_ctrl(std::string s)
{
    std::string result;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 0x20)
            result = result + s[i];
    }

    return result;
}

std::string remove_ctrl_mutating(std::string s)
{
    std::string result;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 0x20)
            result += s[i];
    }

    return result;
}

std::string remove_ctrl_reserve(std::string s)
{
    std::string result;
    result.reserve(s.length());
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 0x20)
            result += s[i];
    }

    return result;
}

std::string remove_ctrl_ref_args(std::string const& s)
{
    std::string result;
    result.reserve(s.length());
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 0x20)
            result += s[i];
    }

    return result;
}

std::string remove_ctrl_ref_args_it(std::string const& s)
{
    std::string result;
    result.reserve(s.length());
    for (auto itr=s.begin(), end = s.end(); itr != end; ++itr)
    {
        if (*itr >= 0x20)
            result += *itr;
    }

    return result;
}

void remove_ctrl_ref_result_it(std::string& result, std::string const& s)
{
    result.clear();

    result.reserve(s.length());
    for (auto itr=s.begin(), end = s.end(); itr != end; ++itr)
    {
        if (*itr >= 0x20)
            result += *itr;
    }
}

void remove_ctrl_cstrings(char* dstrp, char const* srcp, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        if (srcp[i] >= 0x20)
            *dstrp++ = srcp[i];
    *dstrp = 0;
}

std::string remove_ctrl_block(std::string const& s)
{
    std::string result;
    for (size_t b = 0, i = b, e = s.length(); b < e; b = i + 1)
    {
        for (i = b; i < e; ++i)
            if (s[i] < 0x20)
              break;
        result = result + s.substr(b, i - b);
    }
    return result;
}

void remove_ctrl_append(std::string& result, std::string const& s)
{
    result.clear();
    result.reserve(s.length());

    for (size_t b = 0, i = b, e = s.length(); b < e; b = i + 1)
    {
        for (i = b; i < e; ++i)
            if (s[i] < 0x20)
              break;
        result.append(s, b, i - b);
    }
}

std::string remove_ctrl_erase(std::string s)
{
    for (size_t i = 0; i < s.length();)
        if (s[i] < 0x20)
            s.erase(i, 1);
        else ++i;
    return s;
}

void get_excute_time(std::clock_t start_time)
{
    double time_elipse =  ((clock() - start_time) * 1000.0 / CLOCKS_PER_SEC);
    std::cout << " Function time elipse is " << time_elipse << std::endl << std::endl;
}

int main()
{
    int age = 0;
    string c = "Init a string value";
    std::cout << "hello, world"  << std::endl;
    age += 1;
    std::cout << "age is " << age << std::endl;

    std::string my_name = "Geekpanshi";
    std::cout << "My name is " << my_name << std::endl;

    char* my_name_c = (char*)malloc(my_name.length() + 1);
    strcpy(my_name_c, "GeekPanshi");

    std::cout << "my name with C " << my_name_c << std::endl;

    int i,j;
    i = 3;printf("i %d\n", i);
    j = i;printf("i %d, j %d\n\n", i, j);
    i = 5;

    std::clock_t start_time = clock();
    std::cout << "func of remove_ctrl, result is " << remove_ctrl(my_name) << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::cout << "func of remove_ctrl_mutating, result is " << remove_ctrl_mutating(my_name) << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::cout << "func of remove_ctrl_reserve, result is " << remove_ctrl_reserve(my_name) << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::cout << "func of remove_ctrl_ref_args, result is " << remove_ctrl_ref_args(my_name) << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::cout << "func of remove_ctrl_ref_args_it, result is " << remove_ctrl_ref_args_it(my_name) << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::string result("");
    remove_ctrl_ref_result_it(result, my_name);
    std::cout << "func of remove_ctrl_ref_result_it, result is " << result << std::endl;
    get_excute_time(start_time);


    start_time = clock();
    char * srcp = (char*)malloc(strlen("Geekpanshi")  + 1);
    strcpy(srcp, "Geekpanshi");
    char * dstrp = (char*)malloc(strlen(srcp));
    remove_ctrl_cstrings(dstrp, srcp, strlen(srcp));
    std::cout << "func of remove_ctrl_cstrings, result is " << dstrp << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::cout << "func of remove_ctrl_block, result is " << remove_ctrl_block(my_name) << std::endl;
    get_excute_time(start_time);


    start_time = clock();
    remove_ctrl_append(result, my_name);
    std::cout << "func of remove_ctrl_append, result is " << result << std::endl;
    get_excute_time(start_time);

    start_time = clock();
    std::cout << "func of remove_ctrl_erase, result is " << remove_ctrl_erase(my_name) << std::endl;
    get_excute_time(start_time);

    return 0;
}
