
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class TsUtil;
class Processor;
class Globals;
class StringUtil;
class AbeClientInformationInterface;
class ClientInformationFactory;
class PrimaryThreadPool;
class ThreadPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/midlet/AllBinaryMidlet.h"
class MidletExitProcessorFactory;
class ExitRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //AndroidToJ2ME
class ProgressMidlet: public AllBinaryMidlet {

    public: AbeClientInformationInterface* abeClientInformation;

public: ProgressMidlet(ClientInformationFactory* clientInformationFactory);

    public: void preInit();

    /*protected*/ public: void exitProgress(bool isProgress);

};

            


        #endif //ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H_COMPLETE)
        #define ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/globals/Globals.h>)
#include <org/allbinary/globals/Globals.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>
#endif
#if __has_include(<org/allbinary/thread/PrimaryThreadPool.h>)
#include <org/allbinary/thread/PrimaryThreadPool.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadPool.h>)
#include <org/allbinary/thread/ThreadPool.h>
#endif
#if __has_include("org/allbinary/midlet/AllBinaryMidlet.h")
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#endif
#if __has_include("org/allbinary/midlet/MidletExitProcessorFactory.h")
#include "org/allbinary/midlet/MidletExitProcessorFactory.h"
#endif
#if __has_include("org/allbinary/midlet/ExitRunnable.h")
#include "org/allbinary/midlet/ExitRunnable.h"
#endif

        #endif
    
