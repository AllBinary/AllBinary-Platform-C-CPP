
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigGeneratorFactoryInterface.h"
#include "StoreFileGenerator.h"
#include "BasicGenerator.h"
#include "TransformInfoObjectConfigGenerator.h"

class TransformInfoObjectConfigGeneratorFactory
            : public Object
        : public TransformInfoObjectConfigGeneratorFactoryInterface {

    private: static TransformInfoObjectConfigGeneratorFactory instance() { return TransformInfoObjectConfigGeneratorFactory(); }

    public: static TransformInfoObjectConfigGeneratorFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformInfoObjectConfigGeneratorFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigGenerator getInstance(TransformInfoInterface transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_H
