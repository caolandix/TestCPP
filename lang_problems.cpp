#include "commondefs.h"
#include "lang_problems.h"

int virtual_dtor_demo() {
    cout << "This test demonstrates how a virtual vs. non-virtual dtor operates." << endl;
    cout << "If the class ~childNonvirtDtor is called, then you know this is C++ 11 or better..." << endl;
    childVirtDtor *cvdtor = new childVirtDtor();
    childNonvirtDtor *cnvdtor = new childNonvirtDtor();

    delete cvdtor;
    delete cnvdtor;

    return 0;
}
