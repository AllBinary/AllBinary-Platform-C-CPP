
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressActivityInterface.h"

class NullProgressActivity
            : public Object
        : public ProgressActivityInterface {

    public: static const NullProgressActivity NULL_PROGRESS_ACTIVITY = NullProgressActivity();

    public: void runOnUiThread(Runnable action){
}


    public: void onDismissTitleProgressBar(){
}


    public: void onShowTitleProgressBar(int32_t value, bool indeterminate){
}


    public: void onTitleProgressBarSetProgress(int32_t value){
}


};

            

