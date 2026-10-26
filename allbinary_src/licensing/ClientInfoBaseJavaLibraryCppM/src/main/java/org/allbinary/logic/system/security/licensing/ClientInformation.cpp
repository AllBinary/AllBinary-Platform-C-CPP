
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
        #include "AbeClientInformationInterface.h"
#include "AbeClientInformationData.h"
// This is the information sent to the license server
class ClientInformation
            : public Object
        : public AbeClientInformationInterface {

    private: GenericOperatingSystem operatingSystemInterface = NoOperatingSystem::NO_OPERATING_SYSTEM;

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: std::string name;

    private: std::string shortName;

    private: std::string version;

    private: std::string specialName;

    private: bool hardSale = true;

    private: std::string licenseId = StringUtil::getInstance().EMPTY_STRING;

    private: BasicArrayList licenseServers = BasicArrayListUtil::getInstance().getImmutableInstance();

public: ClientInformation(std::string name, std::string version, std::string specialName, std::string shortName){
this->name= name;
    
this->version= version;
    
this->specialName= specialName;
    
this->shortName= StringMaker().append(shortName).append(CommonSeps::getInstance().UNDERSCORE).append(version).toString();
    
this->init();
    
}


    public: void init(){
}


    public: GenericOperatingSystem getOperatingSystemInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->operatingSystemInterface;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getSpecialName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->specialName;
    
}


    public: std::string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->version;
    
}


    public: std::string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseId;
    
}


    public: BasicArrayList getLicenseServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseServers;
    
}


    public: std::string getLicenseServer(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseServers.objectArray[index];
    
}


    public: int32_t getNumberOfLicenseServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseServers.size();;
    
}


    public: ABHashtable<Object*, Object*> toHashtable(){

    AbeClientInformationData abeClientInformationData = AbeClientInformationData::getInstance();;
    

    GenericOperatingSystem genericOperatingSystem = this->getOperatingSystemInterface();;
    

    ABHashtable<Object*, Object*> clientInfoHashtable = StdUtil::getInstance().createHashtable();;
    
clientInfoHashtable.put(abeClientInformationData.NAME, this->name);
    
clientInfoHashtable.put(abeClientInformationData.VERSION, this->version);
    
clientInfoHashtable.put(abeClientInformationData.SPECIALNAME, this->specialName);
    
clientInfoHashtable.put(abeClientInformationData.LICENSEID, this->getLicenseId());
    
clientInfoHashtable.put(abeClientInformationData.OSNAME, genericOperatingSystem.getName());
    
clientInfoHashtable.put(abeClientInformationData.OSARCH, genericOperatingSystem.getArch());
    
clientInfoHashtable.put(abeClientInformationData.OSVERSION, genericOperatingSystem.getVersion());
    
clientInfoHashtable.put(abeClientInformationData.OS, genericOperatingSystem.toString());
    

    HardwareInterface hardwareInterface = SystemHardwareFactory::getInstance().getInstance(genericOperatingSystem);;
    

    std::string hardwareString = hardwareInterface.toString();;
    
clientInfoHashtable.put(abeClientInformationData.HARDWARE, hardwareString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return clientInfoHashtable;
    
}


    public: bool isSameId(std::string alicenseId){

                        if(this->tsUtil.compareTo(this->getLicenseId(), alicenseId) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: bool isLargerOrDifferentServerList(BasicArrayList list){

    int32_t size = list.size() -1;;
    

    int32_t currentSize = this->licenseServers.size() -1;;
    

                        if(size > currentSize)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                




                        for (
    int32_t index = size;index >= 0; index--)
        {

    std::string newServerName = list.objectArray[index];;
    




                        for (
    int32_t index2 = currentSize;index2 >= 0; index2--)
        {

    std::string nextOldServerName = this->licenseServers.objectArray[index];;
    

                        if(this->tsUtil.compareTo(newServerName, nextOldServerName) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: void setHardSale(bool hardSale){
this->hardSale= hardSale;
    
}


    public: bool isHardSale(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hardSale;
    
}


    protected: void setOperatingSystemInterface(GenericOperatingSystem operatingSystemInterface){
this->operatingSystemInterface= operatingSystemInterface;
    
}


    protected: void setLicenseId(std::string licenseId){
this->licenseId= licenseId;
    
}


    protected: void setLicenseServers(BasicArrayList licenseServers){
this->licenseServers= licenseServers;
    
}


    public: std::string toShortString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shortName;
    
}


};

            

