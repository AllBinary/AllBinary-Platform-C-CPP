
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETREVIEW_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETREVIEW_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Float.h"
        
#include <java/util/HashSet.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/Item.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemView.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasketData.h"

class BasketReview
            : public Object
         {
        

    items: Vector = new Vector();

public constructor ();

    public Boolean isValid();

    public addItem(Item item);

    public Vector getItems();

    public removeItem(string id);

    public adjustItem(string id, string num);

    public string getTotalWeight();

    public Integer getNumberOfItems();

    public Set getIds();

    public Integer getNumberOf(string id);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETREVIEW_H
