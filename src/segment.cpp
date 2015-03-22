#include "segment.h"
#include <iostream>
using namespace std;

segment::segment(){
    is_painted = 0;
    next = this;

}

void segment::paint(char paintcolor){
    color=paintcolor;
    is_painted = 1;
}

char segment::get_color(){
    if(is_painted)
        return color;
    else
        //cout<<"jest czysty";
        return '.';
}

void segment::add_segment(){
    segment s;

    s.next=next;
    next = &s;
}

