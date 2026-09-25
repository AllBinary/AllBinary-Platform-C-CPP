
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

      
#include <org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingAddressView.h"

class AddTaxValidationView: public ShippingAddressView, public ValidationComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: AddTaxValidationView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Boolean isValid(){

        try {
            this->streetAddress= StreetAddress(this->getRequest());
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getTransformInfoInterface().getStoreName());;
    

    TaxModuleInterface taxInterface = TaxFactory::getInstance().getInstance(this->abeClientInformation, storeFrontInterface);;
    

                        if(taxInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(taxInterface.isValid(this->streetAddress, storeFrontInterface) == Boolean::FALSE)
                        
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
                                

    int32_t size = streetAddressList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress aStreetAddress = streetAddressList.get(index) as StreetAddress;;
    

                        if(aStreetAddress.getName().compareTo(ShippingAddressData::TAX) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string validationInfo(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getTransformInfoInterface().getStoreName());;
    

    TaxModuleInterface taxInterface = TaxFactory::getInstance().getInstance(this->abeClientInformation, storeFrontInterface);;
    

                        if(taxInterface == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("Unable to Load Tax Component<br/>");
    

                                    }
                                
                        else {
                            
                        if(taxInterface.isValid(this->streetAddress, storeFrontInterface) == Boolean::FALSE)
                        
                                    {
                                    stringBuffer.append("Unable to validate address with Tax Component<br/>");
    

                                    }
                                

                        }
                            

    ShippingAddressesEntity billingAddressesEntity = ShippingAddressesEntity(this->getWeblisketSession().getUserName());;
    

    BasicArrayList streetAddressList = billingAddressesEntity.get();;
    

    int32_t size = streetAddressList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress aStreetAddress = streetAddressList.get(index) as StreetAddress;;
    

                        if(aStreetAddress.getName().compareTo(ShippingAddressData::TAX) == 0)
                        
                                    {
                                    stringBuffer.append("Not a valid tax location<br/>");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to create validateInfo", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Creating ValidationInfo";
    
}

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

            

