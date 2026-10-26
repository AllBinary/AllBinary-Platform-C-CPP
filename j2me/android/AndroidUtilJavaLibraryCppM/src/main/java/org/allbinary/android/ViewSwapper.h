
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H
        #define ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H

            #include <hilog/log.h>
        
            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <android/view/ViewGroup.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewSwapper
            : public Object
         {

    public: static const std::vector<View> NULL_VIEW_ARRAY = {};

    private: int32_t rootViewId;

    private: Activity activity;

    private: int32_t currentMainViewId =  -1;

    private: std::vector<View> mainViewArray = ViewSwapper::NULL_VIEW_ARRAY;

    private: std::vector<View> topViewArray = ViewSwapper::NULL_VIEW_ARRAY;

public: ViewSwapper(Activity activity, int32_t rootViewId);

    public: void setMainViews(std::vector<View> viewArray);

    public: void setTopViewArray(std::vector<View> topViewArray);

    public: void setMainView(int32_t id);

};

            


        #endif //ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H
