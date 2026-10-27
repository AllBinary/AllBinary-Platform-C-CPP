
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
        



        #ifndef ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H
        #define ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/midlet/AllBinaryMidlet.h"

class MidletCompositeInterface {

    public: virtual void setMidlet(MIDlet* midlet) = 0;

    public: virtual AllBinaryMidlet* getMidlet() = 0;

    public: virtual Displayable* getDisplayable() = 0;

};

            


        #endif //ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H
