#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};


double overlap(Rect *p,Rect *q){
if((p->x<=q->x && p->x+p->w>q->x) || (q->x<=p->x && q->x+q->w>p->x)){
 if((p->y<=q->y && p->y+p->h>q->y) || (q->y<=p->y && q->y+q->h>p->y)){
double f,g,h,j;
f= q->x-p->x;
g= q->y-p->y;
if((p->x+p->w >= q->x+q->w) && (p->y-p->h <= q->y-q->h) && q->x>=p->x && p->y>=q->y){
    return q->h*q->w;
}else if((q->x+q->w >= p->x+p->w) && (q->y-q->h <= p->y-p->h) && p->x>=q->x && q->y<=p->y){
    return p->h*p->w;
}
else if(f >= 0 && g >= 0 ){
h = p->w-f;
j = q->h-g;
return h*j;
}else if(f >= 0 && g < 0 ){
h = p->w-f;
j = q->h;
return h*j;
}else if(f < 0 && g < 0 ){
h = q->w+f;
j = p->h+g;
return h*j;
}else if(f < 0 && g >= 0 ){
h = q->w+f;
j = q->h-g;
return h*j;
}
}else{return 0;}
}else{return 0;}
return 0;
}
