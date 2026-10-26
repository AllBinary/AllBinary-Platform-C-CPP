
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
        



        #ifndef ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H
        #define ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryMidlet.h"

class ExitRunnable
            : public Object
        : public Runnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AllBinaryMidlet midlet;

    private: Processor processor;

    private: bool isProgress;

public: ExitRunnable(AllBinaryMidlet midlet, Processor processor, bool isProgress);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H
