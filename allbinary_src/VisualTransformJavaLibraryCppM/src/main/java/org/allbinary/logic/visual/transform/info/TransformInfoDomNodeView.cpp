
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoDomNode.h"
#include "TransformInfoInterface.h"
#include "TransformInfoData.h"

class TransformInfoDomNodeView: public TransformInfoDomNode: public DomNodeInterface {
        

public constructor (TransformInfoInterface transformInfoInterface, string mapping){
            super(transformInfoInterface, mapping);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (string name, string mappedName){
            super(name, mappedName);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (string name){
            super(name, 
                            nullptr);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    subViewNode: Node = document.createElement(transformInfoData!.NAME)!;;
    

    viewNameAttr: Attr = document.createAttribute(transformInfoData!.NAME)!;;
    
viewNameAttr!.setValue(this.getTransformInfoInterface()!.getName());
    

    componentNodeAttributes: NamedNodeMap = subViewNode!.getAttributes()!;;
    
componentNodeAttributes!.setNamedItem(viewNameAttr);
    

                        if(this.getMappedName() != 
                                    null
                                )
                        
                                    {
                                    
    mappedNameAttr: Attr = document.createAttribute(transformInfoData!.MAPPED)!;;
    
mappedNameAttr!.setValue(this.getMappedName());
    
componentNodeAttributes!.setNamedItem(mappedNameAttr);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subViewNode;
    
}


};

            

