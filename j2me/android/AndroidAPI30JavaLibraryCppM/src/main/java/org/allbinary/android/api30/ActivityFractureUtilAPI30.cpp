
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
        



#include <android/app/Activity.h>

      
#include <android/view/Window.h>

      
#include <androidx/core/view/WindowCompat.h>

      
#include <androidx/core/view/WindowInsetsCompat.h>

      
#include <androidx/core/view/WindowInsetsControllerCompat.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI30: public ActivityFractureUtilAPI5 {

    private: static const ActivityFractureUtilAPI30 instance30 = ActivityFractureUtilAPI30();

    public: static ActivityFractureUtilAPI30 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI30::instance30;
    
}


    public: void setFullScreen(Activity activity){

    Window window = activity.getWindow();;
    

    WindowInsetsControllerCompat windowInsetsController = WindowCompat::getInsetsController(window, window.getDecorView());;
    
windowInsetsController.hide(WindowInsetsCompat::Type.systemBars());
    
windowInsetsController.setSystemBarsBehavior(WindowInsetsControllerCompat::BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
    
}


};

            

