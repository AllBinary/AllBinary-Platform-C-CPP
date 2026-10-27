
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI16: public ActivityFractureUtilAPI5 {

    private: static ActivityFractureUtilAPI16* instance16() { static std::unique_ptr<ActivityFractureUtilAPI16> value(new ActivityFractureUtilAPI16()); return value.get(); }

    public: static ActivityFractureUtilAPI16* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI16::instance16();
    
}


    public: void setFullScreen(Activity* activity){

    View* decorView = activity->getWindow()->getDecorView();;
    

    int32_t visibility = View::SYSTEM_UI_FLAG_HIDE_NAVIGATION | View::SYSTEM_UI_FLAG_FULLSCREEN;;
    
decorView->setSystemUiVisibility(visibility);
    
}


};

            

