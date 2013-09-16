#include <list>
#include <iostream>

using namespace std;

typedef int (*fp)(int);

std::list<int> function(int i, std::list<fp> funct) {
	
	std::list<int> lst;
	for(std::list<fp>::iterator it = funct.begin(); it != funct.end();
		 it++) {
		
		lst.push_back((*it)(i));
	}

	return lst;
}

int duplicate(int i) {
	return i * 2;
}

int triplate(int i) {
	return i * 3;
}

int division(int i) {
	return i / 2;
}

int main() {

	std::list<fp> lst;
	lst.push_back(&duplicate);
	lst.push_back(&triplate);
	lst.push_back(&division);
	
	int x;
	std::cin >> x;
	list<int> l = function(x, lst);

	for(std::list<int>::iterator it = l.begin(); it != l.end();
		++it) {
		
		std::cout << *it << std::endl;
	}
	return 0;
} 
