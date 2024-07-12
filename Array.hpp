//Array.hpp
//Array header file

#ifndef Array_HPP
#define Array_HPP
		
template<typename T>
class Array {
private:
	T* m_data;
	int m_size;
public:
	static int DefaultSize0;
	Array();
	virtual ~Array();
	Array(int size);
	Array(const Array<T>& other);
	Array<T>& operator = (const Array<T>& other);
	int Size() const { return m_size; }
	void SetElement(int index, const T& data);
	T& GetElement(int index) const;
	const T& operator [] (int index) const;
	T& operator [] (int index);
	static int DefaultSize() { return DefaultSize0; }
	static void DefaultSize(int newsize);

};

#ifndef Array_cpp 
#include "Array.cpp"
#endif

#endif