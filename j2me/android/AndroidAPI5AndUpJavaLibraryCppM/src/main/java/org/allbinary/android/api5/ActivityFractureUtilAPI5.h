
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H
        #define ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H

#include <android/app/Activity.h>

      
#include <org/allbinary/input/motion/button/TouchScreenTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/android/api1/ActivityFractureUtilAPI1.h>

      
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI5: public ActivityFractureUtilAPI1 {

    private: static const ActivityFractureUtilAPI5 instance5 = ActivityFractureUtilAPI5();

    public: static ActivityFractureUtilAPI5 getInstance();

    private: const std::string FEATURE_TOUCHSCREEN_MULTITOUCH = "android.hardware.touchscreen.multitouch";

    private: const std::string FEATURE_TOUCHSCREEN = "android.hardware.touchscreen";

    private: const std::string FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT = "android.hardware.touchscreen.multitouch.distinct";

    public: void process(Activity activity);

    private: bool isTouch(Activity activity);

    private: bool isMultiTouch(Activity activity);

    private: bool isMultiTouchDistinct(Activity activity);

    private: bool isFeature(Activity activity, std::string property);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H
