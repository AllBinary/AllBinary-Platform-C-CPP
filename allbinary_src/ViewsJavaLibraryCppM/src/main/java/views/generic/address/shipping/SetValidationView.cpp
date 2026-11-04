
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_SETVALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_SETVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/shipping/SetValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/globals/MESSAGES.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/shipping/ShippingAddressView.h"


SetValidationView::SetValidationView(TransformInfoInterface* transformInfoInterface) : ShippingAddressView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto SetValidationView::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto SetValidationView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MESSAGES::CONTACTADMIN;
    
}


    auto SetValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto SetValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_SETVALIDATIONVIEW_CPP
