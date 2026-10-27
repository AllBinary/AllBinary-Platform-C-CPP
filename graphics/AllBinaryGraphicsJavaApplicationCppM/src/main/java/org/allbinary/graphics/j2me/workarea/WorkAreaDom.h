
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomHelper;
class BasicArrayList;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkAreaDom
            : public virtual Object
         {

    public: static inline const std::string WORKAREA = "workArea";

    public: static inline const std::string NAME = "name";

    public: static inline const std::string FRAMES = "frames";

    private: std::string name;

    private: BasicArrayList* canvasNodeList;

public: WorkAreaDom(Document* document);

    public: std::string getName();

    public: BasicArrayList* getCanvasNodes();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_H_COMPLETE
        #if __has_include(<org/allbinary/dom/DomHelper.h>)
#include <org/allbinary/dom/DomHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif

        #endif
    
