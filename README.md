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
#### Ex)
```
gcc -I sc-utils/include -I <systemc_install_dir> <file> <option>
```
## Functions
### print_hierarch()
Output hierachical structure
```
sc_utils::print_hierarchy();
```
#### Ex)
```c
#include <systemc.h>
#include "sc-utils.h"
int sc_main(int argc, char* argv[]) {
    sc_utils::print_hierarchy();  // Output hierarcal structure
    return 0;
}
```
