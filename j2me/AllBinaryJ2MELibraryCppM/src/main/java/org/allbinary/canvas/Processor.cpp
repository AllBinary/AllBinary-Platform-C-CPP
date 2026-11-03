
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
        



        #ifndef ORG_ALLBINARY_CANVAS_PROCESSOR_CPP
        #define ORG_ALLBINARY_CANVAS_PROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/Processor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Processor::Processor() {
        }
        auto Processor::SINGLETON_owner() -> Processor* { static std::unique_ptr<Processor> value(new Processor()); return value.get(); }
Processor* Processor::SINGLETON = Processor::SINGLETON_owner();

    auto Processor::getInstance() -> Processor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Processor::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto Processor::process() -> void{
}


                //@Throws(Exception.constructor)
            
    auto Processor::processt(int64_t timeDelta) -> void{
}




        #endif //ORG_ALLBINARY_CANVAS_PROCESSOR_CPP
