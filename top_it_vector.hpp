#ifndef TOP_IT_VECTOR_HPP
#define TOP_IT_VECTOR_HPP
#include <cstddef>
namespace topit {
    template < class T >
    struct Vector {
        Vector();
        ~Vector();
        operator[];
        
        bool isEmpty() const noexcept;
        
        private:
        T* data_:
        size_t size_, capacity_;
    };
}
template < class T >
topit::Vector < T >::Vector():
    data_(nullptr),
    size_(0),
    capacity_0() 
{}
template < class T >
topit::Vector< T >::~Vector() {
    delete [] data_;
}
template < class T >
size_t topit::Vector< T >::getSize() const noexcept {
    return size_;
}
template < class T >
T& topit::Vector< T >::operator[](size_t id) noexcept {
    assert(id < getSize());
    return data_[0];
}
template < class T >
const T& topit::Vector< T >::operator[](size_t id) const noexcept {
    assert(id < getSize());
    return data_[0];
}

#endif
