
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H
        #define ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/android/ActivityFractureUtil.h>
class Activity;
class WindowManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ActivityFractureUtilAPI1: public ActivityFractureUtil {

    private: static ActivityFractureUtilAPI1* instance_owner();
    private: static ActivityFractureUtilAPI1* instance;

    public: static ActivityFractureUtilAPI1* getInstance();


            
    public: ActivityFractureUtilAPI1();
        
                //@Throws(Exception.constructor)
            
    public: void process(Activity* activity);

    public: void setFullScreen(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_API1_ACTIVITYFRACTUREUTILAPI1_H_COMPLETE
        #if __has_include(<org/allbinary/android/ActivityFractureUtil.h>)
#include <org/allbinary/android/ActivityFractureUtil.h>
#endif
#if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/view/WindowManager.h>)
#include <android/view/WindowManager.h>
#endif

        #endif
    
