
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_CPP
        #define ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/BufferedLineReader.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/FileReader.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BufferedLineReader::BufferedLineReader(AbFile* file){
this->tmpIn= new BufferedReader(new FileReader(AbFileNativeUtil::get(file)));
    
}


    auto BufferedLineReader::readUpToLines(int64_t readAheadIndex) -> void{
}


                //@Throws(Exception.constructor)
            
    auto BufferedLineReader::readLine() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tmpIn->readLine();;
    
}


    auto BufferedLineReader::getSize() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto BufferedLineReader::getCurrent() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_CPP
