#pragma once

#include <iostream>
#include <vector>
using namespace std;
namespace itertools{

	class range {

		public:
		range(int _b, int _e):b(_b),e(_e){		
		}
		class iterator{
			int index;

			public:
			iterator(int start) : index(start) {}

			int operator*() const {return index;}

			const iterator &operator++() {
				++index;
				return *this;
			}
			bool operator==(const iterator &other) const {
				return other.index==index;
			}
			iterator& operator=(const iterator& other) {
				if (*this != other){
					this->index = other.index;
				}
				return *this;
			}


			bool operator!=(const iterator &other) const {
				return other.index!=index;
			}
                };

		iterator begin() {return b; }
		iterator end() {return e;}
		typedef int value_type;
		private:
			iterator b;
			iterator e;
	};
}
