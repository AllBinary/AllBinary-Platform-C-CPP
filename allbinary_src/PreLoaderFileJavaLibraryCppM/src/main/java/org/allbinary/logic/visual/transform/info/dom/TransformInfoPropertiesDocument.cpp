
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoPropertiesDocument
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const document: Document;

public constructor (string filePath){

            super();
        
    xmlFile: AbFile = AbFile.createAbFile(filePath)!;;
    
this.document= DomDocumentFileHelper.createDocument(xmlFile);
    
}


    public HashMap<any, any> toTransformInfoPropertiesHashMap(){

        try {
            
    transformInfoPropertiesHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    transformInfosNode: Node = this.document.getElementsByTagName(TransformInfosData.getInstance()!.NAME)!.item(0)!;;
    

    transformInfosChildNodeList: NodeList = transformInfosNode!.getChildNodes()!;;
    

    transformInfoNodeVector: Vector = DomSearchHelper.getAllNodes(TransformInfoData.getInstance()!.NAME, transformInfosChildNodeList)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Size: " +transformInfoNodeVector!.length, this, "toTransformInfoPropertiesHashMap()");
    

                                    }
                                

    size: int32_t = transformInfoNodeVector!.length!;;
    

    node: Node;;
    

    transformInfoProperties: TransformInfoProperties;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
node= transformInfoNodeVector!.get(index) as Node;
    
transformInfoProperties= TransformInfoPropertiesFactory.getInstance()!.getInstance(node);
    
transformInfoPropertiesHashMap!.put(transformInfoProperties!.getName(), transformInfoProperties);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoPropertiesHashMap;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "toTransformInfoPropertiesHashMap()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

