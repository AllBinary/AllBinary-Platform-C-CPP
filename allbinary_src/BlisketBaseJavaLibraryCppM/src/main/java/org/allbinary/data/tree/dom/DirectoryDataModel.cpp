
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

public: DirectoryDataModel(AbFile file){
this->fileBasicArrayList= Directory::getInstance().search(file);
    
this->transformDocumentInterface= TransformDocumentFactory::getInstance();
    
}


    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NO_TYPE;
    
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void setTransformDocumentInterface(TransformDocumentInterface transformDocumentInterface){
this->transformDocumentInterface= transformDocumentInterface;
    
}


    public: TransformDocumentInterface getTransformDocumentInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformDocumentInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node dirNode = document.createElement("dir");;
    

    int32_t size = this->fileBasicArrayList.size();;
    

    AbFile nextFile;;
    

    Node fileNode;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextFile= this->fileBasicArrayList.get(index);
    
fileNode= FileDomDataModel(nextFile).toXmlNode(document);
    
dirNode.appendChild(fileNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dirNode;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformDocumentInterface().getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

    Node node = this->toXmlNode(this->getTransformDocumentInterface().getDoc());;
    
this->getTransformDocumentInterface().getBaseNode().appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XmlDocumentHelper::toString(this->getTransformDocumentInterface().getDoc());;
    
}


};

            

