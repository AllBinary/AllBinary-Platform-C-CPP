
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORENOMANIPULATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORENOMANIPULATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class TransformInfoObjectConfigNoManipulationFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoHttpStoreNoManipulation: public TransformInfoHttpStore {

public: TransformInfoHttpStoreNoManipulation(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setObjectConfigFile(std::string value);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void setObjectConfig(std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORENOMANIPULATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORENOMANIPULATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORENOMANIPULATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigNoManipulationFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigNoManipulationFactory.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h"
#endif

        #endif
    
