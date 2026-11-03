
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/DirectoryDataModel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/FileDomDataModel.h"


DirectoryDataModel::DirectoryDataModel(AbFile* file){
this->fileBasicArrayList= Directory::getInstance()->search(file);
    
this->transformDocumentInterface= dynamic_cast<TransformDocumentInterface*>(TransformDocumentFactory::getInstance());
    
}


    auto DirectoryDataModel::getTypeId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NO_TYPE;
    
}


                //@Throws(Exception.constructor)
            
    auto DirectoryDataModel::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto DirectoryDataModel::setTransformDocumentInterface(TransformDocumentInterface* transformDocumentInterface) -> void{
this->transformDocumentInterface= transformDocumentInterface;
    
}


    auto DirectoryDataModel::getTransformDocumentInterface() -> TransformDocumentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformDocumentInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto DirectoryDataModel::toXmlNode(Document* document) -> Node*{

    Node* dirNode = document->createElement("dir");;
    

    int32_t size = this->fileBasicArrayList->size();;
    

    AbFile* nextFile;;
    

    Node* fileNode;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextFile= dynamic_cast<AbFile*>(this->fileBasicArrayList->get(index));
    
fileNode= (new FileDomDataModel(nextFile))->toXmlNode(document);
    
dirNode->appendChild(fileNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dirNode;
    
}


                //@Throws(Exception.constructor)
            
    auto DirectoryDataModel::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getTransformDocumentInterface()->getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    auto DirectoryDataModel::view() -> std::string{

    Node* node = this->toXmlNode(this->getTransformDocumentInterface()->getDoc());;
    
this->getTransformDocumentInterface()->getBaseNode()->appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return XmlDocumentHelper::toString(this->getTransformDocumentInterface()->getDoc());;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DIRECTORYDATAMODEL_CPP
