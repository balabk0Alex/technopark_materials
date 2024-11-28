#ifndef GENERATESIGNAL_H
#define GENERATESIGNAL_H

#include <vector>

template<typename T>
class GenerateSignal{
public:
    GenerateSignal() = 0;
    virtual void generate() = 0;
    virtual void record() = 0;

protected:
    std::vector<T> generatesignal;
};

template<typename T>
class GenerateWBarker : public GenerateSignal<T>
{
public:
    GenerateWBarker(std::vector<T> &barker_code, size_t size, double k );
    virtual void generate();
    virtual void record();
protected:
    double coeff_signal_div_barkersize;
    size_t size;
    std::vector<T> barker_arr;
};

#endif
