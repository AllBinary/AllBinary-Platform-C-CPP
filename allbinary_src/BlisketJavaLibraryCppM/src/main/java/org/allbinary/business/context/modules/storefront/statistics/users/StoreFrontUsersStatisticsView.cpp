
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsData.h"


StoreFrontUsersStatisticsView::StoreFrontUsersStatisticsView(StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface){
this->storeFrontUsersStatisticsInterface= storeFrontUsersStatisticsInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFrontUsersStatisticsView::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->storeFrontUsersStatisticsInterface->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, StoreFrontUsersStatisticsData::getInstance()->NAME, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSVIEW_CPP
