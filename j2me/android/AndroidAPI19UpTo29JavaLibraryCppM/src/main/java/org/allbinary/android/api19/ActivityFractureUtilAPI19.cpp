
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

      
#include <android/view/View.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI19: public ActivityFractureUtilAPI5 {

    private: static const ActivityFractureUtilAPI19 instance19 = ActivityFractureUtilAPI19();

    public: static ActivityFractureUtilAPI19 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI19::instance19;
    
}


    public: void setFullScreen(Activity activity){

    View decorView = activity.getWindow().getDecorView();;
    

    int32_t visibility = View::SYSTEM_UI_FLAG_IMMERSIVE_STICKY | View::SYSTEM_UI_FLAG_HIDE_NAVIGATION | View::SYSTEM_UI_FLAG_FULLSCREEN;;
    
decorView.setSystemUiVisibility(visibility);
    
}


};

            

