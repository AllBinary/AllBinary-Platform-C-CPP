
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
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/FileNotFoundException.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromAbFile(AbFile* file) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(file->getPath(), false);
    
}


                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromAbFileAppend(AbFile* file, bool append) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(file->getPath(), append);
    
}


                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromFilePath(std::string name) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(name, false);
    
}


                //@Throws(FileNotFoundException.constructor)
            
    auto AbFileOutputStream::createFromFilePathAppend(std::string name, bool append) -> AbFileOutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFileOutputStream(name, append);
    
}


AbFileOutputStream::AbFileOutputStream(std::string name, bool append) : FileOutputStream(name, append){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_ABFILEOUTPUTSTREAM_CPP
