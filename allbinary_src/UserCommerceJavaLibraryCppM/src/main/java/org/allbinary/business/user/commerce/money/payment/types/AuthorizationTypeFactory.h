
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AuthorizationType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AuthorizationTypeFactory
            : public virtual Object
         {

    private: static AuthorizationTypeFactory* instance_owner();
    private: static AuthorizationTypeFactory* instance;

    public: static AuthorizationTypeFactory* getInstance();


            
    public: AuthorizationTypeFactory();
        
    public: AuthorizationType* NONE;

    public: AuthorizationType* VOICE;

    public: AuthorizationType* RETINAL;

    public: AuthorizationType* IMAGE;

    public: AuthorizationType* DNA;

    public: AuthorizationType* PRINT;

    public: AuthorizationType* CHIP;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_AUTHORIZATIONTYPEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/business/user/commerce/money/payment/types/AuthorizationType.h")
#include "org/allbinary/business/user/commerce/money/payment/types/AuthorizationType.h"
#endif

        #endif
    
