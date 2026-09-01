
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DomNodeInterface.h"
#include "FileTableMapping.h"
#include "ModDomHelper.h"

class FileDomDataModel
            : public Object
        : public DomNodeInterface {

    private: AbFile file;

public: FileDomDataModel(AbFile file){
this->file= file;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    TableMappingInterface tableMappingInterface = FileTableMapping(this->file) as TableMappingInterface;;
    

    HashMap<any, any> hashMap = tableMappingInterface.toHashMap();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNodeWithValueNodes(document, "file", hashMap);;
    
}


};

            

