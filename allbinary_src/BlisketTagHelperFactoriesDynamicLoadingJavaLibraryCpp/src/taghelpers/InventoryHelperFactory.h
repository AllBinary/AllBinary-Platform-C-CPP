
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
        



        #ifndef TAGHELPERS_INVENTORYHELPERFACTORY_H
        #define TAGHELPERS_INVENTORYHELPERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class PageContext;
class LicensingException;
class HelperFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryHelperFactory
            : public virtual Object
         {

    private: static inline const std::string CLASSNAME = "taghelpers.InventoryHelper";

    private: static inline const std::string FACTORYNAME = "taghelpers.InventoryHelperFactory";

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

private: InventoryHelperFactory();

};

            


        #endif //TAGHELPERS_INVENTORYHELPERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGHELPERS_INVENTORYHELPERFACTORY_H_COMPLETE)
        #define TAGHELPERS_INVENTORYHELPERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<admin/taghelpers/HelperFactory.h>)
#include <admin/taghelpers/HelperFactory.h>
#endif

        #endif
    
