
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYBUILDER_H
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYBUILDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TransformInfoHttpStoreFactory;
class TransformInfoObjectConfigAndManipulatorFactory;
class TransformInfoObjectConfigGeneratorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransformInfoEntityFactory;
class TransformInfoEntity;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoEntityBuilder
            : public virtual Object
         {

    public: static TransformInfoEntity* getInstance();


            
    public: TransformInfoEntityBuilder();
        
};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYBUILDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYBUILDER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITYBUILDER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreFactory.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h>
#endif
#if __has_include("org/allbinary/data/tables/transform/info/TransformInfoEntityFactory.h")
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityFactory.h"
#endif
#if __has_include("org/allbinary/data/tables/transform/info/TransformInfoEntity.h")
#include "org/allbinary/data/tables/transform/info/TransformInfoEntity.h"
#endif

        #endif
    
