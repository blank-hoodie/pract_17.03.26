#ifndef TOP_IT_VECTOR_HPP
#define TOP_IT_VECTOR_HPP
#include <cstddef>
namespace topit {
    template < class T >
    struct Vector {
        Vector();
        ~Vector();
        
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
#endif
