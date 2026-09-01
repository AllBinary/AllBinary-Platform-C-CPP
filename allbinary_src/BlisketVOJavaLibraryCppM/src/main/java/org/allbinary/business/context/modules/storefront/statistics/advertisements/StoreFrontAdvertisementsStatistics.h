
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ADVERTISEMENTS_STOREFRONTADVERTISEMENTSSTATISTICS_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ADVERTISEMENTS_STOREFRONTADVERTISEMENTSSTATISTICS_H

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontAdvertisementsStatisticsInterface.h"

class StoreFrontAdvertisementsStatistics
            : public Object
        : public StoreFrontAdvertisementsStatisticsInterface {

public: StoreFrontAdvertisementsStatistics(StoreFrontInterface storeFrontInterface);

    public: HashMap<any, any> toHashMap();

    public: Vector toVector();

    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ADVERTISEMENTS_STOREFRONTADVERTISEMENTSSTATISTICS_H
