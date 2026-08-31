
        /* Generated Code Do Not Modify */
        



            #include <hilog/log.h>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <android/content/Context.h>

      
#include <android/view/View.h>

      
#include <android/widget/Toast.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ToastUtil
            : public Object
         {
        

    private: static const instance: ToastUtil = new ToastUtil();

    public static ToastUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ToastUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public makeToast(View view, Context context, string message, int32_t time){

//inner=true member= isStatic=
class MakeToast
            : public Object
        : public Runnable {
        

    const string: string;

public constructor (string string){

            super();
        this.string= string;
    
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            Toast.makeText(context, this.string, time)!.show();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            
view.post(new MakeToast(message));
    
}


};

            

