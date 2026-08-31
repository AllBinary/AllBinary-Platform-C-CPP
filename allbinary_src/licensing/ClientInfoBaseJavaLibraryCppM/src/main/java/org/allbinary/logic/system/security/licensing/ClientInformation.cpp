
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformationInterface.h"
#include "AbeClientInformationData.h"
// This is the information sent to the license server
class ClientInformation
            : public Object
        : public AbeClientInformationInterface {
        

    private: operatingSystemInterface: GenericOperatingSystem = NoOperatingSystem.NO_OPERATING_SYSTEM;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const name: string;

    private: const shortName: string;

    private: const version: string;

    private: const specialName: string;

    private: hardSale: bool = true;

    private: licenseId: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: licenseServers: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

public constructor (string name, string version, string specialName, string shortName){

            super();
        this.name= name;
    
this.version= version;
    
this.specialName= specialName;
    
this.shortName= new StringMaker().append(shortName)!.append(CommonSeps.getInstance()!.UNDERSCORE)!.append(version)!.toString();
    
this.init();
    
}


    public init(){
}


    public GenericOperatingSystem getOperatingSystemInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.operatingSystemInterface;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getSpecialName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.specialName;
    
}


    public string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.version;
    
}


    public string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.licenseId;
    
}


    public BasicArrayList getLicenseServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.licenseServers;
    
}


    public string getLicenseServer(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.licenseServers!.objectArray[index]! as string;
    
}


    public int32_t getNumberOfLicenseServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.licenseServers!.size();;
    
}


    public Hashtable<any, any> toHashtable(){

    abeClientInformationData: AbeClientInformationData = AbeClientInformationData.getInstance()!;;
    

    genericOperatingSystem: GenericOperatingSystem = this.getOperatingSystemInterface()!;;
    

    clientInfoHashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    
clientInfoHashtable!.put(abeClientInformationData!.NAME, this.name);
    
clientInfoHashtable!.put(abeClientInformationData!.VERSION, this.version);
    
clientInfoHashtable!.put(abeClientInformationData!.SPECIALNAME, this.specialName);
    
clientInfoHashtable!.put(abeClientInformationData!.LICENSEID, this.getLicenseId());
    
clientInfoHashtable!.put(abeClientInformationData!.OSNAME, genericOperatingSystem!.getName());
    
clientInfoHashtable!.put(abeClientInformationData!.OSARCH, genericOperatingSystem!.getArch());
    
clientInfoHashtable!.put(abeClientInformationData!.OSVERSION, genericOperatingSystem!.getVersion());
    
clientInfoHashtable!.put(abeClientInformationData!.OS, genericOperatingSystem!.toString());
    

    hardwareInterface: HardwareInterface = SystemHardwareFactory.getInstance()!.getInstance(genericOperatingSystem)!;;
    

    hardwareString: string = hardwareInterface!.toString()!;;
    
clientInfoHashtable!.put(abeClientInformationData!.HARDWARE, hardwareString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return clientInfoHashtable;
    
}


    public bool isSameId(string alicenseId){

                        if(this.tsUtil!.compareTo(this.getLicenseId(), alicenseId) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public bool isLargerOrDifferentServerList(BasicArrayList list){

    size: int32_t = list.size() -1;;
    

    currentSize: int32_t = this.licenseServers!.size() -1;;
    

                        if(size > currentSize)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                




                        for (
    index: int32_t = size;index >= 0; index--)
        {

    newServerName: string = list.objectArray[index]! as string;;
    




                        for (
    index2: int32_t = currentSize;index2 >= 0; index2--)
        {

    nextOldServerName: string = this.licenseServers!.objectArray[index]! as string;;
    

                        if(this.tsUtil!.compareTo(newServerName, nextOldServerName) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    setHardSale(bool hardSale){
this.hardSale= hardSale;
    
}


    public bool isHardSale(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hardSale;
    
}


    setOperatingSystemInterface(GenericOperatingSystem operatingSystemInterface){
this.operatingSystemInterface= operatingSystemInterface;
    
}


    setLicenseId(string licenseId){
this.licenseId= licenseId;
    
}


    setLicenseServers(BasicArrayList licenseServers){
this.licenseServers= licenseServers;
    
}


    public string toShortString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shortName;
    
}


};

            

