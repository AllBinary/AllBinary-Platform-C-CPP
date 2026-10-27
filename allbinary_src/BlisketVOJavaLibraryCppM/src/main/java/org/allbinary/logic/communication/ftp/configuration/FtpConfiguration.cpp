
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

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationInterface.h"
#include "org/allbinary/logic/communication/ftp/configuration/FtpConfigurationData.h"

class FtpConfiguration
            : public Object
        , public FtpConfigurationInterface {

    private: std::string ftpServer;

    private: std::string ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

public: FtpConfiguration(){
}


public: FtpConfiguration(HashMap<Object*, Object*>* hashMap){
this->ftpServer= hashMap->get(FtpConfigurationData::SERVER);
    
this->ftpPath= hashMap->get(FtpConfigurationData::PATH);
    
this->ftpUserName= hashMap->get(FtpConfigurationData::USERNAME);
    
this->ftpPassword= hashMap->get(FtpConfigurationData::PASSWORD);
    
}


    public: std::string getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpServer;
    
}


    public: std::string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPath;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpUserName;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPassword;
    
}


    public: void setServer(std::string value){
this->ftpServer= value;
    
}


    public: void setPath(std::string value){
this->ftpPath= value;
    
}


    public: void setUserName(std::string value){
this->ftpUserName= value;
    
}


    public: void setPassword(std::string value){
this->ftpPassword= value;
    
}


};

            

