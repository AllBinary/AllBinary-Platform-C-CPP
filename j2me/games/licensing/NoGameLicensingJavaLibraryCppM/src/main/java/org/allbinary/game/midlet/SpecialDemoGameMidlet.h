
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_H
        #define ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_H

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

class SpecialDemoGameMidlet: public DemoGameMidlet {

public: SpecialDemoGameMidlet(ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory);

    public: void initView();

    public: void preInit();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_H
