#ifndef LANG_PROBLEMS_H
#define LANG_PROBLEMS_H

// for lang_000
int virtual_dtor_demo();

class virtDtor {
public:
    virtDtor() {}
    virtual ~virtDtor() { cout << "virtDtor()::~virtDtor() called" << endl; }
};

class childVirtDtor : public virtDtor {
public:
    childVirtDtor() {}
    virtual ~childVirtDtor() { cout << "childVirtDtor()::~childVirtDtor() called" << endl; }

};

class nonvirtDtor {
public:
    nonvirtDtor() {}
    ~nonvirtDtor() { cout << "nonvirtDtor()::~nonvirtDtor() called" << endl; }
};

class childNonvirtDtor : public nonvirtDtor {
public:
    childNonvirtDtor() {}
    ~childNonvirtDtor() { cout << "childNonvirtDtor()::~childNonvirtDtor() called... Hello C++ 11" << endl; }

};



#endif // LANG_PROBLEMS_H
