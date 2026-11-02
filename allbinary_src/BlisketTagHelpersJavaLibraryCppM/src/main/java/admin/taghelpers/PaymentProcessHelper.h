
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
        



        #ifndef ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_H
        #define ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class TransformInfoHttpFactory;
class TransformInfoHttpInterface;
class PaymentProcessorComponent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentProcessHelper: public TagHelper {

    private: PaymentProcessorComponent* paymentProcessorComponent;

public: PaymentProcessHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: std::string process();

};

            


        #endif //ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<views/admin/payment/PaymentProcessorComponent.h>)
#include <views/admin/payment/PaymentProcessorComponent.h>
#endif
#if __has_include("admin/taghelpers/TagHelper.h")
#include "admin/taghelpers/TagHelper.h"
#endif

        #endif
    
