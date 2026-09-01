
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

            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FtpConfigurationInterface.h"
#include "FtpConfigurationData.h"

class FtpConfiguration
            : public Object
        : public FtpConfigurationInterface {

    private: std::string ftpServer;

    private: std::string ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

public: FtpConfiguration();

public: FtpConfiguration(HashMap<any, any> hashMap);

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
