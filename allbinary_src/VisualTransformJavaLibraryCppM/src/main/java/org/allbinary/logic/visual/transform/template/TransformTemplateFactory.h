
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_TRANSFORMTEMPLATEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_TRANSFORMTEMPLATEFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformTemplateInterface.h"

class TransformTemplateFactory
            : public Object
         {

    private: static TransformTemplateFactory instance() { return TransformTemplateFactory(); }

    public: static TransformTemplateFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformTemplateFactory();

                //@Throws(Exception.constructor)
            
    public: TransformTemplateInterface getInstance(AbeClientInformationInterface abeClientInformation, std::string templateName, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_TRANSFORMTEMPLATEFACTORY_H
