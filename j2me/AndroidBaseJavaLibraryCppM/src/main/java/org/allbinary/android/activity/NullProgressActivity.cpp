
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_CPP
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/activity/NullProgressActivity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/ProgressActivityInterface.h"


NullProgressActivity::NullProgressActivity() {
        }
        auto NullProgressActivity::NULL_PROGRESS_ACTIVITY_owner() -> NullProgressActivity* { static std::unique_ptr<NullProgressActivity> value(new NullProgressActivity()); return value.get(); }
NullProgressActivity* NullProgressActivity::NULL_PROGRESS_ACTIVITY = NullProgressActivity::NULL_PROGRESS_ACTIVITY_owner();

    auto NullProgressActivity::runOnUiThread(Runnable* action) -> void{
}


    auto NullProgressActivity::onDismissTitleProgressBar() -> void{
}


    auto NullProgressActivity::onShowTitleProgressBar(int32_t value, bool indeterminate) -> void{
}


    auto NullProgressActivity::onTitleProgressBarSetProgress(int32_t value) -> void{
}




        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_NULLPROGRESSACTIVITY_CPP
