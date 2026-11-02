
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/ClientInformation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/SystemHardwareFactory.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
// This is the information sent to the license server

ClientInformation::ClientInformation(std::string name, std::string version, std::string specialName, std::string shortName) : operatingSystemInterface(NoOperatingSystem::NO_OPERATING_SYSTEM), tsUtil(TsUtil::getInstance()), licenseId(StringUtil::getInstance()->EMPTY_STRING), licenseServers(BasicArrayListUtil::getInstance()->getImmutableInstance()){
this->name= name;
    
this->version= version;
    
this->specialName= specialName;
    
this->shortName= (new StringMaker())->append(shortName)->append(CommonSeps::getInstance()->UNDERSCORE)->append(version)->toString();
    
this->init();
    
}


    auto ClientInformation::init() -> void{
}


    auto ClientInformation::getOperatingSystemInterface() -> GenericOperatingSystem*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->operatingSystemInterface;
    
}


    auto ClientInformation::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto ClientInformation::getSpecialName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->specialName;
    
}


    auto ClientInformation::getVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->version;
    
}


    auto ClientInformation::getLicenseId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseId;
    
}


    auto ClientInformation::getLicenseServers() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseServers;
    
}


    auto ClientInformation::getLicenseServer(int32_t index) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->licenseServers->objectArray[index]);
    
}


    auto ClientInformation::getNumberOfLicenseServers() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseServers->size();;
    
}


    auto ClientInformation::toHashtable() -> ABHashtable<Object*, Object*>*{

    AbeClientInformationData* abeClientInformationData = AbeClientInformationData::getInstance();;
    

    GenericOperatingSystem* genericOperatingSystem = this->getOperatingSystemInterface();;
    

    ABHashtable<Object*, Object*>* clientInfoHashtable = StdUtil::getInstance()->createHashtable();;
    
clientInfoHashtable->put(abeClientInformationData->NAME, this->name);
    
clientInfoHashtable->put(abeClientInformationData->VERSION, this->version);
    
clientInfoHashtable->put(abeClientInformationData->SPECIALNAME, this->specialName);
    
clientInfoHashtable->put(abeClientInformationData->LICENSEID, this->getLicenseId());
    
clientInfoHashtable->put(abeClientInformationData->OSNAME, genericOperatingSystem->getName());
    
clientInfoHashtable->put(abeClientInformationData->OSARCH, genericOperatingSystem->getArch());
    
clientInfoHashtable->put(abeClientInformationData->OSVERSION, genericOperatingSystem->getVersion());
    
clientInfoHashtable->put(abeClientInformationData->OS, genericOperatingSystem->toString());
    

    HardwareInterface* hardwareInterface = SystemHardwareFactory::getInstance()->getInstance(genericOperatingSystem);;
    

    std::string hardwareString = hardwareInterface->toString();;
    
clientInfoHashtable->put(abeClientInformationData->HARDWARE, hardwareString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return clientInfoHashtable;
    
}


    auto ClientInformation::isSameId(std::string alicenseId) -> bool{

                        if(this->tsUtil->compareTo(this->getLicenseId(), alicenseId) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto ClientInformation::isLargerOrDifferentServerList(BasicArrayList* list) -> bool{

    int32_t size = list->size() -1;;
    

    int32_t currentSize = this->licenseServers->size() -1;;
    

                        if(size > currentSize)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                




                        for (
    int32_t index = size;index >= 0; index--)
        {

    std::string newServerName = JavaBoxes::unbox<std::string>(list->objectArray[index]);;
    




                        for (
    int32_t index2 = currentSize;index2 >= 0; index2--)
        {

    std::string nextOldServerName = JavaBoxes::unbox<std::string>(this->licenseServers->objectArray[index]);;
    

                        if(this->tsUtil->compareTo(newServerName, nextOldServerName) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ClientInformation::setHardSale(bool hardSale) -> void{
this->hardSale= hardSale;
    
}


    auto ClientInformation::isHardSale() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hardSale;
    
}


    auto ClientInformation::setOperatingSystemInterface(GenericOperatingSystem* operatingSystemInterface) -> void{
this->operatingSystemInterface= operatingSystemInterface;
    
}


    auto ClientInformation::setLicenseId(std::string licenseId) -> void{
this->licenseId= licenseId;
    
}


    auto ClientInformation::setLicenseServers(BasicArrayList* licenseServers) -> void{
this->licenseServers= licenseServers;
    
}


    auto ClientInformation::toShortString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shortName;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_CPP
