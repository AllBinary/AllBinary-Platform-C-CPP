
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API3_SHOWVIRTUALKEYBOARDRUNNABLE_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_SHOWVIRTUALKEYBOARDRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/api3/ShowVirtualKeyboardRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/app/Activity.h>

      
#include <android/content/Context.h>

      
#include <android/view/View.h>

      
#include <android/view/inputmethod/InputMethodManager.h>

      
#include <org/allbinary/android/activity/ViewCompositeInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ShowVirtualKeyboardRunnable::ShowVirtualKeyboardRunnable(Activity* activity) : logUtil(LogUtil::getInstance()){
this->activity= activity;
    
}


    auto ShowVirtualKeyboardRunnable::run() -> void{

        try {
            
    InputMethodManager* inputMethodManager = dynamic_cast<InputMethodManager*>(this->activity->getSystemService(Context::INPUT_METHOD_SERVICE));;
    

    ViewCompositeInterface* viewCompositeInterface = dynamic_cast<ViewCompositeInterface*>(this->activity);;
    

                        if(viewCompositeInterface == 
                                    nullptr
                                )
                        
                                    {
                                    ForcedLogUtil::log("Activity Null", this);
    

                                    }
                                

    View* view = viewCompositeInterface->getView();;
    
inputMethodManager->toggleSoftInputFromWindow(view->getWindowToken(), InputMethodManager::SHOW_FORCED, 0);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_API3_SHOWVIRTUALKEYBOARDRUNNABLE_CPP
