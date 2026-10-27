
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/DataOutputStreamFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/AbFile.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/FileStreamFactory.h"


DataOutputStreamFactory::DataOutputStreamFactory() {
        }
        auto DataOutputStreamFactory::instance_owner() -> DataOutputStreamFactory* { static std::unique_ptr<DataOutputStreamFactory> value(new DataOutputStreamFactory()); return value.get(); }
DataOutputStreamFactory* DataOutputStreamFactory::instance = DataOutputStreamFactory::instance_owner();

    auto DataOutputStreamFactory::getInstance() -> DataOutputStreamFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DataOutputStreamFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto DataOutputStreamFactory::getInstanceForAbFile(AbFile* file) -> AbDataOutputStream*{

    AbFileOutputStream* idFileOutputStream = AbFileOutputStream::createFromAbFile(file);;
    

    AbDataOutputStream* idOutData = new AbDataOutputStream(idFileOutputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idOutData;
    
}


                //@Throws(Exception.constructor)
            
    auto DataOutputStreamFactory::getInstance(std::string filePath, std::string fileName) -> AbDataOutputStream*{

    FileStreamFactory* fileStreamFactory = FileStreamFactory::getInstance();;
    

    AbFileOutputStream* fileOutputStream = fileStreamFactory->getFileOutputStreamInstance(filePath, fileName);;
    

    AbDataOutputStream* idOutData = new AbDataOutputStream(fileOutputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idOutData;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_DATAOUTPUTSTREAMFACTORY_CPP
