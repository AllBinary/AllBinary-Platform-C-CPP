
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTHELPERFACTORY_H
        #define ADMIN_TAGHELPERS_STOREFRONTHELPERFACTORY_H

            #include "../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelperFactoryInterface.h"
#include "HelperFactory.h"

class StoreFrontHelperFactory
            : public Object
        : public TagHelperFactoryInterface {

    private: static const std::string CLASSNAME = "admin.taghelpers.StoreFrontHelper";

    private: static const std::string FACTORYNAME = "StoreFrontHelperFactory";

public: StoreFrontHelperFactory();

                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<any, any> hashMap, PageContext pageContext);

};

            


        #endif //ADMIN_TAGHELPERS_STOREFRONTHELPERFACTORY_H
