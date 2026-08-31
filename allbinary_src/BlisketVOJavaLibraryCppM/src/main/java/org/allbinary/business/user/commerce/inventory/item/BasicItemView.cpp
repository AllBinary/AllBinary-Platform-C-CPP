
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

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ItemInterface.h"
#include "BasicItemData.h"

class BasicItemView
            : public Object
        : public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const itemInterface: ItemInterface;

    private: const vector: Vector;

public constructor (ItemInterface itemInterface, Vector vector){

            super();
        this.itemInterface= itemInterface;
    
this.vector= vector;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "toXmlNode");
    

                                    }
                                

    hashMap: HashMap<any, any> = this.itemInterface!.toHashMap()!;;
    

    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    
hashMap!.put(BasicItemData.IMAGE, EMPTY_STRING);
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    node: Node = document.createElement(BasicItemData.ITEM)!;;
    

    nameArray: std::vector<any> = keySet!.()!;;
    

    size2: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {

    name: string = nameArray[index]! as string;;
    

    value: string = hashMap!.get(name) as string;;
    
value= stringUtil!.getNonNull(value);
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    
}


    totalNode: Node = ModDomHelper.createNameValueNodes(document, BasicItemData.TOTAL, this.itemInterface!.getTotal()!.toString())!;;
    
node.appendChild(totalNode);
    

    size: int32_t = this.vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    domNodeInterface: DomNodeInterface = this.vector.get(index) as DomNodeInterface;;
    

    customNode: Node = domNodeInterface!.toXmlNode(document)!;;
    
node.appendChild(customNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

