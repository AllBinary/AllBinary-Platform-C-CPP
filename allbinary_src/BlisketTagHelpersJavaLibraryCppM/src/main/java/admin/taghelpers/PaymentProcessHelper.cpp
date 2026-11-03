
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
        



        #ifndef ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_CPP
        #define ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/PaymentProcessHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <views/admin/payment/PaymentProcessorComponent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


PaymentProcessHelper::PaymentProcessHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext){

    TransformInfoHttpInterface* transformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(TransformInfoHttpFactory::getInstance(propertiesHashMap, pageContext));;
    
this->paymentProcessorComponent= new PaymentProcessorComponent(transformInfoInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentProcessHelper::process() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentProcessorComponent->view();;
    
}




        #endif //ADMIN_TAGHELPERS_PAYMENTPROCESSHELPER_CPP
