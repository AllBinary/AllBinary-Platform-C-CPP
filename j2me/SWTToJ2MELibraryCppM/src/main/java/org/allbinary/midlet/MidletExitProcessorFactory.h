
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
        



        #ifndef ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H
        #define ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class MIDlet;
class AppletUtil;
class J2MEUtil;
class Processor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MidletExitProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MidletExitProcessorFactory
            : public virtual Object
         {

    private: static MidletExitProcessorFactory* instance_owner();
    private: static MidletExitProcessorFactory* instance;

    public: static MidletExitProcessorFactory* getInstance();


            
    public: MidletExitProcessorFactory();
        
    public: Processor* getExitInstance(MIDlet* midlet);

};

            


        #endif //ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif
#if __has_include(<org/allbinary/AppletUtil.h>)
#include <org/allbinary/AppletUtil.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include("org/allbinary/midlet/MidletExitProcessor.h")
#include "org/allbinary/midlet/MidletExitProcessor.h"
#endif

        #endif
    
