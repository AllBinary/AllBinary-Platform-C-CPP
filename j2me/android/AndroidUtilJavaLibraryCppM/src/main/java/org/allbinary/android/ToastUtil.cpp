
        /* Generated Code Do Not Modify */
        



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

    public: static ToastUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ToastUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: void makeToast(View* view, Context* context, std::string message, int32_t time){

//inner=true member= isStatic=
class MakeToast
            : public Object
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


};

            

