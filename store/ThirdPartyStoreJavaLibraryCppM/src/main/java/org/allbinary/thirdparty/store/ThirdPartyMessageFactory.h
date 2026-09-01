
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

    private: static ThirdPartyMessageFactory instance() { return ThirdPartyMessageFactory(); }

    public: static ThirdPartyMessageFactory getInstance();

    public: const std::string AUTHORIZED = "Authorized";

    public: const std::string NOT_AUTHORIZED = "Not Authorized";

    public: const std::string LINKAGE_ERROR = "Linkage Error";

};

            


        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H
