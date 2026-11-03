
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class XmlDocumentHelper;
class AbFile;
class Directory;
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
class TransformDocumentFactory;
class TransformDocumentInterface;
class TransformInfoInterface;
class BasicArrayList;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/DomNodeInterface.h"
class FileDomDataModel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DirectoryDataModel
            : public virtual Object
        , public virtual DomNodeInterface, public virtual TransformInterface {

    private: BasicArrayList* fileBasicArrayList;

    private: TransformDocumentInterface* transformDocumentInterface;

public: DirectoryDataModel(AbFile* file);

    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getTransformInfoInterface();

    public: void setTransformDocumentInterface(TransformDocumentInterface* transformDocumentInterface);

    public: TransformDocumentInterface* getTransformDocumentInterface();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
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
#if __has_include("org/allbinary/data/tree/dom/DomNodeInterface.h")
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#endif
#if __has_include("org/allbinary/data/tree/dom/FileDomDataModel.h")
#include "org/allbinary/data/tree/dom/FileDomDataModel.h"
#endif

        #endif
    
