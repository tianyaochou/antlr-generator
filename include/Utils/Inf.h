#ifndef INF_H
#define INF_H
template <typename T>
struct WithInf
{
    bool isInf = false;
    T value;

    WithInf() {}

    WithInf(bool isInf, T val) : isInf(isInf), value(val) {}

    WithInf(T t)
    {
        isInf = false;
        value = t;
    }
};

template <typename T>
WithInf<T> operator+(const WithInf<T> &lhs, const WithInf<T> &rhs)
{
    if (lhs.isInf || rhs.isInf)
    {
        return WithInf(true, T());
    }
    else
    {
        return WithInf(false, lhs.value + rhs.value);
    }
}

template<typename T>
bool operator<(const WithInf<T> &lhs, const WithInf<T> &rhs)
{
    if (!lhs.isInf && !rhs.isInf)
    {
        return lhs.value < rhs.value;
    }
    else if (!lhs.isInf && rhs.isInf)
    {
        return true;
    }
    else if (lhs.isInf && !rhs.isInf)
    {
        return false;
    }
    else
    {
        return false;
    }
}

template<typename T>
bool operator==(const WithInf<T> &lhs, const WithInf<T> &rhs)
{
    if (!lhs.isInf && !rhs.isInf)
    {
        return lhs.value == rhs.value;
    }
    else if (!lhs.isInf && rhs.isInf)
    {
        return false;
    }
    else if (lhs.isInf && !rhs.isInf)
    {
        return false;
    }
    else
    {
        return true; // TODO: inf == inf ?
    }
}
#endif