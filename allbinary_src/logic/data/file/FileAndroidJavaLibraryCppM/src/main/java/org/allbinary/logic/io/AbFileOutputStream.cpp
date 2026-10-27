
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_CPP
        #define ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/AbFileOutputStream.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/FileNotFoundException.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/OutputStream.h>

      
#include <java/nio/channels/FileChannel.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromAbFile(AbFile* file) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(AbFileNativeUtil::get(file)));
    
}


                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromAbFileAppend(AbFile* file, bool append) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(file->getPath()));
    
}


                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromFilePath(std::string name) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(name));
    
}


                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromFilePathAppend(std::string name, bool append) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(new FileOutputStream(name));
    
}


AbFileOutputStream::AbFileOutputStream(FileOutputStream* fileOutputStream){
this->fileOutputStream= fileOutputStream;
    
}


    auto AbFileOutputStream::close() -> void{
this->fileOutputStream->close();
    
}


    auto AbFileOutputStream::getChannel() -> FileChannel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileOutputStream->getChannel();;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileOutputStream::write(std::vector<int8_t> buffer) -> void{
this->fileOutputStream->write(buffer);
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileOutputStream::write(std::vector<int8_t> buffer, int32_t offset, int32_t count) -> void{
this->fileOutputStream->write(buffer, offset, count);
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileOutputStream::write(int32_t b) -> void{
this->fileOutputStream->write(b);
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_CPP
