
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSESERVERINITFILEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSESERVERINITFILEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/io/file/SimpleFileUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LicenseServerInitFileUtil::LicenseServerInitFileUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), NULL_OUTPUT_STREAM(SimpleFileUtil::nullOutputStream()) {
        }
        
    auto LicenseServerInitFileUtil::init() -> void{

        try {
            
    std::string filePath = LicenseInitInfoUtil::getInstance()->INITFILENAME;;
    
LicenseInitInfoUtil::getInstance()->setFilePath(StringUtil::getInstance()->EMPTY_STRING);
    

                        if(FileFactory::getInstance()->isFile(filePath))
                        
                                    {
                                    this->logUtil->putF("Using Existing License File", this, this->commonStrings->INIT);
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    
}

}


    auto LicenseServerInitFileUtil::write() -> void{

    OutputStream* fileOutputStream = this->NULL_OUTPUT_STREAM;;
    

        {
        
        auto finallyFunction_N66496 = [&]() {
            StreamUtil::getInstance()->close(fileOutputStream);
    

        };
        
        struct FinallyGuard_N66496 { decltype(finallyFunction_N66496)& function; ~FinallyGuard_N66496() { function(); } } finallyGuard_N66496{finallyFunction_N66496};
        
        try {
            
    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    std::string filePath = LicenseInitInfoUtil::getInstance()->INITFILENAME;;
    

    InputStream* inputStream = resourceUtil->getResourceAsStream(filePath);;
    
this->logUtil->putF("Writing Default License File", this, this->commonStrings->INIT);
    

    FileStreamFactory* fileStreamFactory = FileStreamFactory::getInstance();;
    
fileOutputStream= fileStreamFactory->getFileOutputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, filePath);
    

    int32_t b= 0;;
    

    int32_t index = 0;;
    

        while(true)
        {
b= inputStream->read();
    

                        if(b ==  -1)
                        
                                    {
                                    break;

                    

                                    }
                                
fileOutputStream->write(b);
    
index++;
    
}

this->logUtil->putF(JavaString::valueOf("Wrote Bytes: ") +JavaString::valueOf(index), this, this->commonStrings->INIT);
    
fileOutputStream->flush();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    
}

        }

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSESERVERINITFILEUTIL_CPP
