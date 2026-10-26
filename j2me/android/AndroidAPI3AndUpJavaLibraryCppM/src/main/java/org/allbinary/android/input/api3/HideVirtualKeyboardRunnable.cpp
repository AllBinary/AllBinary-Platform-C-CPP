
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

      
#include <android/os/IBinder.h>

      
#include <android/view/View.h>

      
#include <android/view/inputmethod/InputMethodManager.h>

      
#include <org/allbinary/android/activity/ViewCompositeInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HideVirtualKeyboardRunnable
            : public Object
        : public Runnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Activity activity;

public: HideVirtualKeyboardRunnable(Activity activity){
this->activity= activity;
    
}


    public: void run(){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

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
    

                        if(view.getWindowToken() == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("Unable to hide virtual keyboard as window token is null - This usually happens during loading when the view is not attached to a window", this, commonStrings.RUN);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    IBinder token = view.getWindowToken();;
    
inputMethodManager.hideSoftInputFromWindow(token, 0);
    

                //: 
} catch(e) 
            {
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}


};

            

