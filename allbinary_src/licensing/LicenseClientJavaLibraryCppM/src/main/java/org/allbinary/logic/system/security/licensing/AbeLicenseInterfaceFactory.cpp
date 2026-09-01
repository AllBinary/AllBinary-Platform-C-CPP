
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
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Calendar.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeLicenseInterface.h"
#include "AbeClientInformationInterface.h"
#include "AbeNoLicense.h"
#include "AbeClientInformationData.h"
#include "LicensingException.h"

class AbeLicenseInterfaceFactory
            : public Object
         {

    private: static const AbeLicenseInterfaceFactory SINGLETON = AbeLicenseInterfaceFactory();

    public: static AbeLicenseInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeLicenseInterfaceFactory::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: int64_t time = 0;

    private: bool check = false;

    private: int32_t checkPeriod = 36000000;

    private: AbeLicenseInterface abeLicenseInterface = 
                null
            ;

private: AbeLicenseInterfaceFactory(){
}


                //@Throws(LicensingException.constructor)
            
    public: AbeLicenseInterface getLicenseInstance(AbeClientInformationInterface abeClientInformation){

                        if(isTimeToGetKey())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->get(abeClientInformation);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abeLicenseInterface;
    

                        }
                            
}


                //@Throws(LicensingException.constructor)
            
    private: AbeLicenseInterface get(AbeClientInformationInterface abeClientInformation){

        try {
            this->logUtil.putF("Getting Keys", this, this->commonStrings.GET);
    
this->abeLicenseInterface= AbeNoLicense::getInstance();
    

    AbeLicenseClient licenseClient = AbeLicenseClient();;
    
this->abeLicenseInterface= licenseClient.get(abeClientInformation);
    

                        if(this->abeLicenseInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("Default Key: " +this->abeLicenseInterface.getKey(AbeClientInformationData::getInstance().KEY), this, this->commonStrings.GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abeLicenseInterface;
    

                //: 
} catch(e) 
            {
this->logUtil.put("Licensing IO Error", this, this->commonStrings.GET, e);
    



                            throw LicensingException("License Server Connection Error");
                    
}

                //: 
/* catch(e) 
            {
this->logUtil.put("Licensing Failure", this, this->commonStrings.GET, e);
    



                            throw LicensingException("Unknown License Failure: " +this->constructor.name.toString()!);
                    
}
*/
}


    private: bool isTimeToGetKey(){

    Calendar calendar = Calendar::getInstance();;
    

    int64_t currentTime = calendar.getTimeInMillis();;
    

                        if(this->abeLicenseInterface == 
                                    nullptr
                                 || this->abeLicenseInterface == AbeNoLicense::getInstance() || !this->abeLicenseInterface.hasKey() || isCheck() || currentTime -checkPeriod > time)
                        
                                    {
                                    this->abeLicenseInterface= 
                                        nullptr
                                    ;
    
this->time= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if()
                        
}


    public: void setCheck(bool check){
this->check= check;
    
}


    private: bool isCheck(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->check;
    
}


};

            

