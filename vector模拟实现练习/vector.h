#pragma once

namespace bee
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		size_t capacity()
		{
			return (_end_of_storage - _start);
		}

		size_t size()
		{
			return _finish - _start;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t oid_size = _finish - _start;

				iterator tmp = new T[n];
				strcmp(tmp, _start, sizeof(T) * size());
				delete[] _start;

				_start = tmp;
				_finish = tmp + old_size;
				_end_of_storage = tmp + n;
			}
		}

	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
	};
}