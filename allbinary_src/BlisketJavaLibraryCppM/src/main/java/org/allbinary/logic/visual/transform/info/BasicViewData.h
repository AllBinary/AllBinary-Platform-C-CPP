
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicViewData
            : public Object
         {

    private: static BasicViewData instance() { return BasicViewData(); }

    public: static BasicViewData getInstance();

private: BasicViewData();

    const std::string GENERICDIR = "generic/";

    const std::string USERDIR = this->GENERICDIR +"user/";

    const std::string ADDRESSDIR = this->USERDIR +"address/";

    const std::string BILLINGADDRESSDIR = this->ADDRESSDIR +"billing/";

    const std::string SHIPPINGADDRESSDIR = this->ADDRESSDIR +"shipping/";

    const std::string COMMERCEDIR = this->USERDIR +"commerce/";

    const std::string INVENTORYDIR = this->COMMERCEDIR +"inventory/";

    const std::string BASKETDIR = this->INVENTORYDIR +"basket/";

    const std::string ITEMDIR = this->INVENTORYDIR +"item/";

    const std::string MONEYDIR = this->COMMERCEDIR +"money/";

    const std::string SHIPPINGDIR = this->COMMERCEDIR +"shipping/";

    const std::string ORDERDIR = this->INVENTORYDIR +"order/";

    const std::string ORDEREMAILDIR = this->ORDERDIR +"email/";

    const std::string ORDERHISTORYDIR = this->ORDERDIR +"history/";

    const std::string ORDERREVIEWDIR = this->ORDERDIR +"review/";

    public: const std::string PAYMENTDIR = this->MONEYDIR +"payment/";

    const std::string GENERATIONDIR = this->GENERICDIR +"generation/";

    const std::string PRODUCTSDIR = this->GENERICDIR +"products/";

    public: const std::string IGNOREXMLXSL = this->GENERICDIR +"ignoreXmlView.xsl";

    public: const std::string REVIEWORDERVIEWXSL = this->ORDERREVIEWDIR +"reviewOrderView.xsl";

    public: const std::string ORDERVIEWXSL = this->REVIEWORDERVIEWXSL;

    public: const std::string INVENTORYXSL = this->INVENTORYDIR +"inventory.xsl";

    public: const std::string BASKETXSL = this->BASKETDIR +"basket.xsl";

    public: const std::string CHECKOUTBASKETXSL = this->BASKETDIR +"staticBasket.xsl";

    public: const std::string MINIBASKETXSL = this->BASKETDIR +"miniBasket.xsl";

    public: const std::string BILLINGADDRESSCHANGEFORMXSL = this->BILLINGADDRESSDIR +"billingAddressChangeForm.xsl";

    public: const std::string BILLINGADDRESSINPUTFORMXSL = this->BILLINGADDRESSDIR +"billingAddressInputForm.xsl";

    public: const std::string BILLINGADDRESSVIEWXSL = this->BILLINGADDRESSDIR +"billingAddressView.xsl";

    public: const std::string SHIPPINGADDRESSCHANGEFORMXSL = this->SHIPPINGADDRESSDIR +"shippingAddressChangeForm.xsl";

    public: const std::string SHIPPINGADDRESSINPUTFORMXSL = this->SHIPPINGADDRESSDIR +"shippingAddressInputForm.xsl";

    public: const std::string SHIPPINGADDRESSVIEWXSL = this->SHIPPINGADDRESSDIR +"shippingAddressView.xsl";

    public: const std::string NEWTAXADDRESSXSL = this->SHIPPINGADDRESSDIR +"newTaxAddressView.xsl";

    public: const std::string EDITTAXADDRESSXSL = this->SHIPPINGADDRESSDIR +"editTaxAddressView.xsl";

    public: const std::string SHIPPINGMETHODSXSL = this->SHIPPINGDIR +"shippingMethods.xsl";

    public: const std::string ORDERCUSTOMEREMAILVIEWXSL = this->ORDEREMAILDIR +"orderCustomerEmailView.xsl";

    public: const std::string ORDERMANAGEREMAILVIEWXSL = this->ORDEREMAILDIR +"orderManagerEmailView.xsl";

    public: const std::string EDITCUSTOMERXSL = this->USERDIR +"editCustomerInputForm.xsl";

    public: const std::string ORDERHISTORYXSL = this->ORDERHISTORYDIR +"orderHistory.xsl";

    public: const std::string PAYMENTVIEWXSL = this->PAYMENTDIR +"paymentView.xsl";

    public: const std::string SUMMARYXSL = this->ITEMDIR +"summary/summary.xsl";

    public: const std::string PAYMENTGATEWAYOPTIONSXSL = this->PAYMENTDIR +"paymentGatewayOptions.xsl";

    public: const std::string MAKEPAYMENTVIEWXSL = this->PAYMENTDIR +"invoice/" +"makePayment.xsl";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_BASICVIEWDATA_H
