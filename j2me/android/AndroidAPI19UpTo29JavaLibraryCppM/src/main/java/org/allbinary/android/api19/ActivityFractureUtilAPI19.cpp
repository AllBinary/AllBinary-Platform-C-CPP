
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_CPP
        #define ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/api19/ActivityFractureUtilAPI19.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ActivityFractureUtilAPI19::ActivityFractureUtilAPI19() {
        }
        auto ActivityFractureUtilAPI19::instance19_owner() -> ActivityFractureUtilAPI19* { static std::unique_ptr<ActivityFractureUtilAPI19> value(new ActivityFractureUtilAPI19()); return value.get(); }
ActivityFractureUtilAPI19* ActivityFractureUtilAPI19::instance19 = ActivityFractureUtilAPI19::instance19_owner();

    auto ActivityFractureUtilAPI19::getInstance() -> ActivityFractureUtilAPI19*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI19::instance19;
    
}


    auto ActivityFractureUtilAPI19::setFullScreen(Activity* activity) -> void{

    View* decorView = activity->getWindow()->getDecorView();;
    

    int32_t visibility = View::SYSTEM_UI_FLAG_IMMERSIVE_STICKY | View::SYSTEM_UI_FLAG_HIDE_NAVIGATION | View::SYSTEM_UI_FLAG_FULLSCREEN;;
    
decorView->setSystemUiVisibility(visibility);
    
}




        #endif //ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_CPP
