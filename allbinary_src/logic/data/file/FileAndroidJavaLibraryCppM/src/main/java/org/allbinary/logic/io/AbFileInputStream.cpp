
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_CPP
        #define ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/AbFileInputStream.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/FileInputStream.h>

      
#include <java/io/FileNotFoundException.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/nio/channels/FileChannel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AbFileInputStream::AbFileInputStream(FileInputStream* fileInputStream){
this->fileInputStream= fileInputStream;
    
}


    auto AbFileInputStream::mark(int32_t readlimit) -> void{
this->fileInputStream->mark(readlimit);
    
}


    auto AbFileInputStream::markSupported() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->markSupported();;
    
}


                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbFileInputStream::reset() -> void{
this->fileInputStream->reset();
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileInputStream::available() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->available();;
    
}


    auto AbFileInputStream::close() -> void{
this->fileInputStream->close();
    
}


    auto AbFileInputStream::getChannel() -> FileChannel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->getChannel();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileInputStream::read() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->read();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileInputStream::read(std::vector<int8_t> b) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->read(b);;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileInputStream::read(std::vector<int8_t> buffer, int32_t offset, int32_t count) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->read(buffer, offset, count);;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileInputStream::skip(int64_t n) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileInputStream->skip(n);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_CPP
