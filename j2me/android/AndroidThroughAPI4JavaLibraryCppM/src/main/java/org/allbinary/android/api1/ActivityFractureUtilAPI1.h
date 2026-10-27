
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <android/app/Activity.h>

      
#include <android/view/WindowManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI1: public ActivityFractureUtil {

    private: static ActivityFractureUtilAPI1* instance() { static std::unique_ptr<ActivityFractureUtilAPI1> value(new ActivityFractureUtilAPI1()); return value.get(); }

    public: static ActivityFractureUtilAPI1* getInstance();

                //@Throws(Exception.constructor)
            
    public: void process(Activity* activity);

    public: void setFullScreen(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H
