
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/LicenseInitInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LicenseInitInfo::LicenseInitInfo() : id(StringUtil::getInstance()->EMPTY_STRING), serverVector(new BasicArrayListD()){
}


    auto LicenseInitInfo::getLicenseId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    auto LicenseInitInfo::getServer(int32_t index) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->serverVector->objectArray[index]);
    
}


    auto LicenseInitInfo::getNumberOfServers() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverVector->size();;
    
}


    auto LicenseInitInfo::setLicenseId(std::string value) -> void{
this->id= value;
    
}


    auto LicenseInitInfo::clearServers() -> void{
this->serverVector= new BasicArrayListD();
    
}


    auto LicenseInitInfo::setServer(std::string value, int32_t index) -> void{
this->serverVector->addAt(index, value);
    
}


    auto LicenseInitInfo::addServer(std::string value) -> void{
this->serverVector->add(value);
    
}


    auto LicenseInitInfo::getServerList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverVector;
    
}


    auto LicenseInitInfo::setServerList(BasicArrayList* servers) -> void{

                        if(DebugFactory::getInstance() == NoDebug::getInstance())
                        
                                    {
                                    this->serverVector= servers;
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_CPP
