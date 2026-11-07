
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLWRITER_CPP
        #define ORG_ALLBINARY_LOGIC_IO_NULLWRITER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/NullWriter.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>

      
#include <java/io/Writer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullWriter::NullWriter() {
        }
        auto NullWriter::NULL_WRITER_owner() -> NullWriter* { static std::unique_ptr<NullWriter> value(new NullWriter()); return value.get(); }
NullWriter* NullWriter::NULL_WRITER = NullWriter::NULL_WRITER_owner();

                //@Throws(IOException.constructor)
            
    auto NullWriter::write(int32_t c) -> void{
}


                //@Throws(IOException.constructor)
            
    auto NullWriter::write(std::vector<char> cbuf, int32_t off, int32_t len) -> void{
}


                //@Throws(IOException.constructor)
            
    auto NullWriter::write(std::string str) -> void{
}


                //@Throws(IOException.constructor)
            
    auto NullWriter::write(std::string str, int32_t off, int32_t len) -> void{
}


                //@Throws(IOException.constructor)
            
    auto NullWriter::flush() -> void{
}


    auto NullWriter::close() -> void{
}




        #endif //ORG_ALLBINARY_LOGIC_IO_NULLWRITER_CPP
