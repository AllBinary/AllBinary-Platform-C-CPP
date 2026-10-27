
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/BasicViewData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto BasicViewData::instance_owner() -> BasicViewData* { static std::unique_ptr<BasicViewData> value(new BasicViewData()); return value.get(); }
BasicViewData* BasicViewData::instance = BasicViewData::instance_owner();

    auto BasicViewData::getInstance() -> BasicViewData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicViewData::instance;
    
}


BasicViewData::BasicViewData() : USERDIR(JavaString::valueOf(this->GENERICDIR) +JavaString::valueOf("user/")), ADDRESSDIR(JavaString::valueOf(this->USERDIR) +JavaString::valueOf("address/")), BILLINGADDRESSDIR(JavaString::valueOf(this->ADDRESSDIR) +JavaString::valueOf("billing/")), SHIPPINGADDRESSDIR(JavaString::valueOf(this->ADDRESSDIR) +JavaString::valueOf("shipping/")), COMMERCEDIR(JavaString::valueOf(this->USERDIR) +JavaString::valueOf("commerce/")), INVENTORYDIR(JavaString::valueOf(this->COMMERCEDIR) +JavaString::valueOf("inventory/")), BASKETDIR(JavaString::valueOf(this->INVENTORYDIR) +JavaString::valueOf("basket/")), ITEMDIR(JavaString::valueOf(this->INVENTORYDIR) +JavaString::valueOf("item/")), MONEYDIR(JavaString::valueOf(this->COMMERCEDIR) +JavaString::valueOf("money/")), SHIPPINGDIR(JavaString::valueOf(this->COMMERCEDIR) +JavaString::valueOf("shipping/")), ORDERDIR(JavaString::valueOf(this->INVENTORYDIR) +JavaString::valueOf("order/")), ORDEREMAILDIR(JavaString::valueOf(this->ORDERDIR) +JavaString::valueOf("email/")), ORDERHISTORYDIR(JavaString::valueOf(this->ORDERDIR) +JavaString::valueOf("history/")), ORDERREVIEWDIR(JavaString::valueOf(this->ORDERDIR) +JavaString::valueOf("review/")), PAYMENTDIR(JavaString::valueOf(this->MONEYDIR) +JavaString::valueOf("payment/")), GENERATIONDIR(JavaString::valueOf(this->GENERICDIR) +JavaString::valueOf("generation/")), PRODUCTSDIR(JavaString::valueOf(this->GENERICDIR) +JavaString::valueOf("products/")), IGNOREXMLXSL(JavaString::valueOf(this->GENERICDIR) +JavaString::valueOf("ignoreXmlView.xsl")), REVIEWORDERVIEWXSL(JavaString::valueOf(this->ORDERREVIEWDIR) +JavaString::valueOf("reviewOrderView.xsl")), ORDERVIEWXSL(this->REVIEWORDERVIEWXSL), INVENTORYXSL(JavaString::valueOf(this->INVENTORYDIR) +JavaString::valueOf("inventory.xsl")), BASKETXSL(JavaString::valueOf(this->BASKETDIR) +JavaString::valueOf("basket.xsl")), CHECKOUTBASKETXSL(JavaString::valueOf(this->BASKETDIR) +JavaString::valueOf("staticBasket.xsl")), MINIBASKETXSL(JavaString::valueOf(this->BASKETDIR) +JavaString::valueOf("miniBasket.xsl")), BILLINGADDRESSCHANGEFORMXSL(JavaString::valueOf(this->BILLINGADDRESSDIR) +JavaString::valueOf("billingAddressChangeForm.xsl")), BILLINGADDRESSINPUTFORMXSL(JavaString::valueOf(this->BILLINGADDRESSDIR) +JavaString::valueOf("billingAddressInputForm.xsl")), BILLINGADDRESSVIEWXSL(JavaString::valueOf(this->BILLINGADDRESSDIR) +JavaString::valueOf("billingAddressView.xsl")), SHIPPINGADDRESSCHANGEFORMXSL(JavaString::valueOf(this->SHIPPINGADDRESSDIR) +JavaString::valueOf("shippingAddressChangeForm.xsl")), SHIPPINGADDRESSINPUTFORMXSL(JavaString::valueOf(this->SHIPPINGADDRESSDIR) +JavaString::valueOf("shippingAddressInputForm.xsl")), SHIPPINGADDRESSVIEWXSL(JavaString::valueOf(this->SHIPPINGADDRESSDIR) +JavaString::valueOf("shippingAddressView.xsl")), NEWTAXADDRESSXSL(JavaString::valueOf(this->SHIPPINGADDRESSDIR) +JavaString::valueOf("newTaxAddressView.xsl")), EDITTAXADDRESSXSL(JavaString::valueOf(this->SHIPPINGADDRESSDIR) +JavaString::valueOf("editTaxAddressView.xsl")), SHIPPINGMETHODSXSL(JavaString::valueOf(this->SHIPPINGDIR) +JavaString::valueOf("shippingMethods.xsl")), ORDERCUSTOMEREMAILVIEWXSL(JavaString::valueOf(this->ORDEREMAILDIR) +JavaString::valueOf("orderCustomerEmailView.xsl")), ORDERMANAGEREMAILVIEWXSL(JavaString::valueOf(this->ORDEREMAILDIR) +JavaString::valueOf("orderManagerEmailView.xsl")), EDITCUSTOMERXSL(JavaString::valueOf(this->USERDIR) +JavaString::valueOf("editCustomerInputForm.xsl")), ORDERHISTORYXSL(JavaString::valueOf(this->ORDERHISTORYDIR) +JavaString::valueOf("orderHistory.xsl")), PAYMENTVIEWXSL(JavaString::valueOf(this->PAYMENTDIR) +JavaString::valueOf("paymentView.xsl")), SUMMARYXSL(JavaString::valueOf(this->ITEMDIR) +JavaString::valueOf("summary/summary.xsl")), PAYMENTGATEWAYOPTIONSXSL(JavaString::valueOf(this->PAYMENTDIR) +JavaString::valueOf("paymentGatewayOptions.xsl")), MAKEPAYMENTVIEWXSL(JavaString::valueOf(JavaString::valueOf(this->PAYMENTDIR) +JavaString::valueOf("invoice/")) +JavaString::valueOf("makePayment.xsl")){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_CPP
