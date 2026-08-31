
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

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderItemInterface.h"
#include "ItemData.h"
#include "BasicItemView.h"

class ItemView
            : public Object
         {
        

    private: const itemInterface: OrderItemInterface;

    private: const vector: Vector;

public constructor (OrderItemInterface itemInterface, Vector vector){

            super();
        this.itemInterface= itemInterface;
    
this.vector= vector;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.itemInterface!.toHashMap()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    node: Node = document.createElement(ItemData.ITEM)!;;
    

    basicItemView: BasicItemView = new BasicItemView(this.itemInterface, this.vector);;
    
node.appendChild(basicItemView!.toXmlNode(document));
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    nameArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    name: string = nameArray[index]! as string;;
    

    value: string = hashMap!.get(name) as string;;
    
value= stringUtil!.getNonNull(value);
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    
}


    shippingAddressNode: Node = document.createElement(StreetAddressData.NAME)!;;
    
shippingAddressNode!.appendChild(this.itemInterface!.getShippingAddress()!.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

