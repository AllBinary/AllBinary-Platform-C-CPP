
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_H
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/ProgressActivityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullProgressActivity
            : public virtual Object
        , public ProgressActivityInterface {

    private: static NullProgressActivity* NULL_PROGRESS_ACTIVITY_owner();
    public: static NullProgressActivity* NULL_PROGRESS_ACTIVITY;


            
    public: NullProgressActivity();
        
    public: void runOnUiThread(Runnable* action);

    public: void onDismissTitleProgressBar();

    public: void onShowTitleProgressBar(int32_t value, bool indeterminate);

    public: void onTitleProgressBarSetProgress(int32_t value);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_H_COMPLETE
        #if __has_include("org/allbinary/android/activity/ProgressActivityInterface.h")
#include "org/allbinary/android/activity/ProgressActivityInterface.h"
#endif

        #endif
    
