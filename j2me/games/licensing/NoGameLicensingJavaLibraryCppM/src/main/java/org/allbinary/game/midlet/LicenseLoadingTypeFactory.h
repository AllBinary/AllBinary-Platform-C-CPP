
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

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseLoadingType.h"

class LicenseLoadingTypeFactory
            : public Object
         {
        

    private: static const instance: LicenseLoadingTypeFactory = new LicenseLoadingTypeFactory();

    public static LicenseLoadingTypeFactory getIntance();

    public const INITIAL_LOADING: LicenseLoadingType = new LicenseLoadingType("Initial Loading");

    public const GAME_START: LicenseLoadingType = new LicenseLoadingType("Game Start");

    public const LOGIN: LicenseLoadingType = new LicenseLoadingType("Login");

    public const OTHER: LicenseLoadingType = new LicenseLoadingType("Other/Usually The First Non Demo Level");

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_LICENSELOADINGTYPEFACTORY_H
