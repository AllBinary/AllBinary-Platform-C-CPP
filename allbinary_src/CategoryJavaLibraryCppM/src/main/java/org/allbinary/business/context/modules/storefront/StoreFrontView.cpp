
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/StoreFrontView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"


StoreFrontView::StoreFrontView(StoreFrontInterface* storeFrontInterface) : logUtil(LogUtil::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf("Constructing: StoreFrontView for: ") +JavaString::valueOf(storeFrontInterface->getName()), this, commonStrings->GET_INSTANCE);
    

                                    }
                                
this->storeFrontInterface= storeFrontInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFrontView::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->storeFrontInterface->toHashMap();;
    

    StoreFrontData* storeFrontData = StoreFrontData::getInstance();;
    
hashMap->put(storeFrontData->CURRENTHOMEHOSTNAME, this->storeFrontInterface->getCurrentHomeHostName());
    
hashMap->put(storeFrontData->CURRENTHOMEHOSTNAMEPATH, this->storeFrontInterface->getCurrentHomeHostNamePath());
    
hashMap->put(storeFrontData->CURRENTHOSTNAME, this->storeFrontInterface->getCurrentHostName());
    
hashMap->put(storeFrontData->CURRENTHOSTNAMEPATH, this->storeFrontInterface->getCurrentHostNamePath());
    
hashMap->put(BasketData::NAME, this->storeFrontInterface->getBasketName());
    

    Node* node = ModDomHelper::createNameValueNodes(document, storeFrontData->NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTVIEW_CPP
