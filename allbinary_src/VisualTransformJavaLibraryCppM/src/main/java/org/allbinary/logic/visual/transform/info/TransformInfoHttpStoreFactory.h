
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h"
class TransformInfoHttpStore;
class TransformInfoInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoHttpStoreFactory
            : public virtual Object
        , public virtual TransformInfoFactoryInterface {

    private: static TransformInfoHttpStoreFactory* instance_owner();
    private: static TransformInfoHttpStoreFactory* instance;

    public: static TransformInfoHttpStoreFactory* getInstance();

private: TransformInfoHttpStoreFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getInstance(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTOREFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#endif

        #endif
    
