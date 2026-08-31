
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
        



        #ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H
        #define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThirdPartyMessageFactory
            : public Object
         {
        

    private: static const instance: ThirdPartyMessageFactory = new ThirdPartyMessageFactory();

    public static ThirdPartyMessageFactory getInstance();

    public const AUTHORIZED: string = "Authorized";

    public const NOT_AUTHORIZED: string = "Not Authorized";

    public const LINKAGE_ERROR: string = "Linkage Error";

};

            


        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H
