
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
        



        #ifndef ORG_ALLBINARY_CANVAS_PROCESSOR_H
        #define ORG_ALLBINARY_CANVAS_PROCESSOR_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Processor
            : public Object
         {
        

    private: static const SINGLETON: Processor = new Processor();

    public static Processor getInstance();

                //@Throws(Exception.constructor)
            
    public process();

                //@Throws(Exception.constructor)
            
    public processt(int64_t timeDelta);

};

            


        #endif //ORG_ALLBINARY_CANVAS_PROCESSOR_H
