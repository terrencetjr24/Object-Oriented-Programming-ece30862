#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <string>
using namespace std;

template <class T> class Node  {
   T data;
   Node* prev; 
   Node* next; 
public:
   Node(const T& data, Node<T>* prev, Node<T>* next);
   Node(const T& data);
   void setNext(Node* nP);
   void setPrev(Node* nP);
   Node* getNext( ) const;
   Node* getPrev( ) const;
   virtual ~Node( );
   T& getData( );
   bool operator<(const Node&) const;
   bool operator==(const Node&) const;
};

template<typename T>
bool isPrimitiveType() {
    return false;
}

template<>
bool isPrimitiveType<int>() {
    return true;
}

template<>
bool isPrimitiveType<float>() {
    return true;
}

template<>
bool isPrimitiveType<double>() {
    return true;
}

template <typename T> Node<T>::Node(const T& data, Node<T>* prev, Node<T>* next) : 
   data(data), prev(prev), next(next) { }

template <typename T> Node<T>::Node(const T& data) :
    data(data){}

template <class T> void Node<T>::setNext(Node<T>* nP){
    next = nP;
}
template <class T> void Node<T>::setPrev(Node<T>* nP){
    prev = nP;
}
template <class T>  Node<T>* Node<T>::getNext( ) const{
    return next;
}
template <class T> Node<T>* Node<T>::getPrev( ) const{
    return prev;
}
template <class T> Node<T>::~Node( ){}

template <class T> T& Node<T>::getData( ){
    return data;
}
template <class T> bool Node<T>::operator<(const Node<T>& arg1) const{
    return data < arg1.data;
}
template <class T> bool Node<T>::operator==(const Node<T>& arg1) const{
    return data == arg1.data;
}

#endif /* NODE_H_ */
