
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H
        #define ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <hilog/log.h>
        
            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Activity;
class View;
class ViewGroup;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ViewSwapper
            : public virtual Object
         {

    public: static std::vector<View*> NULL_VIEW_ARRAY;

    private: int32_t rootViewId;

    private: Activity* activity;

    private: int32_t currentMainViewId =  -1;

    private: std::vector<View*> mainViewArray;

    private: std::vector<View*> topViewArray;

public: ViewSwapper(Activity* activity, int32_t rootViewId);

    public: void setMainViews(std::vector<View*> viewArray);

    public: void setTopViewArray(std::vector<View*> topViewArray);

    public: void setMainView(int32_t id);

};

            


        #endif //ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<android/view/ViewGroup.h>)
#include <android/view/ViewGroup.h>
#endif

        #endif
    
