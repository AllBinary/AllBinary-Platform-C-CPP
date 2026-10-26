
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
        



        #ifndef VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H
        #define VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/document/DocumentToNode.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompoundContextTransformInfoObjectConfig: public GenericStoreTransformInfoObjectConfig {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: CompoundContextTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface);

public: CompoundContextTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, Object document);

public: CompoundContextTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    public: std::string get();

                //@Throws(Exception.constructor)
            
    public: InputStream createInputStream();

};

            


        #endif //VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H
