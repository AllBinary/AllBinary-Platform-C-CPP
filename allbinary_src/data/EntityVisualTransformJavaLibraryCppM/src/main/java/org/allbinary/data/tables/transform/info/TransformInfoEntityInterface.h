
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class PageContext;
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
class TransformInfoInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoEntityInterface: public BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    public: virtual TransformInfoInterface* get(std::string name, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getObjectConfigs(std::string storeName) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getNames(std::string storeName) = 0;

    public: virtual void delete_(std::string name) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

    public: virtual void update(HashMap<Object*, Object*>* updatedValues) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/data/tables/BasicDataTableInterface.h>)
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif

        #endif
    
