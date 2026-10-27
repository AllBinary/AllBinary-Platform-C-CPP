
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/awt.h>
#include <javax/swing.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogFormatUtil;
class JDialog;
class GridLayout;
class JScrollPane;
class JLabel;
class JTextArea;
class PreLogUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GuiLog
            : public virtual Object
         {

    private: static GuiLog* instance_owner();
    private: static GuiLog* instance;

    public: static GuiLog* getInstance();

    private: LogFormatUtil* logFormatUtil;

    private: CommonStrings* commonStrings;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/JDialog.h")
#include "org/allbinary/logic/communication/log/JDialog.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GridLayout.h")
#include "org/allbinary/logic/communication/log/GridLayout.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/JScrollPane.h")
#include "org/allbinary/logic/communication/log/JScrollPane.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/JLabel.h")
#include "org/allbinary/logic/communication/log/JLabel.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/JTextArea.h")
#include "org/allbinary/logic/communication/log/JTextArea.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PreLogUtil.h")
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#endif

        #endif
    
