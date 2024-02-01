#ifndef MYPAIR_H_INCLUDED
#define MYPAIR_H_INCLUDED

 template <class T>
class MyPair{
private:
    T first;
    T second;
    public:
    MyPair(T var1, T var2){
        first = var1;
        second = var2;
    }
    T get_first(){
        return first;
    }
    T get_second(){
        return second;
    }
    void set_first(T setThis){
        this->first = setThis;
    }
    void set_second(T setThis){
        this->second = setThis;
    }
};


#endif // MYPAIR_H_INCLUDED
