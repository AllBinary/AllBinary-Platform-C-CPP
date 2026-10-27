
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
        



        #ifndef ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class MIDlet;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryMidlet;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MidletFactoryInterface
            : public virtual Object
         {


            
    public: MidletFactoryInterface();
        
    public: MIDlet* getInstance();

};

            


        #endif //ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MIDLET_MIDLETFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif
#if __has_include("org/allbinary/midlet/AllBinaryMidlet.h")
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#endif

        #endif
    
