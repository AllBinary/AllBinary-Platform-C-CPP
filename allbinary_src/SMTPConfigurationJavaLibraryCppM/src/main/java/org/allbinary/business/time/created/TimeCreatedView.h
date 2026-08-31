
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_TIME_CREATED_TIMECREATEDVIEW_H
        #define ORG_ALLBINARY_BUSINESS_TIME_CREATED_TIMECREATEDVIEW_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeCreated.h"

class TimeCreatedView
            : public Object
        : public DomNodeInterface {
        

    private: timeCreated: TimeCreated;

public constructor (TimeCreated timeCreated);

public constructor (Node node);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

    public TimeCreated getTimeCreated();

    public setTimeCreated(TimeCreated timeCreated);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_TIME_CREATED_TIMECREATEDVIEW_H
