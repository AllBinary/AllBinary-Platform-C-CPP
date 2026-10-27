
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API16_ACTIVITYFRACTUREUTILAPI16_CPP
        #define ORG_ALLBINARY_ANDROID_API16_ACTIVITYFRACTUREUTILAPI16_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/api16/ActivityFractureUtilAPI16.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ActivityFractureUtilAPI16::ActivityFractureUtilAPI16() {
        }
        auto ActivityFractureUtilAPI16::instance16_owner() -> ActivityFractureUtilAPI16* { static std::unique_ptr<ActivityFractureUtilAPI16> value(new ActivityFractureUtilAPI16()); return value.get(); }
ActivityFractureUtilAPI16* ActivityFractureUtilAPI16::instance16 = ActivityFractureUtilAPI16::instance16_owner();

    auto ActivityFractureUtilAPI16::getInstance() -> ActivityFractureUtilAPI16*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI16::instance16;
    
}


    auto ActivityFractureUtilAPI16::setFullScreen(Activity* activity) -> void{

    View* decorView = activity->getWindow()->getDecorView();;
    

    int32_t visibility = View::SYSTEM_UI_FLAG_HIDE_NAVIGATION | View::SYSTEM_UI_FLAG_FULLSCREEN;;
    
decorView->setSystemUiVisibility(visibility);
    
}




        #endif //ORG_ALLBINARY_ANDROID_API16_ACTIVITYFRACTUREUTILAPI16_CPP
