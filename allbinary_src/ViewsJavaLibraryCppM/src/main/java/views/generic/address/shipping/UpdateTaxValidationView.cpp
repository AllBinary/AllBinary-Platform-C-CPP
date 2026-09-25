
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingAddressView.h"

class UpdateTaxValidationView: public ShippingAddressView, public ValidationComponentInterface {

public: UpdateTaxValidationView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Boolean isValid(){
this->streetAddress= StreetAddress(this->getRequest());
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getTransformInfoInterface().getStoreName());;
    

                        if(TaxFactory::getInstance().getInstance(this->abeClientInformation, storeFrontInterface).isValid(this->streetAddress, storeFrontInterface) == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    ShippingAddressesEntity billingAddressesEntity = ShippingAddressesEntity(this->getWeblisketSession().getUserName());;
    

    BasicArrayList streetAddressList = billingAddressesEntity.get();;
    

                        if(streetAddressList == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    int32_t count = 0;;
    

    int32_t size = streetAddressList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress aStreetAddress = streetAddressList.get(index) as StreetAddress;;
    

                        if(aStreetAddress.getName().compareTo(ShippingAddressData::TAX) == 0)
                        
                                    {
                                    count++;
    

                                    }
                                
}


                        if(count != 1)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Unable to update tax location.";
    
}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

