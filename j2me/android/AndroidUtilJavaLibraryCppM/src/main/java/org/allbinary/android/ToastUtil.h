
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_TOASTUTIL_H
        #define ORG_ALLBINARY_ANDROID_TOASTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class Context;
class View;
class Toast;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ToastUtil
            : public virtual Object
         {

    private: static ToastUtil* instance_owner();
    private: static ToastUtil* instance;

    public: static ToastUtil* getInstance();


            
    public: ToastUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    public: void makeToast(View* view, Context* context, std::string message, int32_t time);

};

            


        #endif //ORG_ALLBINARY_ANDROID_TOASTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_TOASTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_TOASTUTIL_H_COMPLETE
        #if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<android/widget/Toast.h>)
#include <android/widget/Toast.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
