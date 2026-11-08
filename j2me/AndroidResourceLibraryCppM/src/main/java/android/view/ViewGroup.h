#ifndef ANDROID_VIEW_VIEWGROUP_H
#define ANDROID_VIEW_VIEWGROUP_H
#include "android/view/View.h"
class ViewGroup : public View {
public:
    virtual void addView(View*) {}
    virtual void removeView(View*) {}
};
#endif
