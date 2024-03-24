#ifndef _PRINT_HIERARCHY_
#include <systemc.h>
#define _PRINT_HIERARCHY_
void _print_hierarchy(sc_object* parent){
    std::cout << parent->name() << "," << parent->kind() << std::endl;
    if (parent->kind() == "sc_module"){
        for (int i = 0; i < parent->get_child_objects().size(); i++) {
            sc_object* children = parent->get_child_objects()[i];
            _print_hierarchy(children);
        }
    }
}

void print_hierarchy(){
    for (int i = 0; i < sc_get_top_level_objects().size(); i++) {
        sc_object* children = sc_get_top_level_objects()[i];
        _print_hierarchy(children);
    }
}
#endif
