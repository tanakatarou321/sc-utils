# sc-utils
This is a utility that can be used in the SystemC code.

## Download
You can download the sc-utils from Git repository.
```
git clone https://github.com/tanakatarou321/sc-utils
```

## Usage
### Setup
Add include directory
```
sc-utils/include
```
## Example
```c
#include <systemc.h>
#include "sc-utils.h"
int sc_main(int argc, char* argv[]) {
    print_hierarchy();

    return 0;
}
```

## Functions
### print_hierarch()
Output hierachical structure
```
print_hierarchy();
```
