
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
        



        #ifndef TAGHELPERS_VIEWHELPERFACTORY_H
        #define TAGHELPERS_VIEWHELPERFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/HelperFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewHelperFactory
            : public Object
        , public TagHelperFactoryInterface {

    private: static inline const std::string CLASSNAME = "taghelpers.ViewHelper";

    private: static inline const std::string FACTORYNAME = "taghelpers.ViewHelperFactory";

public: ViewHelperFactory();

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

};

            


        #endif //TAGHELPERS_VIEWHELPERFACTORY_H
