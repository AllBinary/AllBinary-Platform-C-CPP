
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShippingAddressesView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    protected: Vector streetAddressList;

public: ShippingAddressesView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

    TransformInfoHttpInterface httpTransformInfoInterface = this->getTransformInfoInterface() as TransformInfoHttpInterface;;
    
this->request= httpTransformInfoInterface.getPageContext().getRequest() as HttpServletRequest;
    
}


    protected: HttpServletRequest getRequest(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->request;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

        try {
            
    Node billingAddressesNode = document.createElement(ShippingAddressData::MULTIPLE);;
    

    int32_t size = this->streetAddressList.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress streetAddress = this->streetAddressList.get(index) as StreetAddress;;
    
billingAddressesNode.appendChild(streetAddress.toXmlNode(document));
    
}

billingAddressesNode.appendChild(ModDomHelper::createNameValueNodes(document, StreetAddressData::NUMBEROFADDRESSES, Integer(streetAddressList.length).toString()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return billingAddressesNode;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public: void addDomNodeInterfaces(){
this->addDomNodeInterface(this as DomNodeInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

