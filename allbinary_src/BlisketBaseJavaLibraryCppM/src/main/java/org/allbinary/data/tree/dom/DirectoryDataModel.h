
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DomNodeInterface.h"
#include "FileDomDataModel.h"

class DirectoryDataModel
            : public Object
        : public DomNodeInterface, public TransformInterface {

    private: BasicArrayList fileBasicArrayList;

    private: TransformDocumentInterface transformDocumentInterface;

public: DirectoryDataModel(AbFile file);

    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterface();

    public: void setTransformDocumentInterface(TransformDocumentInterface transformDocumentInterface);

    public: TransformDocumentInterface getTransformDocumentInterface();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_H
