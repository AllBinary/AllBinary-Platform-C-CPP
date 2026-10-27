
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/LicenseLoadingTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/LicenseLoadingType.h"


LicenseLoadingTypeFactory::LicenseLoadingTypeFactory() : INITIAL_LOADING(new LicenseLoadingType("Initial Loading")), GAME_START(new LicenseLoadingType("Game Start")), LOGIN(new LicenseLoadingType("Login")), OTHER(new LicenseLoadingType("Other/Usually The First Non Demo Level")) {
        }
        auto LicenseLoadingTypeFactory::instance_owner() -> LicenseLoadingTypeFactory* { static std::unique_ptr<LicenseLoadingTypeFactory> value(new LicenseLoadingTypeFactory()); return value.get(); }
LicenseLoadingTypeFactory* LicenseLoadingTypeFactory::instance = LicenseLoadingTypeFactory::instance_owner();

    auto LicenseLoadingTypeFactory::getIntance() -> LicenseLoadingTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseLoadingTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_CPP
