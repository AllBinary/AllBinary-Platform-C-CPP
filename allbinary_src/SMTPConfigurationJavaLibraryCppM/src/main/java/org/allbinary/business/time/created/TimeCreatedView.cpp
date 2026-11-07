
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_TIME_CREATED_TIMECREATEDVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_TIME_CREATED_TIMECREATEDVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/time/created/TimeCreatedView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/time/created/TimeCreated.h"


TimeCreatedView::TimeCreatedView(TimeCreated* timeCreated){
this->setTimeCreated(timeCreated);
    
}


TimeCreatedView::TimeCreatedView(Node* node){
this->setTimeCreated(new TimeCreated(DomNodeHelper::getTextNodeValue(node)));
    
}


                //@Throws(Exception.constructor)
            
    auto TimeCreatedView::toXmlNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createTextNode(document, EntryData::getInstance()->TIMECREATED, JavaString::valueOf(this->getTimeCreated()));;
    
}


    auto TimeCreatedView::getTimeCreated() -> TimeCreated*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeCreated;
    
}


    auto TimeCreatedView::setTimeCreated(TimeCreated* timeCreated) -> void{
this->timeCreated= timeCreated;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_TIME_CREATED_TIMECREATEDVIEW_CPP
