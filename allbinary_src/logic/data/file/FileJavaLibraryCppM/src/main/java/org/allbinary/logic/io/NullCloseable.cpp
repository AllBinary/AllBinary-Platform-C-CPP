
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_CPP
        #define ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/NullCloseable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/IOException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullCloseable::NullCloseable() {
        }
        auto NullCloseable::NULL_CLOSEABLE_owner() -> NullCloseable* { static std::unique_ptr<NullCloseable> value(new NullCloseable()); return value.get(); }
NullCloseable* NullCloseable::NULL_CLOSEABLE = NullCloseable::NULL_CLOSEABLE_owner();

    auto NullCloseable::close() -> void{
}




        #endif //ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_CPP
