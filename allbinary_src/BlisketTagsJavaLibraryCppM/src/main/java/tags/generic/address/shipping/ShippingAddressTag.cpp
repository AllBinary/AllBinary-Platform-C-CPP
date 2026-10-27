
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

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShippingAddressTag: public StoreValidationTransformTag {

    private: std::string value;

public: ShippingAddressTag(){
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(org.allbinary.globals.GLOBALS2.VIEW) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.ViewShippingAddressesView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(org.allbinary.globals.GLOBALS2.EDIT) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.EditShippingAddressesView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(org.allbinary.globals.GLOBALS2.NEW) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.NewShippingAddressesView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings.INSERT) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.AddShippingAddressesView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings.DELETE) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.DeleteShippingAddressesView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(ShippingAddressData::SELECT) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.SelectShippingAddressesView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(ShippingAddressData::SETTOBILLINGADDRESS) == 0)
                        
                                    {
                                    this->setName("Basic Shipping Address View");
    
this->setObjectFile("views.generic.address.shipping.SetShippingAddressesView");
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Such View Command: " +this->getCommand());
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                                    }
                                



                            throw new Exception("Command Null");
                    

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


};

            

