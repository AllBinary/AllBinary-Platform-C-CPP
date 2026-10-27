
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_CPP
        #define ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/api1/ActivityFractureUtilAPI1.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <android/app/Activity.h>

      
#include <android/view/WindowManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ActivityFractureUtilAPI1::ActivityFractureUtilAPI1() {
        }
        auto ActivityFractureUtilAPI1::instance_owner() -> ActivityFractureUtilAPI1* { static std::unique_ptr<ActivityFractureUtilAPI1> value(new ActivityFractureUtilAPI1()); return value.get(); }
ActivityFractureUtilAPI1* ActivityFractureUtilAPI1::instance = ActivityFractureUtilAPI1::instance_owner();

    auto ActivityFractureUtilAPI1::getInstance() -> ActivityFractureUtilAPI1*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI1::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ActivityFractureUtilAPI1::process(Activity* activity) -> void{
}


    auto ActivityFractureUtilAPI1::setFullScreen(Activity* activity) -> void{
activity->getWindow()->setFlags(WindowManager::LayoutParams->FLAG_FULLSCREEN, WindowManager::LayoutParams->FLAG_FULLSCREEN);
    
}




        #endif //ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_CPP
