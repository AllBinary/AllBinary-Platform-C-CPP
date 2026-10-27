
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
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/LicenseInitInfo.h"

class LicenseInitInfoUtil
            : public Object
         {

    private: static LicenseInitInfoUtil* instance() { static std::unique_ptr<LicenseInitInfoUtil> value(new LicenseInitInfoUtil()); return value.get(); }

    public: static LicenseInitInfoUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseInitInfoUtil::instance();
    
}


    public: const std::string INITFILENAME = "licenseinitdata.dat";

    public: const std::string ABOUT = "about";

    public: const std::string PRIVACY_POLICY = "privacy_policy";

    private: const std::string OFFICIAL_ALLBINARY_SERVICES_SERVER = "https://services.allbinary.com/LicServ/serverssl.php";
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFilePath(std::string filePath){
}


private: LicenseInitInfoUtil(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write(LicenseInitInfo* initData){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo* read(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readAgain(0);;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo* readAgain(int32_t initializeCounter){

    LicenseInitInfo* licenseInitInfo = new LicenseInitInfo();;
    
licenseInitInfo->clearServers();
    
licenseInitInfo->addServer(this->OFFICIAL_ALLBINARY_SERVICES_SERVER);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return licenseInitInfo;
    
}


};

            

