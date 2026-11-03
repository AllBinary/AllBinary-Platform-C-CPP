
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DOM_TRANSFORMINFOPROPERTIESDOCUMENT_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DOM_TRANSFORMINFOPROPERTIESDOCUMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/dom/TransformInfoPropertiesDocument.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoProperties.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoPropertiesFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TransformInfoPropertiesDocument::TransformInfoPropertiesDocument(std::string filePath) : logUtil(LogUtil::getInstance()){

    AbFile* xmlFile = AbFile::createAbFile(filePath);;
    
this->document= DomDocumentFileHelper::createDocument(xmlFile);
    
}


    auto TransformInfoPropertiesDocument::toTransformInfoPropertiesHashMap() -> HashMap<Object*, Object*>*{

        try {
            
    HashMap<Object*, Object*>* transformInfoPropertiesHashMap = StdUtil::getInstance()->createHashMap();;
    

    Node* transformInfosNode = this->document->getElementsByTagName(TransformInfosData::getInstance()->NAME)->item(0);;
    

    NodeList* transformInfosChildNodeList = transformInfosNode->getChildNodes();;
    

    BasicArrayList* transformInfoNodeVector = DomSearchHelper::getAllNodes(TransformInfoData::getInstance()->NAME, transformInfosChildNodeList);;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Size: ") +JavaString::valueOf(transformInfoNodeVector->size()), this, "toTransformInfoPropertiesHashMap()");
    

                                    }
                                

    int32_t size = transformInfoNodeVector->size();;
    

    Node* node;;
    

    TransformInfoProperties* transformInfoProperties;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
node= dynamic_cast<Node*>(transformInfoNodeVector->get(index));
    
transformInfoProperties= TransformInfoPropertiesFactory::getInstance()->getInstance(node);
    
transformInfoPropertiesHashMap->put(transformInfoProperties->getName(), transformInfoProperties);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return transformInfoPropertiesHashMap;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "toTransformInfoPropertiesHashMap()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DOM_TRANSFORMINFOPROPERTIESDOCUMENT_CPP
