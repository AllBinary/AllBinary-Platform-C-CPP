
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericStoreTransformInfoObjectConfig.h"

class OverrideStoreTransformInfoObjectConfig: public GenericStoreTransformInfoObjectConfig {

public: OverrideStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface);

public: OverrideStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, Object document);

public: OverrideStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    protected: Document generate(Document objectConfigDocument);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_H
