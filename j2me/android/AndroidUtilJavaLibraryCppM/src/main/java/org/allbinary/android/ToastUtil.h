
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_TOASTUTIL_H
        #define ORG_ALLBINARY_ANDROID_TOASTUTIL_H

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/content/Context.h>

      
#include <android/view/View.h>

      
#include <android/widget/Toast.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ToastUtil
            : public Object
         {

    private: static ToastUtil* instance() { static std::unique_ptr<ToastUtil> value(new ToastUtil()); return value.get(); }

    public: static ToastUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: void makeToast(View* view, Context* context, std::string message, int32_t time);

};

            


        #endif //ORG_ALLBINARY_ANDROID_TOASTUTIL_H
