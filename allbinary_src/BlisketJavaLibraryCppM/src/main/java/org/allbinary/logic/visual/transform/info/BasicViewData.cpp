
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
        



            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicViewData
            : public Object
         {
        

    private: static const instance: BasicViewData = new BasicViewData();

    public static BasicViewData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicViewData.instance;
    
}


private constructor (){

            super();
        }


    const GENERICDIR: string = "generic/";

    const USERDIR: string = this.GENERICDIR +"user/";

    const ADDRESSDIR: string = this.USERDIR +"address/";

    const BILLINGADDRESSDIR: string = this.ADDRESSDIR +"billing/";

    const SHIPPINGADDRESSDIR: string = this.ADDRESSDIR +"shipping/";

    const COMMERCEDIR: string = this.USERDIR +"commerce/";

    const INVENTORYDIR: string = this.COMMERCEDIR +"inventory/";

    const BASKETDIR: string = this.INVENTORYDIR +"basket/";

    const ITEMDIR: string = this.INVENTORYDIR +"item/";

    const MONEYDIR: string = this.COMMERCEDIR +"money/";

    const SHIPPINGDIR: string = this.COMMERCEDIR +"shipping/";

    const ORDERDIR: string = this.INVENTORYDIR +"order/";

    const ORDEREMAILDIR: string = this.ORDERDIR +"email/";

    const ORDERHISTORYDIR: string = this.ORDERDIR +"history/";

    const ORDERREVIEWDIR: string = this.ORDERDIR +"review/";

    public const PAYMENTDIR: string = this.MONEYDIR +"payment/";

    const GENERATIONDIR: string = this.GENERICDIR +"generation/";

    const PRODUCTSDIR: string = this.GENERICDIR +"products/";

    public const IGNOREXMLXSL: string = this.GENERICDIR +"ignoreXmlView.xsl";

    public const REVIEWORDERVIEWXSL: string = this.ORDERREVIEWDIR +"reviewOrderView.xsl";

    public const ORDERVIEWXSL: string = this.REVIEWORDERVIEWXSL;

    public const INVENTORYXSL: string = this.INVENTORYDIR +"inventory.xsl";

    public const BASKETXSL: string = this.BASKETDIR +"basket.xsl";

    public const CHECKOUTBASKETXSL: string = this.BASKETDIR +"staticBasket.xsl";

    public const MINIBASKETXSL: string = this.BASKETDIR +"miniBasket.xsl";

    public const BILLINGADDRESSCHANGEFORMXSL: string = this.BILLINGADDRESSDIR +"billingAddressChangeForm.xsl";

    public const BILLINGADDRESSINPUTFORMXSL: string = this.BILLINGADDRESSDIR +"billingAddressInputForm.xsl";

    public const BILLINGADDRESSVIEWXSL: string = this.BILLINGADDRESSDIR +"billingAddressView.xsl";

    public const SHIPPINGADDRESSCHANGEFORMXSL: string = this.SHIPPINGADDRESSDIR +"shippingAddressChangeForm.xsl";

    public const SHIPPINGADDRESSINPUTFORMXSL: string = this.SHIPPINGADDRESSDIR +"shippingAddressInputForm.xsl";

    public const SHIPPINGADDRESSVIEWXSL: string = this.SHIPPINGADDRESSDIR +"shippingAddressView.xsl";

    public const NEWTAXADDRESSXSL: string = this.SHIPPINGADDRESSDIR +"newTaxAddressView.xsl";

    public const EDITTAXADDRESSXSL: string = this.SHIPPINGADDRESSDIR +"editTaxAddressView.xsl";

    public const SHIPPINGMETHODSXSL: string = this.SHIPPINGDIR +"shippingMethods.xsl";

    public const ORDERCUSTOMEREMAILVIEWXSL: string = this.ORDEREMAILDIR +"orderCustomerEmailView.xsl";

    public const ORDERMANAGEREMAILVIEWXSL: string = this.ORDEREMAILDIR +"orderManagerEmailView.xsl";

    public const EDITCUSTOMERXSL: string = this.USERDIR +"editCustomerInputForm.xsl";

    public const ORDERHISTORYXSL: string = this.ORDERHISTORYDIR +"orderHistory.xsl";

    public const PAYMENTVIEWXSL: string = this.PAYMENTDIR +"paymentView.xsl";

    public const SUMMARYXSL: string = this.ITEMDIR +"summary/summary.xsl";

    public const PAYMENTGATEWAYOPTIONSXSL: string = this.PAYMENTDIR +"paymentGatewayOptions.xsl";

    public const MAKEPAYMENTVIEWXSL: string = this.PAYMENTDIR +"invoice/" +"makePayment.xsl";

};

            

