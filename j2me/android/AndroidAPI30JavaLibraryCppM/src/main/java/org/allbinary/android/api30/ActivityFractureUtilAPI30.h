
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_H
        #define ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_H

#include <android/app/Activity.h>

      
#include <android/view/Window.h>

      
#include <androidx/core/view/WindowCompat.h>

      
#include <androidx/core/view/WindowInsetsCompat.h>

      
#include <androidx/core/view/WindowInsetsControllerCompat.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI30: public ActivityFractureUtilAPI5 {

    private: static const ActivityFractureUtilAPI30 instance30 = ActivityFractureUtilAPI30();

    public: static ActivityFractureUtilAPI30 getInstance();

    public: void setFullScreen(Activity activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_H
