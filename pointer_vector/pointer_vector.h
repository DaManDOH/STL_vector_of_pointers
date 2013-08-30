// pointer_vector.h

// Dan C. Wlodarski

#ifndef __dcw_pointer_vector__
#define __dcw_pointer_vector__

#include <vector>

template <typename T>
class pointer_vector : protected std::vector<T*> {
public:
	~pointer_vector();
};

template <typename T>
pointer_vector<T>::~pointer_vector() {
	std::cerr << "\n\n** In the destructor" << std::endl;
	
	cin.get();
}

#endif /* __dcw_pointer_vector__ */
