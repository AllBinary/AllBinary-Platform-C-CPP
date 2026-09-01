
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
        



            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <views/admin/payment/PaymentProcessorComponent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class PaymentProcessHelper: public TagHelper {

    private: PaymentProcessorComponent paymentProcessorComponent;

public: PaymentProcessHelper(HashMap<any, any> propertiesHashMap, PageContext pageContext){

    TransformInfoHttpInterface transformInfoInterface = TransformInfoHttpFactory::getInstance(propertiesHashMap, pageContext) as TransformInfoHttpInterface;;
    
this->paymentProcessorComponent= PaymentProcessorComponent(transformInfoInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: std::string process(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentProcessorComponent.view();;
    
}


};

            

