
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class NullCanvas;
class Processor;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryMidlet;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ExitRunnable
            : public virtual Object
        , public virtual Runnable {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: AllBinaryMidlet* midlet;

    private: Processor* processor;

    private: bool isProgress;

public: ExitRunnable(AllBinaryMidlet* midlet, Processor* processor, bool isProgress);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/NullCanvas.h>)
#include <javax/microedition/lcdui/NullCanvas.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/midlet/AllBinaryMidlet.h")
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#endif

        #endif
    
