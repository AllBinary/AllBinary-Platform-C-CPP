
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/LicenseInitInfoUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/LicenseInitInfo.h"


LicenseInitInfoUtil::LicenseInitInfoUtil() : logUtil(LogUtil::getInstance()), stringUtil(StringUtil::getInstance()), filePath(this->stringUtil->EMPTY_STRING) {
        }
        auto LicenseInitInfoUtil::instance_owner() -> LicenseInitInfoUtil* { static std::unique_ptr<LicenseInitInfoUtil> value(new LicenseInitInfoUtil()); return value.get(); }
LicenseInitInfoUtil* LicenseInitInfoUtil::instance = LicenseInitInfoUtil::instance_owner();

    auto LicenseInitInfoUtil::getInstance() -> LicenseInitInfoUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LicenseInitInfoUtil::instance;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseInitInfoUtil::setFilePath(std::string filePath) -> void{
this->filePath= filePath;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseInitInfoUtil::write(LicenseInitInfo* initData) -> void{

                        if(this->filePath == this->stringUtil->EMPTY_STRING)
                        
                                    {
                                    this->filePath= URLGLOBALS::getMainPath() +PATH_GLOBALS::getInstance()->INIT_PATH;
    

                                    }
                                

        try {
            
    TsUtil* tsUtil = TsUtil::getInstance();;
    

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstance(this->filePath, this->INITFILENAME);;
    

    std::vector<int8_t> licenseIdCrypted = tsUtil->getByteArray((new WeakCrypt(1))->encrypt(initData->getLicenseId()));;
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(licenseIdCrypted));
    

    int32_t numberOfLicenseServers = initData->getNumberOfServers();;
    
dataOutputStream->writeInt(numberOfLicenseServers);
    

    std::vector<int8_t> licenseServerCrypted;;
    




                        for (
    int32_t index = 0;index < numberOfLicenseServers; index++)
        {
licenseServerCrypted= tsUtil->getByteArray((new WeakCrypt(3))->encrypt(initData->getServer(index)));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(licenseServerCrypted));
    
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(JavaString::valueOf("Command Failed: ") +JavaString::valueOf(this->INITFILENAME), this, "write", &e);
    
FileStreamFactory::getInstance()->delete_(this->filePath, this->INITFILENAME);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseInitInfoUtil::read() -> LicenseInitInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->readAgain(0);;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseInitInfoUtil::readAgain(int32_t initializeCounter) -> LicenseInitInfo*{

    std::string METHOD_NAME = "readAgain";;
    

                        if(this->filePath == this->stringUtil->EMPTY_STRING)
                        
                                    {
                                    this->filePath= URLGLOBALS::getMainPath() +PATH_GLOBALS::getInstance()->INIT_PATH;
    

                                    }
                                

        try {
            this->logUtil->putF(JavaString::valueOf("LicenseInitInfo File: ") +JavaString::valueOf(this->INITFILENAME), this, METHOD_NAME);
    

    FileStreamFactory* fileStreamFactory = FileStreamFactory::getInstance();;
    

    AbFileInputStream* iFile = fileStreamFactory->getFileInputStreamInstance(this->filePath, this->INITFILENAME);;
    

                        if(iFile != 
                                    nullptr
                                )
                        
                                    {
                                    
    AbDataInputStream* iData = new AbDataInputStream(iFile);;
    

    LicenseInitInfo* initInfo = new LicenseInitInfo();;
    

    std::vector<int8_t> decodedByteArray = DatabaseEncoder::decode(iData->readUTF());;
    

    std::string licenseIdDecoded = JavaString::fromChars(decodedByteArray);;
    
initInfo->setLicenseId((new WeakCrypt(1))->decrypt(licenseIdDecoded));
    

    int32_t numberOfLicenseServers = iData->readInt();;
    

    std::string NEXT_FILE = JavaString::valueOf((new StringMaker())->append(CommonLabels::getInstance()->NEXT)->append(" License Server From File: "));;
    

    std::string licenseServerDecoded;;
    




                        for (
    int32_t index = 0;index < numberOfLicenseServers; index++)
        {
decodedByteArray= DatabaseEncoder::decode(iData->readUTF());
    
licenseServerDecoded= JavaString::fromChars(decodedByteArray);
    
initInfo->setServer((new WeakCrypt(3))->decrypt(licenseServerDecoded), index);
    
this->logUtil->putF(JavaString::valueOf(NEXT_FILE) +JavaString::valueOf(initInfo->getServer(index)), this, METHOD_NAME);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return initInfo;
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Could Not Load License InitInfo: ") +JavaString::valueOf(this->INITFILENAME));
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {

        try {
            this->logUtil->put(JavaString::valueOf("Command Failed: ") +JavaString::valueOf(this->INITFILENAME), this, METHOD_NAME, &e);
    

                //: 
} catch(Exception& e2) 
            {
this->logUtil->put(JavaString::valueOf("LicenseInitInfo Read Retry: ") +JavaString::valueOf(this->INITFILENAME), this, "readAgain()", &e2);
    
}




                            throw Exception(JavaString::valueOf("LicenseInitInfo Read Error: ") +JavaString::valueOf(this->INITFILENAME));
                    
}

}


    auto LicenseInitInfoUtil::getFilePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->filePath;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_CPP
