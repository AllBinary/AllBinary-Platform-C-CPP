
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/midlet/MIDlet.h>

      
#include <org/allbinary/AppletUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/midlet/MidletExitProcessor.h"

class MidletExitProcessorFactory
            : public Object
         {

    private: static MidletExitProcessorFactory* instance() { static std::unique_ptr<MidletExitProcessorFactory> value(new MidletExitProcessorFactory()); return value.get(); }

    public: static MidletExitProcessorFactory* getInstance();

    public: Processor* getExitInstance(MIDlet* midlet);

};

            


        #endif //ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H
