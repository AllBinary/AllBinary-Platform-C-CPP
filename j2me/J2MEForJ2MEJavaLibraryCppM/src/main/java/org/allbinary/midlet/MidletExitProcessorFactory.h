
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

            #include "../../../java/lang/Object.h"
        
#include <javax/microedition/midlet/MIDlet.h>

      
#include <org/allbinary/AppletUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MidletExitProcessor.h"

class MidletExitProcessorFactory
            : public Object
         {
        

    private: static const instance: MidletExitProcessorFactory = new MidletExitProcessorFactory();

    public static MidletExitProcessorFactory getInstance();

    public Processor getExitInstance(MIDlet midlet);

};

            


        #endif //ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_H
