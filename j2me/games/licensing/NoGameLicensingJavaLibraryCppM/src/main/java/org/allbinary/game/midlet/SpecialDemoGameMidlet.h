
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class ClientInformationFactory;
class LicenseServerInitFileUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidlet.h"
class LicenseLoadingType;
class LicensedDemoSetupFactory;
class LicenseCheckRunnableFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialDemoGameMidlet: public DemoGameMidlet {

public: SpecialDemoGameMidlet(ClientInformationFactory* clientInformationFactory, LicenseLoadingType* licenseLoadingType, LicensedDemoSetupFactory* demoSetupFactory, LicenseCheckRunnableFactory* licenseCheckRunnableFactory);

    public: void initView();

    public: void preInit();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_SPECIALDEMOGAMEMIDLET_H_COMPLETE
        #if __has_include(<org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h>)
#include <org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h>
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidlet.h")
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#endif
#if __has_include("org/allbinary/game/midlet/LicenseLoadingType.h")
#include "org/allbinary/game/midlet/LicenseLoadingType.h"
#endif
#if __has_include("org/allbinary/game/midlet/LicensedDemoSetupFactory.h")
#include "org/allbinary/game/midlet/LicensedDemoSetupFactory.h"
#endif
#if __has_include("org/allbinary/game/midlet/LicenseCheckRunnableFactory.h")
#include "org/allbinary/game/midlet/LicenseCheckRunnableFactory.h"
#endif

        #endif
    
