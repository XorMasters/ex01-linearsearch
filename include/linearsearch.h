#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

template <class T>
int64_t find(const T& value, T array[], size_t size) {
	if (array == NULL) return -1;

	for (int i = 0; i < size; i++) {
		if (array[i] == value) return i;
	}
	return -1;
}

}}}}