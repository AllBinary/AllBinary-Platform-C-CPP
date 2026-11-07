
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto RegistrationConfiguration::SINGLETON_owner() -> RegistrationConfiguration* { static std::unique_ptr<RegistrationConfiguration> value(new RegistrationConfiguration()); return value.get(); }
RegistrationConfiguration* RegistrationConfiguration::SINGLETON = RegistrationConfiguration::SINGLETON_owner();

RegistrationConfiguration::RegistrationConfiguration() : logUtil(LogUtil::getInstance()){

        try {
            
                        if(FileFactory::getInstance()->isFile(this->FILE))
                        
                                    {
                                    this->read();
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

}


    auto RegistrationConfiguration::getInstance() -> RegistrationConfiguration*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RegistrationConfiguration::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto RegistrationConfiguration::read() -> void{

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    InputStream* fileInputStream = fileInputStreamFactory->getFileInputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, this->FILE);;
    

    DataInputStream* dataInputStream = new DataInputStream(fileInputStream);;
    
this->setRegistrationCode(dataInputStream->readUTF());
    
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append("Read Configuration: ")->append(JavaString::valueOf(this))), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    auto RegistrationConfiguration::write() -> void{

    AbDataOutputStream* dataOutputStream = 
                nullptr
            ;;
    

        {
        
        auto finallyFunction_N66840 = [&]() {
            StreamUtil::getInstance()->close(dataOutputStream);
    

        };
        
        struct FinallyGuard_N66840 { decltype(finallyFunction_N66840)& function; ~FinallyGuard_N66840() { function(); } } finallyGuard_N66840{finallyFunction_N66840};
        
        {
            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Write Configuration: ")->append(JavaString::valueOf(this))), this, "write");
    

    FileStreamFactory* fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream* fileOutputStream = fileInputStreamFactory->getFileOutputStreamInstance(StringUtil::getInstance()->EMPTY_STRING, this->FILE);;
    
dataOutputStream= new AbDataOutputStream(fileOutputStream);
    
dataOutputStream->writeUTF(this->getRegistrationCode());
    
dataOutputStream->flush();
    

        }

        }

}


    auto RegistrationConfiguration::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append("Registration Code: ")->append(this->getRegistrationCode()));;
    
}


    auto RegistrationConfiguration::setRegistrationCode(std::string registrationCode) -> void{
this->registrationCode= registrationCode;
    
}


    auto RegistrationConfiguration::getRegistrationCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->registrationCode;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_CPP
