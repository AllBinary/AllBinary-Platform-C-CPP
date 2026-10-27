
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomNodeHelper;
class DomSearchHelper;
class LogUtil;
class StringMaker;
class Attr;
class NamedNodeMap;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransformInfoInterface;
class TransformInfoData;
class TransformInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoDomNode
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: TransformInfoInterface* transformInfoInterface;

    private: std::string mappedName;

public: TransformInfoDomNode(Node* node);

public: TransformInfoDomNode(TransformInfoInterface* transformInfoInterface);

public: TransformInfoDomNode(TransformInfoInterface* transformInfoInterface, std::string mappedName);

public: TransformInfoDomNode(std::string name, std::string mappedName);

    public: TransformInfoInterface* getTransformInfoInterface();

    public: std::string getMappedName();

    public: std::string getReplaceKey();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/w3c/dom/Attr.h>)
#include <org/w3c/dom/Attr.h>
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
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoData.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfo.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#endif

        #endif
    
