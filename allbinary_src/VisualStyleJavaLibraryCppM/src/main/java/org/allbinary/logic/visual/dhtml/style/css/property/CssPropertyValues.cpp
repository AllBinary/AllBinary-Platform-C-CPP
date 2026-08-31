
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssPropertyValueData.h"
#include "CssPropertyData.h"

class CssPropertyValues
            : public Object
        : public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: propertyValueVector: Vector;

public constructor (){

            super();
        this.propertyValueVector= new Vector();
    
}


public constructor (Node node){

            super();
        
    indexPropertyValueHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
this.propertyValueVector= new Vector();
    

    cssPropertyNodeVector: Vector = DomSearchHelper.getAllNodes(CssPropertyValueData.getInstance()!.NAME, node.getChildNodes())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.STYLE))
                        
                                    {
                                    this.logUtil!.putF("Number Of Properties: " +cssPropertyNodeVector!.length, this, "CssProperties()");
    

                                    }
                                

    size: int32_t = cssPropertyNodeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    cssPropertyValueNode: Node = cssPropertyNodeVector!.get(index) as Node;;
    

    valueNode: Node = DomSearchHelper.getNode(DomData.VALUE, cssPropertyValueNode!.getChildNodes())!;;
    

    propertyValue: string = DomNodeHelper.getTextNodeValue(valueNode)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.STYLE))
                        
                                    {
                                    this.logUtil!.putF("Property Value: " +propertyValue, this, "CssProperties()");
    

                                    }
                                

    indexNode: Node = DomSearchHelper.getNode(DomData.INDEX, cssPropertyValueNode!.getChildNodes())!;;
    

    indexValue: string = DomNodeHelper.getTextNodeValue(indexNode)!;;
    
indexPropertyValueHashMap!.put(indexValue, propertyValue);
    
}


    size2: int32_t = indexPropertyValueHashMap!.keys().size()!;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {

    indexInt: Integer = new Integer(index);;
    

    propertyValue: string = indexPropertyValueHashMap!.get(indexInt!.toString()) as string;;
    
this.propertyValueVector!.add(propertyValue);
    
}

}


    public HashMap<any, any> toHashMap(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    cssPropertyValueData: CssPropertyValueData = CssPropertyValueData.getInstance()!;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    size: int32_t = this.propertyValueVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    value: string = this.propertyValueVector!.get(index) as string;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(cssPropertyValueData!.NAME);
    
stringBuffer!.append(commonSeps!.BRACKET_OPEN);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(commonSeps!.BRACKET_CLOSE);
    
hashMap!.put(stringBuffer!.toString(), value);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    hashMap: HashMap<any, any> = this.toHashMap()!;;
    
this.logUtil!.putF("CssPropertyValues HashMap: " +hashMap!.toString(), this, "toXmlNode()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueIndexNodes(document, CssPropertyData.getInstance()!.VALUES, CssPropertyValueData.getInstance()!.NAME, this.propertyValueVector);;
    
}


};

            

