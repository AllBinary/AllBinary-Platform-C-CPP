
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/ProgressActivityInterface.h"

class NullProgressActivity
            : public Object
        , public ProgressActivityInterface {

    public: static NullProgressActivity* NULL_PROGRESS_ACTIVITY() { static std::unique_ptr<NullProgressActivity> value(new NullProgressActivity()); return value.get(); }

    public: void runOnUiThread(Runnable* action){
}


    public: void onDismissTitleProgressBar(){
}


    public: void onShowTitleProgressBar(int32_t value, bool indeterminate){
}


    public: void onTitleProgressBarSetProgress(int32_t value){
}


};

            

