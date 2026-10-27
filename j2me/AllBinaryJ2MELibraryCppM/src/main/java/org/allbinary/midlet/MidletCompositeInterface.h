
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Displayable;
class MIDlet;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryMidlet;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MidletCompositeInterface
            : public virtual Object
         {

    public: virtual void setMidlet(MIDlet* midlet) = 0;

    public: virtual AllBinaryMidlet* getMidlet() = 0;

    public: virtual Displayable* getDisplayable() = 0;

};

            


        #endif //ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MIDLET_MIDLETCOMPOSITEINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif
#if __has_include("org/allbinary/midlet/AllBinaryMidlet.h")
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#endif

        #endif
    
