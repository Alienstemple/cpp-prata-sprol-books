// golf.h -- для pe9-1.cpp
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
void setgolf(golf & g, const char * name, int he);
int setgolf(golf & g);
void handicap(golf & g, int he);
void showgolf(const golf & g);