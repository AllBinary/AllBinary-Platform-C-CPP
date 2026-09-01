
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
        



        #ifndef ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H
        #define ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H

            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/thread/ThreadPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryMidlet.h"
#include "MidletExitProcessorFactory.h"
#include "ExitRunnable.h"
//SWTForJ2ME
class ProgressMidlet: public AllBinaryMidlet {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: AbeClientInformationInterface abeClientInformation;

public: ProgressMidlet(ClientInformationFactory clientInformationFactory);

    public: void preInit();

    protected: void exitProgress(bool isProgress);

};

            


        #endif //ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H
