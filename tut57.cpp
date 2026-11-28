// Virtual Functions Example + Creation Rules in C++

#include <iostream>
using namespace std;

class YtChannel
{
protected:
    string title;
    float rating;

public:
    YtChannel() {};
    YtChannel(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display()
    {
        cout << "Default Output";
    }
};

class YtVideo : public YtChannel
{
    float video_length;

public:
    YtVideo(string t, float r, float vl) : YtChannel(t, r)
    {
        video_length = vl;
    }
    void display()
    {
        cout << "This video is titled  '" << title << "'" << endl;
        cout << "This video is rated " << rating << "/5" << endl;
        cout << "Length of this video is " << video_length << " minutes" << endl;
    }
};

class YtText : public YtChannel
{
    int words;

public:
    YtText(string t, float r, int w) : YtChannel(t, r)
    {
        words = w;
    }

    void display()
    {
        cout << "This text tutorial is titled  '" << title << "'" << endl;
        cout << "This text tutorial is rated " << rating << "/5" << endl;
        cout << "Number of words in this text tutorial are " << words << endl;
    }
};

int main()
{
    string title;
    float rating, video_length;
    int words;

    title = "c++ tutuorial";
    video_length = 15.58f;
    rating = 4.5f;
    YtVideo cpp_video(title, rating, video_length);
    // cpp_video.display();

    title = "c++ tutuorial text";
    words = 987;
    rating = 4.5f;
    YtText cpp_text(title, rating, words);
    // cpp_text.display();

    YtChannel *ptr[2];
    ptr[0] = &cpp_video;
    ptr[1] = &cpp_text;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}

/*
Rules for virtual funcions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be friend of another class
4. A virtual function in base class may not be used
5. If a virtual function is defined in base class , it dose't need to be redefined in the derived class

*/