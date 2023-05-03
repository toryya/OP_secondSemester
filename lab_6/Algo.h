//
// Created by user on 26.04.2023.
//

#ifndef LAB_5_ALGO_H
#define LAB_5_ALGO_H

class Algo {
private:

public:
    template<class Iteratorr>
    static bool is_palindrom(Iteratorr first, Iteratorr last);

    template<class Iterator2, class Compare>
    bool is_sorted(Iterator2 first, Iterator2 last, Compare comp);

    template<class T,class Iterator3>
    T find_not(Iterator3 first, Iterator3 last, T a);

};

#endif //LAB_6_ALGO_H
