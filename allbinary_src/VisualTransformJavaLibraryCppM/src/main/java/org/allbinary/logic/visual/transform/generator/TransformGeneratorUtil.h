
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_H

        
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
class AbeClientInformationInterface;
class TransformFactory;
class TransformInterface;
class TransformInfoDomNode;
class TransformInfoHttpInterface;
class TransformInfoInterface;
class StoreFileGenerator;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformGeneratorUtil
            : public virtual Object
         {

    private: static TransformGeneratorUtil* instance_owner();
    private: static TransformGeneratorUtil* instance;

    public: static TransformGeneratorUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: TransformGeneratorUtil();

                //@Throws(Exception.constructor)
            
    public: void generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, TransformInfoInterface* ownerTransformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void generate(AbeClientInformationInterface* abeClientInformation, TransformInfoDomNode* transformInfoDomNode, TransformInfoInterface* ownerTransformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/InputOutputTypeData.h>)
#include <org/allbinary/logic/io/InputOutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformFactory.h>)
#include <org/allbinary/logic/visual/transform/TransformFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h>
#endif

        #endif
    
