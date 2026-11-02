
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/ftp/configuration/FtpConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h"
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationData.h"


FtpConfiguration::FtpConfiguration(){
}


FtpConfiguration::FtpConfiguration(HashMap<Object*, Object*>* hashMap){
this->ftpServer= JavaBoxes::unbox<std::string>(hashMap->get(FtpConfigurationData::SERVER));
    
this->ftpPath= JavaBoxes::unbox<std::string>(hashMap->get(FtpConfigurationData::PATH));
    
this->ftpUserName= JavaBoxes::unbox<std::string>(hashMap->get(FtpConfigurationData::USERNAME));
    
this->ftpPassword= JavaBoxes::unbox<std::string>(hashMap->get(FtpConfigurationData::PASSWORD));
    
}


    auto FtpConfiguration::getServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpServer;
    
}


    auto FtpConfiguration::getPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPath;
    
}


    auto FtpConfiguration::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpUserName;
    
}


    auto FtpConfiguration::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPassword;
    
}


    auto FtpConfiguration::setServer(std::string value) -> void{
this->ftpServer= value;
    
}


    auto FtpConfiguration::setPath(std::string value) -> void{
this->ftpPath= value;
    
}


    auto FtpConfiguration::setUserName(std::string value) -> void{
this->ftpUserName= value;
    
}


    auto FtpConfiguration::setPassword(std::string value) -> void{
this->ftpPassword= value;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_CPP
