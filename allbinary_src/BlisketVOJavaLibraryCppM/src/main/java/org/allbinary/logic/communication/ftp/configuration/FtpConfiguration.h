
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h"
class FtpConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FtpConfiguration
            : public virtual Object
        , public virtual FtpConfigurationInterface {

    private: std::string ftpServer;

    private: std::string ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

public: FtpConfiguration();

public: FtpConfiguration(HashMap<Object*, Object*>* hashMap);

    public: std::string getServer();

    public: std::string getPath();

    public: std::string getUserName();

    public: std::string getPassword();

    public: void setServer(std::string value);

    public: void setPath(std::string value);

    public: void setUserName(std::string value);

    public: void setPassword(std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include("org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h")
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/ftp/configuration/FtpConfigurationData.h")
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationData.h"
#endif

        #endif
    
