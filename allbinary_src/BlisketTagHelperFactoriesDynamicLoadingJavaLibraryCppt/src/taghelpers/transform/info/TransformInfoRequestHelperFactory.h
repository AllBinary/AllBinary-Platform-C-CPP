
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

            #include "../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <admin/taghelpers/HelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoRequestHelperFactory
            : public Object
        : public TagHelperFactoryInterface {

    private: static const std::string CLASSNAME = "taghelpers.transform.info.TransformInfoRequestHelper";

    private: static const std::string FACTORYNAME = "TransformInfoRequestHelperFactory";

public: TransformInfoRequestHelperFactory();

                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<any, any> hashMap, PageContext pageContext);

};

            


        #endif //TAGHELPERS_TRANSFORM_INFO_TRANSFORMINFOREQUESTHELPERFACTORY_H
