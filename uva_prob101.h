#ifndef UVA_PROB101_H
#define UVA_PROB101_H


// Wrapper class for the entire application. It creates a singleton instance of the app class and instantiates the command pattern structure
class Application {
private:
    static bool m_created;
    static Application *m_pSelf;
    Application() {}
protected:
    virtual void run() = 0;
public:
    static Application *instance();
    ~Application() { m_created = false; }
};

class Command {


};

#endif // UVA_PROB101_H