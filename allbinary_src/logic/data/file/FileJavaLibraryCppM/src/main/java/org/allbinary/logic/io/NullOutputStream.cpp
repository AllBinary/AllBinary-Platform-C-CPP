
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_CPP
        #define ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/NullOutputStream.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>

      
#include <java/io/OutputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullOutputStream::NullOutputStream() {
        }
        auto NullOutputStream::NULL_OUTPUT_STREAM_owner() -> NullOutputStream* { static std::unique_ptr<NullOutputStream> value(new NullOutputStream()); return value.get(); }
NullOutputStream* NullOutputStream::NULL_OUTPUT_STREAM = NullOutputStream::NULL_OUTPUT_STREAM_owner();

                //@Throws(IOException.constructor)
            
    auto NullOutputStream::write(int32_t b) -> void{
}


                //@Throws(IOException.constructor)
            
    auto NullOutputStream::write(std::vector<int8_t> b, int32_t off, int32_t len) -> void{
}


    auto NullOutputStream::close() -> void{
}




        #endif //ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_CPP
