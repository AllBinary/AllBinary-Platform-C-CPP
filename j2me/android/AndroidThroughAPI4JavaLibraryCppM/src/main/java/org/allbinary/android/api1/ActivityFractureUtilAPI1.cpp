
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <android/app/Activity.h>

      
#include <android/view/WindowManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI1: public ActivityFractureUtil {

    private: static ActivityFractureUtilAPI1 instance() { return ActivityFractureUtilAPI1(); }

    public: static ActivityFractureUtilAPI1 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI1::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: void process(Activity activity){
}


    public: void setFullScreen(Activity activity){
activity.getWindow().setFlags(WindowManager::LayoutParams.FLAG_FULLSCREEN, WindowManager::LayoutParams.FLAG_FULLSCREEN);
    
}


};

            

