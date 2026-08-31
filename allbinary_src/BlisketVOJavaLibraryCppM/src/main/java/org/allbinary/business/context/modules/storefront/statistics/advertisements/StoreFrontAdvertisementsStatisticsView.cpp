
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontAdvertisementsStatisticsInterface.h"
#include "StoreFrontAdvertisementsStatisticsData.h"

class StoreFrontAdvertisementsStatisticsView
            : public Object
        : public DomNodeInterface {
        

    private: storeFrontAdvertisementsStatisticsInterface: StoreFrontAdvertisementsStatisticsInterface;

public constructor (StoreFrontAdvertisementsStatisticsInterface storeFrontAdvertisementsStatisticsInterface){

            super();
        this.storeFrontAdvertisementsStatisticsInterface= storeFrontAdvertisementsStatisticsInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.storeFrontAdvertisementsStatisticsInterface!.toHashMap()!;;
    

    node: Node = ModDomHelper.createNameValueNodes(document, StoreFrontAdvertisementsStatisticsData.getInstance()!.NAME, hashMap)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

