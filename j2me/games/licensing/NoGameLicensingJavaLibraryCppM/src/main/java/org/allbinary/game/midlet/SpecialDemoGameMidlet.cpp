
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/SpecialDemoGameMidlet.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/midlet/LicenseLoadingType.h"
#include "org/allbinary/game/midlet/LicensedDemoSetupFactory.h"
#include "org/allbinary/game/midlet/LicenseCheckRunnableFactory.h"


SpecialDemoGameMidlet::SpecialDemoGameMidlet(ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory) : DemoGameMidlet(clientInformationFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto SpecialDemoGameMidlet::initView() -> void{
}


    auto SpecialDemoGameMidlet::preInit() -> void{
(new LicenseServerInitFileUtil())->init();
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_CPP
