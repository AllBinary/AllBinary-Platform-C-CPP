
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITYINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementAreasEntityInterface: public BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    Vector get(std::string storeName);

                //@Throws(Exception.constructor)
            
    AdvertisementAreaInterface get(std::string storeName, std::string advertisementAreaName);

    void delete_(std::string value);

    void insert(Vector values);

    void update(HashMap<any, any> updatedValues);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITYINTERFACE_H
