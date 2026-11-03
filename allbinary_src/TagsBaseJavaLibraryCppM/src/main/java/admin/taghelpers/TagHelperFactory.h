
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ADMIN_TAGHELPERS_TAGHELPERFACTORY_H
        #define ADMIN_TAGHELPERS_TAGHELPERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>
class PageContext;
class LicensingException;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperFactoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TagHelperFactory
            : public virtual Object
        , public virtual TagHelperFactoryInterface {


            
    public: TagHelperFactory();
        
    /*protected*/ public: CommonStrings* commonStrings;

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

};

            


        #endif //ADMIN_TAGHELPERS_TAGHELPERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_TAGHELPERFACTORY_H_COMPLETE)
        #define ADMIN_TAGHELPERS_TAGHELPERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("admin/taghelpers/TagHelperFactoryInterface.h")
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#endif

        #endif
    
