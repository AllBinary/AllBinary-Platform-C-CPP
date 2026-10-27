
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANDROID_TOASTUTIL_CPP
        #define ORG_ALLBINARY_ANDROID_TOASTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/ToastUtil.h"
        

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
        

ToastUtil::ToastUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto ToastUtil::instance_owner() -> ToastUtil* { static std::unique_ptr<ToastUtil> value(new ToastUtil()); return value.get(); }
ToastUtil* ToastUtil::instance = ToastUtil::instance_owner();

    auto ToastUtil::getInstance() -> ToastUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ToastUtil::instance;
    
}


    auto ToastUtil::makeToast(View* view, Context* context, std::string message, int32_t time) -> void{

//inner=true member= isStatic=
class MakeToast
            : public virtual Object
        , public Runnable {

    std::string string;

public: MakeToast(std::string string){
this->string= string;
    
}


    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            Toast::makeText(context, this->string, time)->show();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


};

            
view->post(new MakeToast(message));
    
}




        #endif //ORG_ALLBINARY_ANDROID_TOASTUTIL_CPP
