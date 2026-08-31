
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
        

    private: static const SINGLETON: AbeLicenseInterfaceFactory = new AbeLicenseInterfaceFactory();

    public static AbeLicenseInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeLicenseInterfaceFactory.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: time: int64_t = 0;

    private: check: bool = false;

    private: checkPeriod: int32_t = 36000000;

    private: abeLicenseInterface: AbeLicenseInterface = 
                null
            ;

private constructor (){

            super();
        }


                //@Throws(LicensingException.constructor)
            
    public AbeLicenseInterface getLicenseInstance(AbeClientInformationInterface abeClientInformation){

                        if(isTimeToGetKey())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.get(abeClientInformation);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.abeLicenseInterface;
    

                        }
                            
}


                //@Throws(LicensingException.constructor)
            
    AbeLicenseInterface get(AbeClientInformationInterface abeClientInformation){

        try {
            this.logUtil!.putF("Getting Keys", this, this.commonStrings!.GET);
    
this.abeLicenseInterface= AbeNoLicense.getInstance();
    

    licenseClient: AbeLicenseClient = new AbeLicenseClient();;
    
this.abeLicenseInterface= licenseClient!.get(abeClientInformation);
    

                        if(this.abeLicenseInterface != 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF("Default Key: " +this.abeLicenseInterface!.getKey(AbeClientInformationData.getInstance()!.KEY), this, this.commonStrings!.GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.abeLicenseInterface;
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Licensing IO Error", this, this.commonStrings!.GET, e);
    



                            throw new LicensingException("License Server Connection Error");
                    
}

                //: 
/* catch(e) 
            {
this.logUtil!.put("Licensing Failure", this, this.commonStrings!.GET, e);
    



                            throw new LicensingException("Unknown License Failure: " +this.constructor.name.toString()!);
                    
}
*/
}


    bool isTimeToGetKey(){

    calendar: Calendar = Calendar.getInstance()!;;
    

    currentTime: int64_t = calendar.getTimeInMillis()!;;
    

                        if(this.abeLicenseInterface == 
                                    null
                                 || this.abeLicenseInterface == AbeNoLicense.getInstance() || !this.abeLicenseInterface!.hasKey() || isCheck() || currentTime -checkPeriod > time)
                        
                                    {
                                    this.abeLicenseInterface= 
                                        nullptr
                                    ;
    
this.time= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if()
                        
}


    public setCheck(bool check){
this.check= check;
    
}


    bool isCheck(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.check;
    
}


};

            

