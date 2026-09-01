
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigAndManipulatorFactoryInterface.h"
#include "TransformInfoObjectConfigInterface.h"

class TransformInfoObjectConfigAndManipulatorFactoryBase
            : public Object
        : public TransformInfoObjectConfigAndManipulatorFactoryInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, AbPath objectConfigFileAbPath);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H
