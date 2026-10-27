
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Activity;
class TouchScreenTypeFactory;
class CommonStrings;
class PreLogUtil;
#include <org/allbinary/android/api1/ActivityFractureUtilAPI1.h>
class TouchScreenFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ActivityFractureUtilAPI5: public ActivityFractureUtilAPI1 {

    private: static ActivityFractureUtilAPI5* instance5_owner();
    private: static ActivityFractureUtilAPI5* instance5;

    public: static ActivityFractureUtilAPI5* getInstance();


            
    public: ActivityFractureUtilAPI5();
        
    private: const std::string FEATURE_TOUCHSCREEN_MULTITOUCH = "android.hardware.touchscreen.multitouch";

    private: const std::string FEATURE_TOUCHSCREEN = "android.hardware.touchscreen";

    private: const std::string FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT = "android.hardware.touchscreen.multitouch.distinct";

    public: void process(Activity* activity);

    private: bool isTouch(Activity* activity);

    private: bool isMultiTouch(Activity* activity);

    private: bool isMultiTouchDistinct(Activity* activity);

    private: bool isFeature(Activity* activity, std::string property);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchScreenTypeFactory.h>)
#include <org/allbinary/input/motion/button/TouchScreenTypeFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/android/api1/ActivityFractureUtilAPI1.h>)
#include <org/allbinary/android/api1/ActivityFractureUtilAPI1.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchScreenFactory.h>)
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>
#endif

        #endif
    
