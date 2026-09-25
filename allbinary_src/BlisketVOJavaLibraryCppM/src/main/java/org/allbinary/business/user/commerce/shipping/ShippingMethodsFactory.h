
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModuleView.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingMethodsData.h"
#include "ShippingMethodData.h"

class ShippingMethodsFactory
            : public Object
         {

    private: static const std::string SHIPPINGMETHODSFILEPATHSTRING;

                    static int32_t initResult;
                static int32_t init();
            
    private: static const std::string SHIPPINGMETHODSFILENAME = "shippingMethods.xml";

    private: ShippingInterface defaultShippingMethodInterface;

    private: Document document;

    private: BasicArrayList shippingVector;

public: ShippingMethodsFactory(AbeClientInformationInterface abeClientInformation, StoreFrontInterface storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getInstance();

    public: ShippingInterface getDefaultInstance();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H
