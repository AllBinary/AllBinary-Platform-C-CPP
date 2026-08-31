
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H
        #define ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <android/app/Activity.h>

      
#include <android/view/WindowManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI1: public ActivityFractureUtil {
        

    private: static const instance: ActivityFractureUtilAPI1 = new ActivityFractureUtilAPI1();

    public static ActivityFractureUtilAPI1 getInstance();

                //@Throws(Exception.constructor)
            
    public process(Activity activity);

    public setFullScreen(Activity activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H
