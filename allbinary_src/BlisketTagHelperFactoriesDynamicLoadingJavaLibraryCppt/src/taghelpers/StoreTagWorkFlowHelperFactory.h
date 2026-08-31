
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
        



        #ifndef TAGHELPERS_STORETAGWORKFLOWHELPERFACTORY_H
        #define TAGHELPERS_STORETAGWORKFLOWHELPERFACTORY_H

            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/HelperFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreTagWorkFlowHelperFactory
            : public Object
        : public TagHelperFactoryInterface {
        

    private: static const CLASSNAME: string = "taghelpers.StoreTagWorkFlowHelper";

    private: static const FACTORYNAME: string = "taghelpers.StoreTagWorkFlowHelperFactory";

public constructor ();

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public any getInstance(HashMap<any, any> propertiesHashMap, PageContext pageContext);

};

            


        #endif //TAGHELPERS_STORETAGWORKFLOWHELPERFACTORY_H
