
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class InputOutputTypeData;
class TransformInfoInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h"
class StoreFileGenerator;
class BasicGenerator;
class TransformInfoObjectConfigGenerator;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoObjectConfigGeneratorFactory
            : public virtual Object
        , public virtual TransformInfoObjectConfigGeneratorFactoryInterface {

    private: static TransformInfoObjectConfigGeneratorFactory* instance_owner();
    private: static TransformInfoObjectConfigGeneratorFactory* instance;

    public: static TransformInfoObjectConfigGeneratorFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: TransformInfoObjectConfigGeneratorFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigGenerator* getInstance(TransformInfoInterface* transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/InputOutputTypeData.h>)
#include <org/allbinary/logic/io/InputOutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/generator/BasicGenerator.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/BasicGenerator.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"
#endif

        #endif
    
