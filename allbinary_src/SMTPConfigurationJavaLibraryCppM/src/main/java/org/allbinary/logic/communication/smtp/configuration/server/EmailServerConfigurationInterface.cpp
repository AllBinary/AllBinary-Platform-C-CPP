
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EmailServerConfigurationInterface {

    public: virtual void setSmtpServer(std::string value) = 0;

    public: virtual std::string getSmtpServer() = 0;

    public: virtual std::string getAccountName() = 0;

    public: virtual void setAccountName(std::string accountName) = 0;

    public: virtual std::string getPassword() = 0;

    public: virtual void setPassword(std::string password) = 0;

    public: virtual void log() = 0;

    public: virtual std::string toString() = 0;

};

            

