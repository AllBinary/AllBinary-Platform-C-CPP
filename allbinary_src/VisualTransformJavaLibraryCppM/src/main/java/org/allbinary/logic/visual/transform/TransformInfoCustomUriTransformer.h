
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class URIResolver;
class BasicUriResolver;
class CustomUriResolver;
class AbeClientInformationInterface;
class TransformInfoInterface;
class TransformInfoObjectConfigAndManipulatorFactory;
class TransformInfoObjectConfigInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/BasicTransformer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoCustomUriTransformer: public BasicTransformer {

public: TransformInfoCustomUriTransformer(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H_COMPLETE
        #if __has_include(<javax/xml/transform/URIResolver.h>)
#include <javax/xml/transform/URIResolver.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/BasicUriResolver.h>)
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/CustomUriResolver.h>)
#include <org/allbinary/data/tree/dom/CustomUriResolver.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/BasicTransformer.h")
#include "org/allbinary/logic/visual/transform/BasicTransformer.h"
#endif

        #endif
    
