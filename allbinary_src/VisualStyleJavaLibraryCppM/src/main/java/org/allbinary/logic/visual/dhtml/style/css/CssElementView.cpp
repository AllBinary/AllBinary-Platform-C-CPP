
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/style/css/property/CssPropertiesValidationFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssElementData.h"
#include "CssElementsValidationFactory.h"

class CssElementView
            : public Object
        : public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const TITLE: string = "title";

    private: const DESCRIPTION: string = "description";

    private: value: string;

    private: title: string;

    private: description: string;

    cssElementVector: Vector;

    cssPropertyVector: Vector;

public constructor (){

            super();
        this.cssPropertyVector= new Vector();
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
this.title= stringUtil!.EMPTY_STRING;
    
this.description= stringUtil!.EMPTY_STRING;
    
this.value= stringUtil!.EMPTY_STRING;
    
}


public constructor (Node node){

            super();
        
        try {
            
    valueNode: Node = DomSearchHelper.getNode(DomData.VALUE, node.getChildNodes())!;;
    
this.value= DomNodeHelper.getTextNodeValue(valueNode);
    

    titleValueNode: Node = DomSearchHelper.getNodeNoThrow(this.TITLE, node.getChildNodes())!;;
    

                        if(titleValueNode != 
                                    null
                                )
                        
                                    {
                                    this.title= DomNodeHelper.getTextNodeValue(titleValueNode);
    

                                    }
                                
                        else {
                            
    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
this.title= stringUtil!.EMPTY_STRING;
    

                        }
                            

    descriptionValueNode: Node = DomSearchHelper.getNodeNoThrow(this.DESCRIPTION, node.getChildNodes())!;;
    

                        if(descriptionValueNode != 
                                    null
                                )
                        
                                    {
                                    this.description= DomNodeHelper.getTextNodeValue(descriptionValueNode);
    

                                    }
                                
                        else {
                            this.description= StringUtil.getInstance()!.EMPTY_STRING;
    

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("Value: ")!.append(this.value)!.append("\nTitle: ")!.append(this.title)!.append("\nDescription: ")!.append(this.description)!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

    cssElementStyleNodeVector: Vector = DomSearchHelper.getAllNodes(CssElementData.getInstance()!.NAME, node.getChildNodes())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Child Css Elements: " +cssElementStyleNodeVector!.length, this, "CssElementView()");
    

                                    }
                                
this.cssElementVector= CssElementsValidationFactory.getInstance(cssElementStyleNodeVector);
    

    nodeList: NodeList = node.getChildNodes()!;;
    
this.cssPropertyVector= CssPropertiesValidationFactory.getInstance(nodeList);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put(new StringMaker().append("Value: ")!.append(this.value)!.append("\nTitle: ")!.append(this.title)!.append("\nDescription: ")!.append(this.description)!.toString(), this, this.commonStrings!.CONSTRUCTOR, e);
    

                                    }
                                



                            throw new Exception("CssElementView");
                    
}

}


    public string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(DomData.VALUE, this.value);
    
hashMap!.put(this.TITLE, this.title);
    
hashMap!.put(this.DESCRIPTION, this.description);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.toHashMap()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("CssView HashMap: " +hashMap!.toString(), this, "toXmlNode");
    

                                    }
                                

    node: Node = ModDomHelper.createNodeWithValueNodes(document, CssElementData.getInstance()!.NAME, hashMap)!;;
    

    size: int32_t = this.cssPropertyVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    cssPropertyDomNodeInterface: DomNodeInterface = this.cssPropertyVector!.get(index) as DomNodeInterface;;
    
node.appendChild(cssPropertyDomNodeInterface!.toXmlNode(document));
    
}


    size2: int32_t = this.cssElementVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {

    cssElementDomNodeInterface: DomNodeInterface = this.cssElementVector!.get(index) as DomNodeInterface;;
    
node.appendChild(cssElementDomNodeInterface!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

