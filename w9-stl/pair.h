#ifndef __PAIR_H__
#define __PAIR_H__



template <class T1, class T2>
class Pair{
    private:
        T1 _first;
        T2 _second;
    public:
        Pair(T1 first, T2 second): _first(first), _second(second){}
        // Pair(): Pair(0,0){}



};




#endif