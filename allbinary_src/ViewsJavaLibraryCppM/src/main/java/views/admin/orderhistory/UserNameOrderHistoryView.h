
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
        



        #ifndef VIEWS_ADMIN_ORDERHISTORY_USERNAMEORDERHISTORYVIEW_H
        #define VIEWS_ADMIN_ORDERHISTORY_USERNAMEORDERHISTORYVIEW_H

            #include "../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/username/UserName.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserNameOrderHistoryView: public HttpStoreComponentView: public ValidationComponentInterface, public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: request: HttpServletRequest;

    private: userName: string;

    private: shipped: string;

    private: partiallyShipped: string;

    private: processing: string;

    private: preprocessing: string;

    private: cancelled: string;

    private: const ON: string = "on";

public constructor (TransformInfoInterface transformInfoInterface);

    public addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public string view();

    public Node toXmlNode(Document document);

    public Boolean isValid();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

    public string validationInfo();

};

            


        #endif //VIEWS_ADMIN_ORDERHISTORY_USERNAMEORDERHISTORYVIEW_H
