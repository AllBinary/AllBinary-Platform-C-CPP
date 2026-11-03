
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONTABLEMAPPING_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONTABLEMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
#include <org/allbinary/data/tables/TableMappingInterface.h>
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ContextConfigurationInterface;
class ContextConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ContextConfigurationTableMapping
            : public virtual Object
        , public virtual TableMappingInterface {

    private: ContextConfigurationInterface* contextConfigurationInterface;

public: ContextConfigurationTableMapping(ContextConfigurationInterface* contextConfigurationInterface);

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONTABLEMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONTABLEMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONTABLEMAPPING_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationInterface.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationData.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationData.h"
#endif

        #endif
    
