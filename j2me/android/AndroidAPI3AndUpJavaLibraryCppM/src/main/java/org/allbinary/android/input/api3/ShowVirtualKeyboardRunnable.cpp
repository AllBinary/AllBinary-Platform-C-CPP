
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
        
class ShowVirtualKeyboardRunnable
            : public Object
        : public Runnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Activity activity;

public: ShowVirtualKeyboardRunnable(Activity activity){
this->activity= activity;
    
}


    public: void run(){

        try {
            
    InputMethodManager inputMethodManager = this->activity.getSystemService(Context::INPUT_METHOD_SERVICE) as unknown;;
    

    ViewCompositeInterface viewCompositeInterface = this->activity as unknown;;
    

                        if(viewCompositeInterface == 
                                    nullptr
                                )
                        
                                    {
                                    ForcedLogUtil::log("Activity Null", this);
    

                                    }
                                

    View view = viewCompositeInterface.getView();;
    
inputMethodManager.toggleSoftInputFromWindow(view.getWindowToken(), InputMethodManager::SHOW_FORCED, 0);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}


};

            

