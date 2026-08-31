
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
        

    private: static const instance5: ActivityFractureUtilAPI5 = new ActivityFractureUtilAPI5();

    public static ActivityFractureUtilAPI5 getInstance();

    private: const FEATURE_TOUCHSCREEN_MULTITOUCH: string = "android.hardware.touchscreen.multitouch";

    private: const FEATURE_TOUCHSCREEN: string = "android.hardware.touchscreen";

    private: const FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT: string = "android.hardware.touchscreen.multitouch.distinct";

    public process(Activity activity);

    bool isTouch(Activity activity);

    bool isMultiTouch(Activity activity);

    bool isMultiTouchDistinct(Activity activity);

    bool isFeature(Activity activity, string property);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_H
