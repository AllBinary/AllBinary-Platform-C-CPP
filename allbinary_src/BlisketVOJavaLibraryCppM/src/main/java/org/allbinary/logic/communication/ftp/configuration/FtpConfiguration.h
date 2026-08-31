
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
        

    private: ftpServer: string;

    private: ftpPath: string;

    private: ftpUserName: string;

    private: ftpPassword: string;

public constructor ();

public constructor (HashMap<any, any> hashMap);

    public string getServer();

    public string getPath();

    public string getUserName();

    public string getPassword();

    public setServer(string value);

    public setPath(string value);

    public setUserName(string value);

    public setPassword(string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATION_H
