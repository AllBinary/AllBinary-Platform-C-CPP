
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
        



        #ifndef TAGS_GENERIC_ADDRESS_SHIPPING_TAXADDRESSTAG_CPP
        #define TAGS_GENERIC_ADDRESS_SHIPPING_TAXADDRESSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/generic/address/shipping/TaxAddressTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/StoreValidationTransformTag.h>

      

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TaxAddressTag::TaxAddressTag(){
}


                //@Throws(JspTagException.constructor)
            
    auto TaxAddressTag::doStartTag() -> int32_t{

        try {
            
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(GLOBALS2::VIEW) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.TaxValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(GLOBALS2::NEW) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.NewValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings->INSERT) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.AddTaxValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings->UPDATE) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.UpdateTaxValidationView");
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("No Such View Command: ") +JavaString::valueOf(this->getCommand()));
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreValidationTransformTag::doStartTag();;
    

                                    }
                                



                            throw Exception("Command Null");
                    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_GENERIC_ADDRESS_SHIPPING_TAXADDRESSTAG_CPP
