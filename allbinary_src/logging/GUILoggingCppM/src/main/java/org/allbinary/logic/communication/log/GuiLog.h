
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_H

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

class GuiLog
            : public Object
         {

    private: static GuiLog* instance() { static std::unique_ptr<GuiLog> value(new GuiLog()); return value.get(); }

    public: static GuiLog* getInstance();

    private: LogFormatUtil* logFormatUtil = LogFormatUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

private: GuiLog();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void showDialog(std::string msg);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, Object* anyType, std::string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, Object* anyType, std::string functionName, Exception* exception);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, std::string className, std::string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string put(std::string specialMessage, std::string className, std::string functionName, Exception* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_H
