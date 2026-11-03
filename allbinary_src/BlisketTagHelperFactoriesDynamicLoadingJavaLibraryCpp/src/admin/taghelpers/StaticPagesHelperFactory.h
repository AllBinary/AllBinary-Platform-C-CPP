
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
        



        #ifndef ADMIN_TAGHELPERS_STATICPAGESHELPERFACTORY_H
        #define ADMIN_TAGHELPERS_STATICPAGESHELPERFACTORY_H

        
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
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperFactoryInterface.h"
class HelperFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StaticPagesHelperFactory
            : public virtual Object
        , public virtual TagHelperFactoryInterface {

    private: static inline const std::string CLASSNAME = "admin.taghelpers.StaticPagesHelper";

    private: static inline const std::string FACTORYNAME = "StaticPagesHelperFactory";

public: StaticPagesHelperFactory();

                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

};

            


        #endif //ADMIN_TAGHELPERS_STATICPAGESHELPERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_STATICPAGESHELPERFACTORY_H_COMPLETE)
        #define ADMIN_TAGHELPERS_STATICPAGESHELPERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include("admin/taghelpers/TagHelperFactoryInterface.h")
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#endif
#if __has_include("admin/taghelpers/HelperFactory.h")
#include "admin/taghelpers/HelperFactory.h"
#endif

        #endif
    
