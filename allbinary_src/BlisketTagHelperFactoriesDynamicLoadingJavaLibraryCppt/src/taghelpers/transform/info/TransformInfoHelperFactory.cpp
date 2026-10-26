
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
        



            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <admin/taghelpers/HelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoHelperFactory
            : public Object
        : public TagHelperFactoryInterface {

    private: static const std::string CLASSNAME = "taghelpers.transform.info.TransformInfoHelper";

    private: static const std::string FACTORYNAME = "TransformInfoHelperFactory";

public: TransformInfoHelperFactory(){
}


                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*> hashMap, PageContext pageContext){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HelperFactory::getInstance(FACTORYNAME, CLASSNAME, hashMap, pageContext);;
    
}


};

            

