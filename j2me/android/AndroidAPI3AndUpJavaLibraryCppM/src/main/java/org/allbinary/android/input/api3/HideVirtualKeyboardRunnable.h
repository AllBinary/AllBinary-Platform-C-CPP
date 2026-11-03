
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API3_HIDEVIRTUALKEYBOARDRUNNABLE_H
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_HIDEVIRTUALKEYBOARDRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class Activity;
class Context;
class IBinder;
class View;
class InputMethodManager;
class ViewCompositeInterface;
class ForcedLogUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HideVirtualKeyboardRunnable
            : public virtual Object
        , public virtual Runnable {

    /*protected*/ public: LogUtil* logUtil;

    private: Activity* activity;

public: HideVirtualKeyboardRunnable(Activity* activity);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_API3_HIDEVIRTUALKEYBOARDRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_API3_HIDEVIRTUALKEYBOARDRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_HIDEVIRTUALKEYBOARDRUNNABLE_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/os/IBinder.h>)
#include <android/os/IBinder.h>
#endif
#if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<android/view/inputmethod/InputMethodManager.h>)
#include <android/view/inputmethod/InputMethodManager.h>
#endif
#if __has_include(<org/allbinary/android/activity/ViewCompositeInterface.h>)
#include <org/allbinary/android/activity/ViewCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
