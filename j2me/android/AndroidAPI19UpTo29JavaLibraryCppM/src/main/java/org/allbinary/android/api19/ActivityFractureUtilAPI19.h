
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Activity;
class View;
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ActivityFractureUtilAPI19: public ActivityFractureUtilAPI5 {

    private: static ActivityFractureUtilAPI19* instance19_owner();
    private: static ActivityFractureUtilAPI19* instance19;

    public: static ActivityFractureUtilAPI19* getInstance();


            
    public: ActivityFractureUtilAPI19();
        
    public: void setFullScreen(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_API19_ACTIVITYFRACTUREUTILAPI19_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<org/allbinary/android/api5/ActivityFractureUtilAPI5.h>)
#include <org/allbinary/android/api5/ActivityFractureUtilAPI5.h>
#endif

        #endif
    
