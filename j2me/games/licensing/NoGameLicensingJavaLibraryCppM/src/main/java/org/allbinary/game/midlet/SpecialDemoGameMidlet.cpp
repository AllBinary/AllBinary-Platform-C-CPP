
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
        



#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoGameMidlet.h"
#include "LicenseLoadingType.h"
#include "LicensedDemoSetupFactory.h"
#include "LicenseCheckRunnableFactory.h"

class SpecialDemoGameMidlet: public DemoGameMidlet {

public: SpecialDemoGameMidlet(ClientInformationFactory clientInformationFactory, LicenseLoadingType licenseLoadingType, LicensedDemoSetupFactory demoSetupFactory, LicenseCheckRunnableFactory licenseCheckRunnableFactory) : DemoGameMidlet(clientInformationFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void initView(){
}


    public: void preInit(){
LicenseServerInitFileUtil().init();
    
}


};

            

