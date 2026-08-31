
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
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
        

    private: static const instance: TransformsGeneratorUtil = new TransformsGeneratorUtil();

    public static TransformsGeneratorUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoInterface, string group);

                //@Throws(Exception.constructor)
            
    public string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoObjectConfigInterface, Object transformInfoInterface, string group);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_H
