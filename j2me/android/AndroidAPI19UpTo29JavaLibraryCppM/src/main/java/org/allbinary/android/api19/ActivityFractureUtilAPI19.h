
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_H
        #define ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/app/Activity.h>

      
#include <android/view/View.h>

      
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI19: public ActivityFractureUtilAPI5 {

    private: static ActivityFractureUtilAPI19* instance19() { static std::unique_ptr<ActivityFractureUtilAPI19> value(new ActivityFractureUtilAPI19()); return value.get(); }

    public: static ActivityFractureUtilAPI19* getInstance();

    public: void setFullScreen(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_H
