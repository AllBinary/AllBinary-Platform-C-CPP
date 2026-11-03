
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class AdvertisementAreaInterface;
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementAreasEntityInterface: public virtual BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* get(std::string storeName) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AdvertisementAreaInterface* get(std::string storeName, std::string advertisementAreaName) = 0;

    public: virtual void delete_(std::string value) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

    public: virtual void update(HashMap<Object*, Object*>* updatedValues) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITYINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>)
#include <org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/BasicDataTableInterface.h>)
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
#endif

        #endif
    
