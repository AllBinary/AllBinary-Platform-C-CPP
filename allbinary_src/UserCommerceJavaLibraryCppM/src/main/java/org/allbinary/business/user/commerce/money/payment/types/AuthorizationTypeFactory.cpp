
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/AuthorizationType.h"

class AuthorizationTypeFactory
            : public Object
         {

    private: static AuthorizationTypeFactory* instance() { static std::unique_ptr<AuthorizationTypeFactory> value(new AuthorizationTypeFactory()); return value.get(); }

    public: static AuthorizationTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AuthorizationTypeFactory::instance();
    
}


    public: AuthorizationType* NONE = new AuthorizationType("None");

    public: AuthorizationType* VOICE = new AuthorizationType("Voice");

    public: AuthorizationType* RETINAL = new AuthorizationType("Retinal");

    public: AuthorizationType* IMAGE = new AuthorizationType("Image");

    public: AuthorizationType* DNA = new AuthorizationType("DNA");

    public: AuthorizationType* PRINT = new AuthorizationType("Print");

    public: AuthorizationType* CHIP = new AuthorizationType("Chip");

};

            

