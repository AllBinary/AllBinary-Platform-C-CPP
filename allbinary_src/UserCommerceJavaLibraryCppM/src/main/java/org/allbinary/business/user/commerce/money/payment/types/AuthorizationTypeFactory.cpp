
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/AuthorizationTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/AuthorizationType.h"


AuthorizationTypeFactory::AuthorizationTypeFactory() : NONE(new AuthorizationType("None")), VOICE(new AuthorizationType("Voice")), RETINAL(new AuthorizationType("Retinal")), IMAGE(new AuthorizationType("Image")), DNA(new AuthorizationType("DNA")), PRINT(new AuthorizationType("Print")), CHIP(new AuthorizationType("Chip")) {
        }
        auto AuthorizationTypeFactory::instance_owner() -> AuthorizationTypeFactory* { static std::unique_ptr<AuthorizationTypeFactory> value(new AuthorizationTypeFactory()); return value.get(); }
AuthorizationTypeFactory* AuthorizationTypeFactory::instance = AuthorizationTypeFactory::instance_owner();

    auto AuthorizationTypeFactory::getInstance() -> AuthorizationTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AuthorizationTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_CPP
