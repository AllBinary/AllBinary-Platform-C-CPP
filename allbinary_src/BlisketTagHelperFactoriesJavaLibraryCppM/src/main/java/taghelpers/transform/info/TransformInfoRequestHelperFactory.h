
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
        



        #ifndef TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPERFACTORY_H
        #define TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPERFACTORY_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/TagHelperFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoRequestHelper.h"

class TransformInfoRequestHelperFactory: public TagHelperFactory {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: TransformInfoRequestHelperFactory();

                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*> hashMap, PageContext pageContext);

};

            


        #endif //TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPERFACTORY_H
