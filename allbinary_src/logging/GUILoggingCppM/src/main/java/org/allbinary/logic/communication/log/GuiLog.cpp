
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/GuiLog.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/awt.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/communication/log/JDialog.h"
#include "org/allbinary/logic/communication/log/GridLayout.h"
#include "org/allbinary/logic/communication/log/JScrollPane.h"
#include "org/allbinary/logic/communication/log/JLabel.h"
#include "org/allbinary/logic/communication/log/JTextArea.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"

auto GuiLog::instance_owner() -> GuiLog* { static std::unique_ptr<GuiLog> value(new GuiLog()); return value.get(); }
GuiLog* GuiLog::instance = GuiLog::instance_owner();

    auto GuiLog::getInstance() -> GuiLog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GuiLog::instance;
    
}


GuiLog::GuiLog() : logFormatUtil(LogFormatUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GuiLog::showDialog(std::string msg) -> void{

    JDialog* error = new JDialog();;
    

    int32_t size = msg.size() *9;;
    

    int32_t x = size;;
    

                        if(x > 550)
                        x= 550;
                                
error->getContentPane()->setLayout(new GridLayout(1, 1));
    

                        if(size > 255)
                        
                                    {
                                    
    int32_t y = 550;;
    
error->setSize(x, y);
    
error->getContentPane()->add(new javax::swing::JScrollPane(new javax::swing::JTextArea(msg)));
    

                                    }
                                
                             else 
                        if(size > 0)
                        
                                    {
                                    
    int32_t y = 50;;
    
error->setSize(x, y);
    
error->getContentPane()->add(new javax::swing::JScrollPane(new javax::swing::JLabel(msg)));
    

                                    }
                                
error->show();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GuiLog::put(std::string specialMessage, Object* anyType, std::string functionName) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->put(specialMessage, anyType, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GuiLog::put(std::string specialMessage, Object* anyType, std::string functionName, Exception* exception) -> std::string{

        try {
            
    std::string data = this->logFormatUtil->get(specialMessage, anyType->getClass()->getName(), functionName, exception);;
    
this->showDialog(data);
    
System.out.println(data);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return data;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, "put", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Logging Error";
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GuiLog::put(std::string specialMessage, std::string className, std::string functionName) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->put(specialMessage, className, functionName, 
                            nullptr);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GuiLog::put(std::string specialMessage, std::string className, std::string functionName, Exception* exception) -> std::string{

        try {
            
    std::string data = this->logFormatUtil->get(specialMessage, className, functionName, exception);;
    
this->showDialog(data);
    
System.out.println(data);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return data;
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, "put", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Logging Error";
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_CPP
