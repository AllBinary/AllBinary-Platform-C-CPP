
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/awt.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "JDialog.h"
#include "GridLayout.h"
#include "JScrollPane.h"
#include "JLabel.h"
#include "JTextArea.h"
#include "PreLogUtil.h"

class GuiLog
            : public Object
         {
        

    private: static const instance: GuiLog = new GuiLog();

    public static GuiLog getInstance();

    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

private constructor ();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public showDialog(string msg);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, any = {} anyType, string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, any = {} anyType, string functionName, Exception exception);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, string className, string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string put(string specialMessage, string className, string functionName, Exception exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_GUILOG_H
