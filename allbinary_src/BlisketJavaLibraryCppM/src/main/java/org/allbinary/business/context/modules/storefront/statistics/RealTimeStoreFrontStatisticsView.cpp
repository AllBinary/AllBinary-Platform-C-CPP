
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsView.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsView.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsView.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsView.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsData.h"

class RealTimeStoreFrontStatisticsView
            : public Object
        , public DomNodeInterface {

    private: StoreFrontStatisticsInterface* storeFrontStatisticsInterface;

    private: UserRole* userRole;

public: RealTimeStoreFrontStatisticsView(StoreFrontStatisticsInterface* storeFrontStatisticsInterface, UserRole* userRole){
this->storeFrontStatisticsInterface= storeFrontStatisticsInterface;
    
this->userRole= userRole;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    Node* node = document->createElement(StoreFrontStatisticsData::getInstance()->NAME);;
    

    StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface = this->storeFrontStatisticsInterface->getAdvertisements();;
    

    DomNodeInterface* storeFrontAdvertisementsStatisticsDomNodeInterface = new StoreFrontAdvertisementsStatisticsView(storeFrontAdvertisementsStatisticsInterface);;
    
node->appendChild(storeFrontAdvertisementsStatisticsDomNodeInterface->toXmlNode(document));
    

    StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface = this->storeFrontStatisticsInterface->getInventory();;
    

    DomNodeInterface* storeFrontInventoryStatisticsDomNodeInterface = new StoreFrontInventoryStatisticsView(storeFrontInventoryStatisticsInterface);;
    
node->appendChild(storeFrontInventoryStatisticsDomNodeInterface->toXmlNode(document));
    

    StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface = this->storeFrontStatisticsInterface->getOrders();;
    

    DomNodeInterface* storeFrontOrdersHistoryStatisticsDomNodeInterface = new StoreFrontOrdersHistoryStatisticsView(storeFrontOrdersHistoryStatisticsInterface);;
    
node->appendChild(storeFrontOrdersHistoryStatisticsDomNodeInterface->toXmlNode(document));
    

                        if(this->userRole == UserRoleFactory::getInstance()->ADMINISTRATOR)
                        
                                    {
                                    
    StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface = this->storeFrontStatisticsInterface->getUsers();;
    

    DomNodeInterface* storeFrontUsersStatisticsDomNodeInterface = new StoreFrontUsersStatisticsView(storeFrontUsersStatisticsInterface);;
    
node->appendChild(storeFrontUsersStatisticsDomNodeInterface->toXmlNode(document));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

