
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
class DomNodeHelper;
class DomSearchHelper;
class DomDocumentHelper;
class XmlDocumentHelper;
class LogUtil;
class InputOutputTypeData;
class OutputTypeData;
class StringMaker;
class TransformInfoData;
class TransformInfoDomNode;
class TransformInfoInterface;
class TransformInfosData;
class XslData;
class CommonStrings;
class Attr;
class Document;
class NamedNodeMap;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
class TransformInfoObjectConfigData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoObjectConfig
            : public virtual Object
        , public TransformInfoObjectConfigInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: TransformInfoInterface* ownerTransformInfoInterface;

    private: Document* document;

    private: std::string outputTypeName;

public: TransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface);

public: TransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, Document* document);

public: TransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, std::string name, std::string type);

    private: void createDocument();

    /*protected*/ public: TransformInfoInterface* getTransformInfoInterface();

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

    /*protected*/ public: void setDocument(Document* document);

    public: bool containsView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: NamedNodeMap* getTemplateAttributes();

                //@Throws(Exception.constructor)
            
    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void setName(std::string name);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* getNodeVector(std::string nodeName);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* getTransformDomNodes(std::string nodeName);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransforms(std::string nodeName);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransformsGroup(std::string group);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransformDomNodes();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransforms();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getGroupTransforms();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getParentTransforms();

    private: Node* getRootNode();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIG_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/InputOutputTypeData.h>)
#include <org/allbinary/logic/io/InputOutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/io/OutputTypeData.h>)
#include <org/allbinary/logic/io/OutputTypeData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfosData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/XslData.h>)
#include <org/allbinary/logic/visual/transform/template/XslData.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Attr.h>)
#include <org/w3c/dom/Attr.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/NamedNodeMap.h>)
#include <org/w3c/dom/NamedNodeMap.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#endif

        #endif
    
