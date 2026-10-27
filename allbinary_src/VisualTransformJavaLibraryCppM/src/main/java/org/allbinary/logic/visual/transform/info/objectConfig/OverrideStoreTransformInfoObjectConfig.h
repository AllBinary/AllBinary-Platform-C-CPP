
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AbeClientInformationInterface;
class TransformInfoInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OverrideStoreTransformInfoObjectConfig: public GenericStoreTransformInfoObjectConfig {

public: OverrideStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

public: OverrideStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

public: OverrideStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Document* generate(Document* objectConfigDocument);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_H_COMPLETE
        #if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"
#endif

        #endif
    
