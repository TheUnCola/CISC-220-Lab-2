#ifndef __ARRAYCONTAINER_H__
#define __ARRAYCONTAINER_H__

#define DEFAULT_SIZE 50

template<class T> class ArrayContainer:public Container<T>
{
public:
	ArrayContainer(int size=DEFAULT_SIZE){}
	~ArrayContainer(){}
	void Clear(){}
        int Size(){return 0;}
        bool Empty(){return true;}
        int MaxSize(){return 0;}
        void Insert(const T& item){}
        bool Contains(const T&  item){return false;}
        T* Find(const T& item){return NULL;}
	void Remove(const T& item){}
};

#endif
