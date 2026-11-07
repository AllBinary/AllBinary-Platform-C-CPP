
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLREADER_CPP
        #define ORG_ALLBINARY_LOGIC_IO_NULLREADER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/NullReader.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/IOException.h>

      
#include <java/io/Reader.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullReader::NullReader() {
        }
        auto NullReader::NULL_READER_owner() -> NullReader* { static std::unique_ptr<NullReader> value(new NullReader()); return value.get(); }
NullReader* NullReader::NULL_READER = NullReader::NULL_READER_owner();

                //@Throws(IOException.constructor)
            
    auto NullReader::read() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


                //@Throws(IOException.constructor)
            
    auto NullReader::read(std::vector<char> cbuf, int32_t off, int32_t len) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


                //@Throws(IOException.constructor)
            
    auto NullReader::ready() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(IOException.constructor)
            
    auto NullReader::skip(int64_t n) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto NullReader::close() -> void{
}




        #endif //ORG_ALLBINARY_LOGIC_IO_NULLREADER_CPP
