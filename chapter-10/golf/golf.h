#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
    public:
        Golf();
        Golf(const char * name, int he);
        void set_golf();
        void set_handicap(int he);
        void showgolf() const;
};
#endif
