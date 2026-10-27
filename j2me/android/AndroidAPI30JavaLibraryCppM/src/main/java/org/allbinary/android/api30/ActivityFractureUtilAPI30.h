
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Activity;
class Window;
class WindowCompat;
class WindowInsetsCompat;
class WindowInsetsControllerCompat;
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ActivityFractureUtilAPI30: public ActivityFractureUtilAPI5 {

    private: static ActivityFractureUtilAPI30* instance30_owner();
    private: static ActivityFractureUtilAPI30* instance30;

    public: static ActivityFractureUtilAPI30* getInstance();


            
    public: ActivityFractureUtilAPI30();
        
    public: void setFullScreen(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_API30_ACTIVITYFRACTUREUTILAPI30_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/view/Window.h>)
#include <android/view/Window.h>
#endif
#if __has_include(<androidx/core/view/WindowCompat.h>)
#include <androidx/core/view/WindowCompat.h>
#endif
#if __has_include(<androidx/core/view/WindowInsetsCompat.h>)
#include <androidx/core/view/WindowInsetsCompat.h>
#endif
#if __has_include(<androidx/core/view/WindowInsetsControllerCompat.h>)
#include <androidx/core/view/WindowInsetsControllerCompat.h>
#endif
#if __has_include(<org/allbinary/android/api5/ActivityFractureUtilAPI5.h>)
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>
#endif

        #endif
    
