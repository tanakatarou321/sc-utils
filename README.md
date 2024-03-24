# sc-utils
This is a utility that can be used in the SystemC code.

## Download
You can clone the sc-utils from Git repository.
```git
git clone https://github.com/tanakatarou321/sc-utils
```

## Usage
### Setup
Include the following directory in the build command.
```
sc-utils/include
```
## Functions
### print_hierarch()
Output hierachical structure
```
print_hierarchy();
```
#### Example
```c
#include <systemc.h>
#include "sc-utils.h"
int sc_main(int argc, char* argv[]) {
    print_hierarchy();  // Output hierarcal structure
    return 0;
}
```
