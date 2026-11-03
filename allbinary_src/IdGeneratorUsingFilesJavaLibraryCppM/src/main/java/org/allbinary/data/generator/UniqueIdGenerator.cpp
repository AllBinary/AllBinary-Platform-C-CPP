
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
        



        #ifndef ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_CPP
        #define ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/generator/UniqueIdGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/generator/IdGeneratorInterface.h"


UniqueIdGenerator::UniqueIdGenerator() : logUtil(LogUtil::getInstance()){
}


    auto UniqueIdGenerator::initialize(int32_t value) -> void{

        try {
            this->newFile->createNewFile();
    

    AbDataOutputStream* idData = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(this->newFile);;
    
idData->writeLong(value);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->IDLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "initialize", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UniqueIdGenerator::setFile(std::string filePathName, std::string name) -> void{
this->newFile= AbFile::createAbFile(filePathName);
    
}


                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UniqueIdGenerator::getNext() -> std::string{

    AbDataInputStream* idData = 
                null
            ;;
    

    AbDataOutputStream* idOutData = 
                null
            ;;
    

        {
        
        auto finallyFunction_N66770 = [&]() {
            StreamUtil::getInstance()->close(idData);
    
StreamUtil::getInstance()->close(idOutData);
    

        };
        
        struct FinallyGuard_N66770 { decltype(finallyFunction_N66770)& function; ~FinallyGuard_N66770() { function(); } } finallyGuard_N66770{finallyFunction_N66770};
        
        try {
            
    AbFileInputStream* idFile = new AbFileInputStream(this->newFile);;
    
idData= new AbDataInputStream(idFile);
    
this->id= idData->readLong();
    

    AbFileOutputStream* idOutFile = AbFileOutputStream::createFromAbFile(this->newFile);;
    
idOutData= new AbDataOutputStream(idOutFile);
    
idOutData->writeLong(this->id +1);
    

    int64_t idLong = int64_t(this->id);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(idLong);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->IDLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "getNext", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error";
    
}

        }

}




        #endif //ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_CPP
