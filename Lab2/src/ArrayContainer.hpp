#ifndef __ARRAYCONTAINER_H__
#define __ARRAYCONTAINER_H__

#define DEFAULT_SIZE 50

template<class T> class ArrayContainer:public Container<T>
{
public:
	ArrayContainer(int size=DEFAULT_SIZE){
		//newArray = Array[size];
		this->ArrayContainer() = Array[size];
	}
	~ArrayContainer(){}
	void Clear(){}
        int Size(){
        	int y;
        	for(object x: this->ArrayContainer()){
        		y++;
        	}
        	return y;
        	//std::cout << y;
        }
        bool Empty(){return true;}
        int MaxSize(){return 0;}
        void Insert(const T& item){}
        bool Contains(const T&  item){return false;}
        T* Find(const T& item){return NULL;}
	void Remove(const T& item){}
};

#endif
