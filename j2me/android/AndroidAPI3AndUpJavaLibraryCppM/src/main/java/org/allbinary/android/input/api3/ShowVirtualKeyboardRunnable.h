
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API3_SHOWVIRTUALKEYBOARDRUNNABLE_H
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_SHOWVIRTUALKEYBOARDRUNNABLE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Runnable.h"
        
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const activity: Activity;

public constructor (Activity activity);

    public run();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_API3_SHOWVIRTUALKEYBOARDRUNNABLE_H
