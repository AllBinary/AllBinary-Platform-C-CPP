/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.business.context.modules.storefront.statistics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsView.h"
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsView.h"
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsView.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsView.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/UserRoleFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct RealTimeStoreFrontStatisticsView RealTimeStoreFrontStatisticsView;
struct RealTimeStoreFrontStatisticsView {
    DomNodeInterface DomNodeInterface_interface;
    StoreFrontStatisticsInterface* storeFrontStatisticsInterface;
    UserRole* userRole;
};


RealTimeStoreFrontStatisticsView* RealTimeStoreFrontStatisticsView_new(StoreFrontStatisticsInterface* storeFrontStatisticsInterface, UserRole* userRole);

void RealTimeStoreFrontStatisticsView_init(RealTimeStoreFrontStatisticsView* this, StoreFrontStatisticsInterface* storeFrontStatisticsInterface, UserRole* userRole);
Node* RealTimeStoreFrontStatisticsView_toXmlNode(RealTimeStoreFrontStatisticsView* this, Document* document);

static void RealTimeStoreFrontStatisticsView_initFields(RealTimeStoreFrontStatisticsView* this) {
    
    
}


void RealTimeStoreFrontStatisticsView_init(RealTimeStoreFrontStatisticsView* this, StoreFrontStatisticsInterface* storeFrontStatisticsInterface, UserRole* userRole) {
    RealTimeStoreFrontStatisticsView_initFields(this);
        this->storeFrontStatisticsInterface = storeFrontStatisticsInterface;
        this->userRole = userRole;
}

RealTimeStoreFrontStatisticsView* RealTimeStoreFrontStatisticsView_new(StoreFrontStatisticsInterface* storeFrontStatisticsInterface, UserRole* userRole) {
    RealTimeStoreFrontStatisticsView* this = calloc(1, sizeof(RealTimeStoreFrontStatisticsView));
    RealTimeStoreFrontStatisticsView_init(this, storeFrontStatisticsInterface, userRole);
    return this;
}


// throws Exception
Node* RealTimeStoreFrontStatisticsView_toXmlNode(RealTimeStoreFrontStatisticsView* this, Document* document) {
        Node* node = Document_createElement(document, StoreFrontStatisticsData_getInstance()->NAME);
        StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface = StoreFrontStatisticsInterface_getAdvertisements(this->storeFrontStatisticsInterface);
        DomNodeInterface* storeFrontAdvertisementsStatisticsDomNodeInterface = StoreFrontAdvertisementsStatisticsView_new(storeFrontAdvertisementsStatisticsInterface);
        Node_appendChild(node, DomNodeInterface_toXmlNode(storeFrontAdvertisementsStatisticsDomNodeInterface, document));
        StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface = StoreFrontStatisticsInterface_getInventory(this->storeFrontStatisticsInterface);
        DomNodeInterface* storeFrontInventoryStatisticsDomNodeInterface = StoreFrontInventoryStatisticsView_new(storeFrontInventoryStatisticsInterface);
        Node_appendChild(node, DomNodeInterface_toXmlNode(storeFrontInventoryStatisticsDomNodeInterface, document));
        StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface = StoreFrontStatisticsInterface_getOrders(this->storeFrontStatisticsInterface);
        DomNodeInterface* storeFrontOrdersHistoryStatisticsDomNodeInterface = StoreFrontOrdersHistoryStatisticsView_new(storeFrontOrdersHistoryStatisticsInterface);
        Node_appendChild(node, DomNodeInterface_toXmlNode(storeFrontOrdersHistoryStatisticsDomNodeInterface, document));
        if (this->userRole == UserRoleFactory_getInstance()->ADMINISTRATOR) {
            StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface = StoreFrontStatisticsInterface_getUsers(this->storeFrontStatisticsInterface);
            DomNodeInterface* storeFrontUsersStatisticsDomNodeInterface = StoreFrontUsersStatisticsView_new(storeFrontUsersStatisticsInterface);
            Node_appendChild(node, DomNodeInterface_toXmlNode(storeFrontUsersStatisticsDomNodeInterface, document));
        }
        return node;
}

