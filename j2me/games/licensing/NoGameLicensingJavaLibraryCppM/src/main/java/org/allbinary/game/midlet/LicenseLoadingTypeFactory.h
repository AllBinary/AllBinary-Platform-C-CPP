
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/LicenseLoadingType.h"

class LicenseLoadingTypeFactory
            : public Object
         {

    private: static LicenseLoadingTypeFactory* instance() { static std::unique_ptr<LicenseLoadingTypeFactory> value(new LicenseLoadingTypeFactory()); return value.get(); }

    public: static LicenseLoadingTypeFactory* getIntance();

    public: LicenseLoadingType* INITIAL_LOADING = new LicenseLoadingType("Initial Loading");

    public: LicenseLoadingType* GAME_START = new LicenseLoadingType("Game Start");

    public: LicenseLoadingType* LOGIN = new LicenseLoadingType("Login");

    public: LicenseLoadingType* OTHER = new LicenseLoadingType("Other/Usually The First Non Demo Level");

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_H
