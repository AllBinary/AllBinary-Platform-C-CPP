
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H
        #define ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H

            #include <hilog/log.h>
        
            #include "../../../java/lang/Object.h"
        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <android/view/ViewGroup.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewSwapper
            : public Object
         {
        

    public static const NULL_VIEW_ARRAY: std::vector<View> = [];

    private: const rootViewId: int32_t;

    private: const activity: Activity;

    private: currentMainViewId: int32_t =  -1;

    private: mainViewArray: std::vector<View> = ViewSwapper.NULL_VIEW_ARRAY;

    private: topViewArray: std::vector<View> = ViewSwapper.NULL_VIEW_ARRAY;

public constructor (Activity activity, int32_t rootViewId);

    public setMainViews(std::vector<View> viewArray);

    public setTopViewArray(std::vector<View> topViewArray);

    public setMainView(int32_t id);

};

            


        #endif //ORG_ALLBINARY_ANDROID_VIEWSWAPPER_H
