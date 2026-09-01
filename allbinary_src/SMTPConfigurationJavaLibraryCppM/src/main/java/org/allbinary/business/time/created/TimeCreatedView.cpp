
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

    private: TimeCreated timeCreated;

public: TimeCreatedView(TimeCreated timeCreated){
this->setTimeCreated(timeCreated);
    
}


public: TimeCreatedView(Node node){
this->setTimeCreated(TimeCreated(DomNodeHelper::getTextNodeValue(node)));
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createTextNode(document, EntryData::getInstance().TIMECREATED, this->getTimeCreated().toString());;
    
}


    public: TimeCreated getTimeCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeCreated;
    
}


    public: void setTimeCreated(TimeCreated timeCreated){
this->timeCreated= timeCreated;
    
}


};

            

