
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_FILEDOMDATAMODEL_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_FILEDOMDATAMODEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class TableMappingInterface;
class AbFile;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/DomNodeInterface.h"
class FileTableMapping;
class ModDomHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileDomDataModel
            : public virtual Object
        , public virtual DomNodeInterface {

    private: AbFile* file;

public: FileDomDataModel(AbFile* file);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_FILEDOMDATAMODEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_FILEDOMDATAMODEL_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_FILEDOMDATAMODEL_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableMappingInterface.h>)
#include <org/allbinary/data/tables/TableMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/DomNodeInterface.h")
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#endif
#if __has_include("org/allbinary/data/tree/dom/FileTableMapping.h")
#include "org/allbinary/data/tree/dom/FileTableMapping.h"
#endif
#if __has_include("org/allbinary/data/tree/dom/ModDomHelper.h")
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#endif

        #endif
    
