
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
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
        

    private: const fileBasicArrayList: BasicArrayList;

    private: transformDocumentInterface: TransformDocumentInterface;

public constructor (AbFile file){

            super();
        this.fileBasicArrayList= Directory.getInstance()!.search(file);
    
this.transformDocumentInterface= TransformDocumentFactory.getInstance() as TransformDocumentInterface;
    
}


    public NO_TYPE: int32_t = 0;

    public int32_t getTypeId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NO_TYPE;
    
}


                //@Throws(Exception.constructor)
            
    public TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public setTransformDocumentInterface(TransformDocumentInterface transformDocumentInterface){
this.transformDocumentInterface= transformDocumentInterface;
    
}


    public TransformDocumentInterface getTransformDocumentInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transformDocumentInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    dirNode: Node = document.createElement("dir")!;;
    

    size: int32_t = this.fileBasicArrayList!.size()!;;
    

    nextFile: AbFile;;
    

    fileNode: Node;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextFile= this.fileBasicArrayList!.get(index) as AbFile;
    
fileNode= new FileDomDataModel(nextFile).toXmlNode(document);
    
dirNode!.appendChild(fileNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dirNode;
    
}


                //@Throws(Exception.constructor)
            
    public Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTransformDocumentInterface()!.getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    public string view(){

    node: Node = this.toXmlNode(this.getTransformDocumentInterface()!.getDoc())!;;
    
this.getTransformDocumentInterface()!.getBaseNode()!.appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper.toString(this.getTransformDocumentInterface()!.getDoc());;
    
}


};

            

