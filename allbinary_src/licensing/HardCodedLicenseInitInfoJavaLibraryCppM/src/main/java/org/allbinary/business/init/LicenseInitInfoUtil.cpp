
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
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/LicenseInitInfo.h"

auto LicenseInitInfoUtil::instance_owner() -> LicenseInitInfoUtil* { static std::unique_ptr<LicenseInitInfoUtil> value(new LicenseInitInfoUtil()); return value.get(); }
LicenseInitInfoUtil* LicenseInitInfoUtil::instance = LicenseInitInfoUtil::instance_owner();

    auto LicenseInitInfoUtil::getInstance() -> LicenseInitInfoUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LicenseInitInfoUtil::instance;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseInitInfoUtil::setFilePath(std::string filePath) -> void{
}


LicenseInitInfoUtil::LicenseInitInfoUtil(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseInitInfoUtil::write(LicenseInitInfo* initData) -> void{
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

    LicenseInitInfo* licenseInitInfo = new LicenseInitInfo();;
    
licenseInitInfo->clearServers();
    
licenseInitInfo->addServer(this->OFFICIAL_ALLBINARY_SERVICES_SERVER);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return licenseInitInfo;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_CPP
