template <typename T>
class PROPERTY {
public:
    virtual ~PROPERTY() = default; //C++11: use override and =default;
    virtual T& operator= (const T& f) { return value = f; }
    virtual const T& operator() () const { return value; }
    virtual explicit operator const T& () const { return value; }
    virtual T* operator->() { return &value; }
protected:
    T value;
};