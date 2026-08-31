
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/logic/visual/transform/template/XslData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigInterface.h"
#include "TransformInfoObjectConfigData.h"

class TransformInfoObjectConfig
            : public Object
        : public TransformInfoObjectConfigInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const ownerTransformInfoInterface: TransformInfoInterface;

    private: document: Document;

    private: outputTypeName: string;

public constructor (Object transformInfoInterface);

public constructor (Object transformInfoInterface, Object document);

public constructor (Object transformInfoInterface, string name, string type);

    createDocument();

    TransformInfoInterface getTransformInfoInterface();

                //@Throws(Exception.constructor)
            
    public Document toXmlDoc();

    setDocument(Document document);

    public bool containsView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    NamedNodeMap getTemplateAttributes();

                //@Throws(Exception.constructor)
            
    public string getName();

                //@Throws(Exception.constructor)
            
    public setName(string name);

                //@Throws(Exception.constructor)
            
    Vector getNodeVector(string nodeName);

                //@Throws(Exception.constructor)
            
    Vector getTransformDomNodes(string nodeName);

                //@Throws(Exception.constructor)
            
    public Vector getTransforms(string nodeName);

                //@Throws(Exception.constructor)
            
    public Vector getTransformsGroup(string group);

                //@Throws(Exception.constructor)
            
    public Vector getTransformDomNodes();

                //@Throws(Exception.constructor)
            
    public Vector getTransforms();

                //@Throws(Exception.constructor)
            
    public Vector getGroupTransforms();

                //@Throws(Exception.constructor)
            
    public Vector getParentTransforms();

    Node getRootNode();

    public setOutputTypeName(string outputTypeName);

                //@Throws(Exception.constructor)
            
    public string getOutputTypeName();

                //@Throws(Exception.constructor)
            
    public string getInputOutputTypeName();

                //@Throws(Exception.constructor)
            
    public string getInputOutputTypeFile();

                //@Throws(Exception.constructor)
            
    public string getImportUriPath();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_H
