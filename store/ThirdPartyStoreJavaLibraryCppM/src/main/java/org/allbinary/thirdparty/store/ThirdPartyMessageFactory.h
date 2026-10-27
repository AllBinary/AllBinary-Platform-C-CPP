
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThirdPartyMessageFactory
            : public virtual Object
         {

    private: static ThirdPartyMessageFactory* instance_owner();
    private: static ThirdPartyMessageFactory* instance;

    public: static ThirdPartyMessageFactory* getInstance();


            
    public: ThirdPartyMessageFactory();
        
    public: const std::string AUTHORIZED = "Authorized";

    public: const std::string NOT_AUTHORIZED = "Not Authorized";

    public: const std::string LINKAGE_ERROR = "Linkage Error";

};

            


        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H_COMPLETE
        
        #endif
    
