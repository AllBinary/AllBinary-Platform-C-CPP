
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/ClassNotFoundException.h"
        
#include <android/content/Context.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <android/content/Intent.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AboutCommandProcessor.h"

class WebCommandProcessor
            : public Object
         {

    private: static WebCommandProcessor instance() { return WebCommandProcessor(); }

    public: static WebCommandProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WebCommandProcessor::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AboutCommandProcessor aboutCommandProcessor = AboutCommandProcessor::getInstance();

    private: const std::string WEB_VIEW_ACTIVITY = "org.allbinary.android.activity.WebViewActivity";

    public: const BasicArrayList list = BasicArrayListD();

    public: void process(CommandListener midletCommandListener, Command command, Canvas canvas){

        try {
            
    Context context = this->aboutCommandProcessor.getContext() as Context;;
    

    Intent intent = Intent(context, TsUtil::getInstance().getClassClassLoader(this).loadClass(this->WEB_VIEW_ACTIVITY));;
    
intent.putExtra(this->aboutCommandProcessor.URL, this->list.removeAt(0) as string);
    
intent.setFlags(Intent::FLAG_ACTIVITY_NEW_TASK);
    
context.startActivity(intent);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "process", e);
    
}

}


};

            

