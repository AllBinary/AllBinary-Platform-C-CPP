
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_CPP
        #define ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/api30/ActivityFractureUtilAPI30.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/app/Activity.h>

      
#include <android/view/Window.h>

      
#include <androidx/core/view/WindowCompat.h>

      
#include <androidx/core/view/WindowInsetsCompat.h>

      
#include <androidx/core/view/WindowInsetsControllerCompat.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ActivityFractureUtilAPI30::ActivityFractureUtilAPI30() {
        }
        auto ActivityFractureUtilAPI30::instance30_owner() -> ActivityFractureUtilAPI30* { static std::unique_ptr<ActivityFractureUtilAPI30> value(new ActivityFractureUtilAPI30()); return value.get(); }
ActivityFractureUtilAPI30* ActivityFractureUtilAPI30::instance30 = ActivityFractureUtilAPI30::instance30_owner();

    auto ActivityFractureUtilAPI30::getInstance() -> ActivityFractureUtilAPI30*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ActivityFractureUtilAPI30::instance30;
    
}


    auto ActivityFractureUtilAPI30::setFullScreen(Activity* activity) -> void{

    Window* window = activity->getWindow();;
    

    WindowInsetsControllerCompat* windowInsetsController = WindowCompat::getInsetsController(window, window->getDecorView());;
    
windowInsetsController->hide(WindowInsetsCompat::Type->systemBars());
    
windowInsetsController->setSystemBarsBehavior(WindowInsetsControllerCompat::BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
    
}




        #endif //ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_CPP
