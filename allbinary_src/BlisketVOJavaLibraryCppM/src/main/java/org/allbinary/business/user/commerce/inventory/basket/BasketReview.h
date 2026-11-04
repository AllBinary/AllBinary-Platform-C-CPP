
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
            #include "java/lang/Float.h"
        
#include <java/util/HashSet.h>
#include <java/util/Set.h>
class BasicArrayList;
class BasicArrayListD;
class Item;
class ItemView;

class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasketData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasketReview
            : public virtual Object
         {

    public: BasicArrayList* items;

public: BasketReview();

    public: bool isValid();

    public: void addItem(Item* item);

    public: BasicArrayList* getItems();

    public: void removeItem(std::string id);

    public: void adjustItem(std::string id, std::string num);

    public: std::string getTotalWeight();

    public: int32_t getNumberOfItems();

    public: Set* getIds();

    public: int32_t getNumberOf(std::string id);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETREVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETREVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETREVIEW_H_COMPLETE
        #if __has_include(<java/util/HashSet.h>)
#include <java/util/HashSet.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/Item.h>)
#include <org/allbinary/business/user/commerce/inventory/item/Item.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/ItemView.h>)
#include <org/allbinary/business/user/commerce/inventory/item/ItemView.h>
#endif

#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/basket/BasketData.h")
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#endif

        #endif
    
