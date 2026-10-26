
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformGeneratorUtil.h"

class TransformsGeneratorUtil
            : public Object
         {

    private: static TransformsGeneratorUtil instance() { return TransformsGeneratorUtil(); }

    public: static TransformsGeneratorUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformsGeneratorUtil();

                //@Throws(Exception.constructor)
            
    public: std::string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string group);

                //@Throws(Exception.constructor)
            
    public: std::string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoObjectConfigInterface, Object transformInfoInterface, std::string group);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_H
