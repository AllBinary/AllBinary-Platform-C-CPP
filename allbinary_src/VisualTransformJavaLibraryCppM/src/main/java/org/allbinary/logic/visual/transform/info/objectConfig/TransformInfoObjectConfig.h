
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: TransformInfoInterface ownerTransformInfoInterface;

    private: Document document;

    private: std::string outputTypeName;

public: TransformInfoObjectConfig(Object transformInfoInterface);

public: TransformInfoObjectConfig(Object transformInfoInterface, Object document);

public: TransformInfoObjectConfig(Object transformInfoInterface, std::string name, std::string type);

    private: void createDocument();

    protected: TransformInfoInterface getTransformInfoInterface();

                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc();

    protected: void setDocument(Document document);

    public: bool containsView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: NamedNodeMap getTemplateAttributes();

                //@Throws(Exception.constructor)
            
    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void setName(std::string name);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList getNodeVector(std::string nodeName);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList getTransformDomNodes(std::string nodeName);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransforms(std::string nodeName);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformsGroup(std::string group);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformDomNodes();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransforms();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getGroupTransforms();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getParentTransforms();

    private: Node getRootNode();

    public: void setOutputTypeName(std::string outputTypeName);

                //@Throws(Exception.constructor)
            
    public: std::string getOutputTypeName();

                //@Throws(Exception.constructor)
            
    public: std::string getInputOutputTypeName();

                //@Throws(Exception.constructor)
            
    public: std::string getInputOutputTypeFile();

                //@Throws(Exception.constructor)
            
    public: std::string getImportUriPath();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_H
