#include "GenerateSignal.hpp"


template<typename T>
GenerateWBarker<T>::GenerateWBarker(std::vector<T> &barker_code, size_t size, double k ):coeff_signal_div_barkersize(k),size(size), barker_arr(barker_code)
{

}

/*fix:short condition*/
template<typename T>
void GenerateWBarker<T>::generate()
{
    siz_t size_b, size_s;
    size_b = barker_arr.size();
    size_s = coeff_signal_div_barkersize * size_b;

    //allocate memory
    for(int i = 0; i < size; )
    {
        if(size_b + i < size)
        {
            generatesignal.insert(generatesignal.begin() + i,barker_arr.begin(), barker_arr.end());//full copy
            i += size_b;
        }
        else
        {
            generatesignal.insert(generatesignal.begin() + i,barker_arr.begin(),barker_arr.begin() + size - i);//part copy
            break;
        }



    }

}

template<typename T>
void GenerateWBarker<T>::record()
{
}



