
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API16_ACTIVITYFRACTUREUTILAPI16_H
        #define ORG_ALLBINARY_ANDROID_API16_ACTIVITYFRACTUREUTILAPI16_H

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

    public: static ActivityFractureUtilAPI16* getInstance();

    public: void setFullScreen(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API16_ACTIVITYFRACTUREUTILAPI16_H
