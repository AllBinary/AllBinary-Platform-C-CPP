
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
        



            #include "../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelperFactoryInterface.h"
#include "HelperFactory.h"

class UpdateOrderHelperFactory
            : public Object
        : public TagHelperFactoryInterface {

    private: static const std::string CLASSNAME = "admin.taghelpers.UpdateOrderHelper";

    private: static const std::string FACTORYNAME = "UpdateOrderHelperFactory";

public: UpdateOrderHelperFactory(){
}


                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<any, any> hashMap, PageContext pageContext){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HelperFactory::getInstance(FACTORYNAME, CLASSNAME, hashMap, pageContext);;
    
}


};

            

