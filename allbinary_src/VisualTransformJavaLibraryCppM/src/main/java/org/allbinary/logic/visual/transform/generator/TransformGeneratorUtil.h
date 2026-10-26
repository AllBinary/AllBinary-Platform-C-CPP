
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformGeneratorUtil
            : public Object
         {

    private: static TransformGeneratorUtil instance() { return TransformGeneratorUtil(); }

    public: static TransformGeneratorUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformGeneratorUtil();

                //@Throws(Exception.constructor)
            
    public: void generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, TransformInfoInterface ownerTransformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void generate(AbeClientInformationInterface abeClientInformation, TransformInfoDomNode transformInfoDomNode, TransformInfoInterface ownerTransformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMGENERATORUTIL_H
