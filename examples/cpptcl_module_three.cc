#include "cpptcl/cpptcl.h"
#include <string>

using namespace std;
using namespace Tcl;

class Person {
  public:
	Person(string const &n) : name(n) {}

	void setName(string const &n) { name = n; }
	string getName() { return name; }

  private:
	string name;
};

CPPTCL_MODULE(Cpptcl_module_three, i) { i.class_<Person>("Person", init<string const &>()).def("setName", &Person::setName).def("getName", &Person::getName); }
