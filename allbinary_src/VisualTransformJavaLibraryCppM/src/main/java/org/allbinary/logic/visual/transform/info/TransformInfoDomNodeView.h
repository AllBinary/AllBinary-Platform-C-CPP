
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODEVIEW_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODEVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class Attr;
class Document;
class NamedNodeMap;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
class TransformInfoInterface;
class TransformInfoData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoDomNodeView: public TransformInfoDomNode, public virtual DomNodeInterface {

public: TransformInfoDomNodeView(TransformInfoInterface* transformInfoInterface, std::string mapping);

public: TransformInfoDomNodeView(TransformInfoInterface* transformInfoInterface);

public: TransformInfoDomNodeView(std::string name, std::string mappedName);

public: TransformInfoDomNodeView(std::string name);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODEVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODEVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODEVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
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
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoData.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#endif

        #endif
    
