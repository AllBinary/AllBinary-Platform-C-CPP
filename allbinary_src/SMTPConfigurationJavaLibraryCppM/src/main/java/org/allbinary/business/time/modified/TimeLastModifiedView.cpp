
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIEDVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIEDVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/time/modified/TimeLastModifiedView.h"
        

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
        #include "org/allbinary/business/time/modified/TimeLastModified.h"


TimeLastModifiedView::TimeLastModifiedView(TimeLastModified* timeLastModified){
this->setTimeLastModified(timeLastModified);
    
}


TimeLastModifiedView::TimeLastModifiedView(Node* node){
this->setTimeLastModified(new TimeLastModified(DomNodeHelper::getTextNodeValue(node)));
    
}


                //@Throws(Exception.constructor)
            
    auto TimeLastModifiedView::toXmlNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createTextNode(document, EntryData::getInstance()->TIMECREATED, JavaString::valueOf(this->getTimeLastModified()));;
    
}


    auto TimeLastModifiedView::getTimeLastModified() -> TimeLastModified*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeLastModified;
    
}


    auto TimeLastModifiedView::setTimeLastModified(TimeLastModified* timeLastModified) -> void{
this->timeLastModified= timeLastModified;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIEDVIEW_CPP
